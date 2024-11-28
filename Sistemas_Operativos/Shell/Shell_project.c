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
    int status;                     /* Estado devuelto por waitpid */
    int info;                       /* Información procesada por analyze_status() */
    enum status status_res;         /* Estado procesado por analyze_status() */

    // Ignorar señales relacionadas con el terminal al iniciar el shell
    ignore_terminal_signals();

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
            // Restaurar señales predeterminadas en el proceso hijo
            restore_terminal_signals();

            // Crear un nuevo grupo de procesos para el hijo
            new_process_group(getpid());

            // Ejecutar el comando
            execvp(args[0], args);
            perror("Command not found"); // Si execvp falla
            exit(EXIT_FAILURE);
        } else { // Proceso padre
            if (background == 0) { // Proceso en primer plano
                // Asignar el terminal al proceso hijo
                tcsetpgrp(STDIN_FILENO, pid_fork);

                // Esperar al hijo (incluir WUNTRACED para detectar procesos suspendidos)
                pid_wait = waitpid(pid_fork, &status, WUNTRACED);
                if (pid_wait < 0) {
                    perror("waitpid");
                } else {
                    // Analizar el estado del proceso hijo
                    status_res = analyze_status(status, &info);
                    printf("Foreground pid: %d, command: %s, %s, info: %d\n",
                           pid_fork, args[0], status_strings[status_res], info);
                }

                // Recuperar el terminal para el shell
                tcsetpgrp(STDIN_FILENO, getpid());
            } else { // Proceso en segundo plano
                // Asignar el hijo a un nuevo grupo de procesos
                new_process_group(pid_fork);

                // Mostrar información sobre el proceso en segundo plano
                printf("Background job running... pid: %d, command: %s\n", pid_fork, args[0]);
            }
        }
    }

    return 0;
}
