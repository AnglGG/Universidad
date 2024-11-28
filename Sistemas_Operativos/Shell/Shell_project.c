#include "job_control.h" // Incluye job_control.h para las macros y funciones relacionadas

#define MAX_LINE 256 /* Tamaño máximo para el buffer de entrada */

// -----------------------------------------------------------------------
//                            MAIN          
// -----------------------------------------------------------------------
int main(void) {
	char inputBuffer[MAX_LINE];     /* Buffer para el comando ingresado */
	int background;                 /* Indica si el comando se ejecuta en segundo plano (&) */
	char *args[MAX_LINE / 2];       /* Máximo de 128 argumentos por línea */
	int pid_fork, pid_wait;         /* PID del proceso creado y del proceso esperado */
	int w_status;                     /* Estado devuelto por waitpid */
	int info;     		               /* Información procesada por analyze_status() */
	enum status status_res;         /* Estado procesado por analyze_status() */
	int group;

	ignore_terminal_signals();
	// signal(SIGINT,  SIG_IGN); // crtl+c interrupt tecleado en el terminal
    // signal(SIGQUIT, SIG_IGN); // ctrl+\ quit tecleado en el terminal
    // signal(SIGTSTP, SIG_IGN); // crtl+z Stop tecleado en el terminal
    // signal(SIGTTIN, SIG_IGN); // proceso en segundo plano quiere leer del terminal 
    // signal(SIGTTOU, SIG_IGN); // proceso en segundo plano quiere escribir en el terminal

	while (1) {
		printf("COMMAND-> ");
		fflush(stdout);

		// Leer el comando ingresado
		get_command(inputBuffer, MAX_LINE, args, &background);
		if (args[0] == NULL) continue; // Ignorar comandos vacíos

		// Crear un nuevo proceso hijo
		pid_fork = fork();
		if (pid_fork < 0) {
			perror("fork");
			continue;
		}
		if (pid_fork == 0) { // Proceso hijo
			group = getpid();
			setpgid(group, group);
			if (background == 0)
				tcsetpgrp(STDIN_FILENO, group); // Asignar el terminal al proceso hijo
			restore_terminal_signals();
			// signal(SIGINT,  SIG_DFL);
			// signal(SIGQUIT, SIG_DFL);
			// signal(SIGTSTP, SIG_DFL);
			// signal(SIGTTIN, SIG_DFL);
			// signal(SIGTTOU, SIG_DFL);
			execvp(args[0], args); // Ejecutar el comando
			printf("Error, command not found: %s\n", args[0]); // Si execvp falla
			exit(-1);
		}else // Proceso padre
		{
			if (background == 0) { // Proceso en primer plano
				pid_wait = waitpid(pid_fork, &w_status, WUNTRACED); // Esperar al hijo (incluir WUNTRACED para detectar procesos suspendidos)
				// Recuperar el terminal para el shell
				tcsetpgrp(STDIN_FILENO, getpid());
				if (pid_wait < 0)
				{
					perror("waitpid");
				} else if (pid_wait > 0)
				{
					status_res = analyze_status(w_status, &info); // Analizar el estado del proceso hijo
					printf("foreground pid: %d, command: %s, %s, info: %d\n",
						pid_fork, args[0], status_strings[status_res], info);
				} else
				{
					status_res = analyze_status(w_status, &info); // Analizar el estado del proceso hijo
					printf("Foreground pid: %d, command: %s, %s, info: %d\n",
						pid_fork, args[0], status_strings[status_res], info);
				}
			} else // Proceso en segundo plano
			{
				// Asignar el hijo a un nuevo grupo de procesos
				new_process_group(pid_fork);
				// Mostrar información sobre el proceso en segundo plano
				printf("Background job running... pid: %d, command: %s\n", pid_fork, args[0]);
			}
		}
	}

	return 0;
	
}
