#include "job_control.h" // Incluye job_control.h para las macros y funciones relacionadas
#include <time.h>
#include <fcntl.h>
#include <sys/time.h>

#define MAX_LINE 256 /* Tamaño máximo para el buffer de entrada */


job *tasks;
int job_finalizados = 0;

void copiar_matriz(char **args, char **args1)
{
	int i = 0;
	while(args[i])
	{
		args1[i] = strdup(args[i]);
		i ++;
	}
}



void background_process(job *process)
{
	int pid_fork = fork();
	if (pid_fork == 0) { // Proceso hijo
		restore_terminal_signals();
		execvp(process->command, process->args_copy); // Ejecutar el comando
		printf("Error, command not found: %s\n", process->command); // Si execvp falla
		exit(-1);
	}else if (pid_fork)// Proceso padre
	{
		//Proceso en background
		process->pgid = pid_fork;
		process = new_job(process->pgid, process->command, RESPAWNABLE);
		add_job(tasks, process);
		printf("Respawnable job running... pid: %d, command: %s\n", pid_fork, process->command);
	}
}


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
		block_SIGCHLD();
		child = get_item_bypid(tasks, pid_wait);
		// command = strdup(child->command);
		if (child)
		{
			if (child->state == RESPAWNABLE)
			{
				job *nuevo_nodo = new_job(0, child->command, RESPAWNABLE);
				copiar_matriz(child->args_copy, nuevo_nodo->args_copy);
				delete_job(tasks, child);
				background_process(nuevo_nodo);
			}else
			{
				if (WIFSTOPPED(w_status))
				{
					child->state = STOPPED;
					printf("Background pid: %d, Suspended, info: %d\n", child->pgid, WSTOPSIG(w_status));
				}else if (WIFCONTINUED(w_status))
				{
					child->state = BACKGROUND;
					printf("Background pid: %d, Continued, info: 0\n", child->pgid);
				}else if (WIFSIGNALED(w_status))
				{
					job_finalizados ++;
					delete_job(tasks, child);
					printf("Background pid: %d, Signaled, info: %d\n", pid_wait, WTERMSIG(w_status));
				}else if (WIFEXITED(w_status))
				{
					job_finalizados ++;
					delete_job(tasks, child);
					printf("Background pid: %d, Exited, info: %d\n", pid_wait, WEXITSTATUS(w_status));
				}
			}
		}
		unblock_SIGCHLD();
	}
}

int func_respawnable(char **args)
{
	int i = 0;
	int mas = 0;
	while (args[i])
	{
		if (strcmp(args[i], "+") == 0)
		{
			
			mas = 1;
		}
		i ++;
	}
	if (args[i] == NULL && mas == 1)
	{
		args[i-1] = args[i];
	}
	return (mas);
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
	int fg = 0; // Esto lo pongo para saber si se está haciendo el foreground o no
	job *job_task;
	int etime = 0;
	int respawnable = 0;
	/*Comando etime*/
	struct timespec start_time, end_time;



	int original_stdin = dup(STDIN_FILENO);  // Guardar descriptor original de stdin
	int original_stdout = dup(STDOUT_FILENO); // Guardar descriptor original de stdout

	ignore_terminal_signals();
	signal(SIGCHLD, manejador_child);
	tasks = new_list("Lista de trabajos");

	while (1) {
		printf("COMMAND-> ");
		fflush(stdout);

		// Leer el comando ingresado
		background = 0;
		get_command(inputBuffer, MAX_LINE, args, &background);
		if (args[0] == NULL) continue; // Ignorar comandos vacíos

		if (strcmp(args[0],  "cd") == 0)
		{
			if (args[1] && chdir(args[1]) == -1)
			{
				printf("No se puede cambiar al directorio %s\n", args[1]);
			}
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
			block_SIGCHLD();
			print_job_list(tasks);
			unblock_SIGCHLD();
			continue;
		}
		else if (strcmp(args[0], "bg") == 0)
		{
			int pos = 1;
			if (args[1])
			{
				pos = atoi(args[1]);
			}
			job_task = get_item_bypos(tasks, pos);
			if (job_task != NULL && job_task->state == RESPAWNABLE)
				job_task->state = BACKGROUND;
			if (job_task != NULL && job_task->state == STOPPED)
			{
				block_SIGCHLD();
				job_task->state = BACKGROUND;
				killpg(job_task->pgid, SIGCONT);
				strcpy(args[0], job_task->command);
				pid_fork = job_task->pgid;
				background = 1;
				fg = 1;
				unblock_SIGCHLD();
			}else continue;
		}
		else if (strcmp(args[0], "fg") == 0)
		{
			int pos = 1;
			fg = 1;
			if (args[1] && args[2] == NULL) // Hay argumento
			{
				pos = atoi(args[1]);
			}
			job_task = get_item_bypos(tasks, pos);
			if (job_task != NULL)
			{
				block_SIGCHLD();
				tcsetpgrp(STDIN_FILENO, job_task->pgid);
				if (job_task->state == STOPPED)
				{
					killpg(job_task->pgid, SIGCONT);
				}
				strcpy(args[0], job_task->command);
				pid_fork = job_task->pgid;
				job_finalizados ++;
				delete_job(tasks, job_task);
				unblock_SIGCHLD();
			}else
			{
				fg = 0;
				continue;
			}
		}else if (strcmp(args[0], "dac") == 0)
		{
			printf("El número total de trabajos ha sido de %d\n", job_finalizados);
			continue;
		}else
		{
			int i = 0;
			int input_fd = -1;
			int output_fd = -1;
			while (args[i])
			{
				if (strcmp(args[i], "<") == 0)
				{
					if (args[i + 1] == NULL)
					{
						fprintf(stderr, "Error: Redirección de entrada incompleta.\n");
						exit(EXIT_FAILURE);
					}
					input_fd = open(args[i + 1], O_RDONLY);
					if (input_fd < 0)
					{
						fprintf(stderr, "Error al abrir el archivo de entrada.\n");
						exit (EXIT_FAILURE);
					}
					dup2(input_fd, STDIN_FILENO);
					close (input_fd);
					int j = i;
					while (args[j + 2] != NULL)
					{
						args[j] = args[j + 2];
						j ++;
					}
					args[j] = NULL;
					i --;
				}else if (strcmp(args[i], ">" ) == 0)
				{
					if (args[i + 1] == NULL)
					{
						fprintf(stderr, "Error: Redirección de salida incompleta.\n");
						exit(EXIT_FAILURE);
					}
					output_fd = open(args[i + 1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
					if (output_fd < 0)
					{
						fprintf(stderr, "Error al abrir el archivo de salida.\n");
						exit (EXIT_FAILURE);
					}
					dup2(output_fd, STDOUT_FILENO);
					close (output_fd);
					int j = i;
					while (args[j + 2] != NULL)
					{
						args[j] = args[j + 2];
						j ++;
					}
					args[j] = NULL;
					i --;
				}
				i ++;
			}
		}



		if (func_respawnable(args))
		{
			background = 1;
			respawnable = 1;
		}

		// Crear un nuevo proceso hijo
		if (fg == 0) pid_fork = fork();

		if (pid_fork < 0) {
			perror("fork");
			continue;
		}
		if (pid_fork == 0) { // Proceso hijo
			group = getpid();
			setpgid(group, group);
			restore_terminal_signals();
			if (background == 0)
			{
				tcsetpgrp(STDIN_FILENO, group); // Asignar el terminal al proceso hijo
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
			if (background) { // Proceso en background
				setpgid(pid_fork, pid_fork);
				block_SIGCHLD();
				job_task = get_item_bypid(tasks, pid_fork);
				if (job_task == NULL)
				{
					job_task = new_job(pid_fork, args[0], BACKGROUND);
					add_job(tasks, job_task);
					if (respawnable == 1)
					{
						job_task->state = RESPAWNABLE;
						copiar_matriz(args, job_task->args_copy);
					}
				}else
				{
					if (respawnable == 1)
					{
						job_task->state = RESPAWNABLE;
						copiar_matriz(args, job_task->args_copy);
					}else
					{
						job_task->state = BACKGROUND;
					}
				}
				unblock_SIGCHLD();
				printf("Background job running... pid: %d, command: %s\n", pid_fork, args[0]);
				fg = 0;
				
			
			}else // Foreground
			{
				group = pid_fork;
				setpgid(group, group);
				tcsetpgrp(STDIN_FILENO, group);
				pid_wait = waitpid(pid_fork, &w_status, WUNTRACED); // Esperar al hijo (incluir WUNTRACED para detectar procesos suspendidos)
				tcsetpgrp(STDIN_FILENO, getpgid( getpid())); // Recuperar el terminal para el shell
				dup2(original_stdin, STDIN_FILENO);
				dup2(original_stdout, STDOUT_FILENO);
				if (pid_wait < 0)
				{
					perror("waitpid");
				}
				block_SIGCHLD();
				if (WIFSTOPPED(w_status))
				{
					job_task = new_job(pid_fork, args[0], BACKGROUND);
					job_task->state = STOPPED;
					add_job(tasks, job_task);
					printf("Foreground pid: %d, command: %s, Suspended, info: %d\n", pid_fork, args[0], WSTOPSIG(w_status));
				}else if (WIFCONTINUED(w_status)) // REVISAR ESTE IF
				{
					/*never reached*/
				}else if (WIFSIGNALED(w_status))
				{
					job_finalizados ++;
					printf("Foreground pid: %d, command: %s, Signaled, info: %d\n", pid_fork, args[0], WTERMSIG(w_status));
				}else if (WIFEXITED(w_status))
				{
					job_finalizados ++;
					printf("Foreground pid: %d, command: %s, Exited, info: %d\n", pid_fork, args[0], WEXITSTATUS(w_status));
				}
				unblock_SIGCHLD();
				fg = 0;
			}
		}
		
		respawnable = 0;
	}
	close(original_stdin);
	close(original_stdout);

	return 0;
	
}
