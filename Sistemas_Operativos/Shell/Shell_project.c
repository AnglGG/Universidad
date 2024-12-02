#include "job_control.h" // Incluye job_control.h para las macros y funciones relacionadas

#define MAX_LINE 256 /* Tamaño máximo para el buffer de entrada */

job *tasks;

void manejador_child(int signal)
{
	int w_status;
	int pid_wait = 0;
	enum status status_res;
	const char * command;
	job *child;

	while (1)
	{
		pid_wait = waitpid(-1, &w_status, WUNTRACED | WNOHANG | WCONTINUED);
		if (pid_wait == 0) return; // No hay ningún cambio de los solicitados
		if (pid_wait == -1) return;
		child = get_item_bypid(tasks, pid_wait);
		command = strdup(child->command);
		if (child)
		{
			if (WIFSTOPPED(w_status))
				{
					block_SIGCHLD();
					child->state = STOPPED;
					unblock_SIGCHLD();
					printf("Background pid: %d, command: %s, Stopped.\n", child->pgid, child->command);
				}else if (WIFCONTINUED(w_status))
				{
					block_SIGCHLD();
					child->state = BACKGROUND;
					unblock_SIGCHLD();
					printf("Background pid: %d, command: %s, Continued.\n", child->pgid, child->command);
				}else if (WIFSIGNALED(w_status))
				{
					block_SIGCHLD();
					delete_job(tasks, child);
					unblock_SIGCHLD();
					printf("Background pid: %d, command: %s, Signaled.\n", pid_wait, command);
				}else
				{
					block_SIGCHLD();
					delete_job(tasks, child);
					unblock_SIGCHLD();
					printf("Background pid: %d, command: %s, Exited.\n", pid_wait, command);
				}
		}
	}
}

// -----------------------------------------------------------------------
//                            MAIN          
// -----------------------------------------------------------------------
int main(void) {
	char inputBuffer[MAX_LINE];     /* Buffer para el comando ingresado */
	int background;                 /* Indica si el comando se ejecuta en segundo plano (&) */
	char *args[MAX_LINE / 2];       /* Máximo de 128 argumentos por línea */
	int pid_fork, pid_wait;         /* PID del proceso creado y del proceso esperado */
	int w_status;                     /* Estado devuelto por waitpid */
	enum status status_res;         /* Estado procesado por analyze_status() */
	int group;
	sigset_t mySet;

	job *job_task;

	ignore_terminal_signals();
	signal(SIGCHLD, manejador_child);
	tasks = new_list("Job_list");

	while (1) {
		printf("COMMAND-> ");
		fflush(stdout);

		// Leer el comando ingresado
		get_command(inputBuffer, MAX_LINE, args, &background);
		if (args[0] == NULL) continue; // Ignorar comandos vacíos

		if (strcmp(args[0],  "cd") == 0)
		{
			if (args[1] && chdir(args[1]) == -1)
				printf("No se puede cambiar al directorio basura\n");
			continue;
		}else if (strcmp(args[0], "quit") == 0)
		{
			break;
		}else if (strcmp(args[0], "maskCHLD") == 0)
		{
			sigemptyset(&mySet);
			sigaddset(&mySet, SIGCHLD);
			sigprocmask(SIG_BLOCK, &mySet, NULL);
			continue;
		}
		else if (strcmp(args[0], "unmaskCHLD") == 0)
		{
			sigemptyset(&mySet);
			sigaddset(&mySet, SIGCHLD);
			sigprocmask(SIG_UNBLOCK, &mySet, NULL);
			continue;
		}else if (strcmp(args[0], "jobs") == 0)
		{
			print_job_list(tasks);
			continue;
		}


		// Crear un nuevo proceso hijo
		pid_fork = fork();
		if (pid_fork < 0) {
			perror("fork");
			continue;
		}
		if (pid_fork == 0) { // Proceso hijo
			group = getpid();
			new_process_group(group);
			if (background == 0)
			{
				tcsetpgrp(STDIN_FILENO, group); // Asignar el terminal al proceso hijo
				restore_terminal_signals();
			}
			else
			{
				block_SIGCHLD();
				job_task = new_job(pid_fork, args[0], BACKGROUND);
				add_job(tasks, job_task);
				unblock_SIGCHLD();
			}
			execvp(args[0], args); // Ejecutar el comando
			printf("Error, command not found: %s\n", args[0]); // Si execvp falla
			exit(-1);
		}else // Proceso padre
		{
			if (background == 0) { // Proceso en primer plano
				group = pid_fork;
				new_process_group(group);
				tcsetpgrp(STDIN_FILENO, group);
				pid_wait = waitpid(pid_fork, &w_status, WUNTRACED); // Esperar al hijo (incluir WUNTRACED para detectar procesos suspendidos)
				tcsetpgrp(STDIN_FILENO, getpgid( getpid())); // Recuperar el terminal para el shell
				if (pid_wait < 0)
				{
					perror("waitpid");
				}
				if (WIFSTOPPED(w_status))
				{
					block_SIGCHLD();
					job_task = get_item_bypid(tasks, pid_wait);
					job_task->state = STOPPED;
					unblock_SIGCHLD();
					printf("Foreground pid: %d, command: %s, Stopped\n", pid_fork, args[0]);
				}else if (WIFCONTINUED(w_status))
				{
					block_SIGCHLD();
					job_task = get_item_bypid(tasks, pid_wait);
					job_task->state = BACKGROUND;
					unblock_SIGCHLD();
					printf("Foreground pid: %d, command: %s, Continued\n", pid_fork, args[0] );
				}else if (WIFSIGNALED(w_status))
				{
					printf("Foreground pid: %d, command: %s, Signaled\n", pid_fork, args[0]);
				}else
				{
					printf("Foreground pid: %d, command: %s, Exited\n", pid_fork, args[0]);
				}
			}else // Proceso en segundo plano
			{
				new_process_group(pid_fork);
				block_SIGCHLD();
				job_task = new_job(pid_fork, args[0], BACKGROUND);
				add_job(tasks, job_task);
				unblock_SIGCHLD();
				printf("Background job running... pid: %d, command: %s\n", pid_fork, args[0]);
			}
		}
	}

	return 0;
	
}
