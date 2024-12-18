#include "job_control.h" // Incluye job_control.h para las macros y funciones relacionadas
#include <time.h>
#include <fcntl.h>
#include <sys/time.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// ----------------------------- DEFINES Y STRUCTS -----------------------------

#define MAX_LINE 256 /* Tamaño máximo para el buffer de entrada */

#define time_sub(a, b)                 \
    a.tv_sec -= b.tv_sec;              \
    a.tv_nsec -= b.tv_nsec;            \
    if (a.tv_nsec < 0) {               \
        a.tv_sec += 1000000000;        \
        a.tv_sec--;                    \
    }

// Estructura para el alarm-thread
typedef struct {
    int pid;
    int seconds;
} AlarmData;

// --------------------------- PROTOTIPOS DE FUNCIONES -------------------------

void alarm_thread_func(void *arg);
void alarm_thread_command(char **argv);
void manejador_child(int signal);
void process_internal_command(char *args[], int *background);
void handle_redirections(char *args[]);
void handle_bg_command(char *args[]);
void handle_fg_command(char *args[]);

// ---------------------------- FUNCIONES AUXILIARES ---------------------------

void alarm_thread_func(void *arg) {
    AlarmData *data = (AlarmData *)arg;
    sleep(data->seconds);

    if (kill(data->pid, 0) == 0) { // Comprobar si el proceso existe
        printf("El proceso %d sigue activo.\n", data->pid);
        kill(data->pid, SIGKILL); // Matamos el proceso
    } else {
        printf("El proceso %d ya acabó\n", data->pid);
    }
    free(data);
    pthread_exit(NULL); // Termina el hilo
}

void alarm_thread_command(char **argv) {
    int seconds = atoi(argv[1]);
    if (seconds <= 0) {
        fprintf(stderr, "Error: El tiempo debe ser un número positivo.\n");
        return;
    }

    pid_t pid = fork();
    if (pid < 0) {
        perror("Error al hacer fork");
        return;
    } else if (pid == 0) {
        execvp(argv[2], &argv[2]);
        perror("Error al ejecutar el comando");
        exit(EXIT_FAILURE);
    } else {
        pthread_t alarm_thread;
        AlarmData *data = malloc(sizeof(AlarmData));
        if (data == NULL) {
            perror("Error al asignar memoria");
            return;
        }
        data->pid = pid;
        data->seconds = seconds;

        pthread_attr_t attr;
        pthread_attr_init(&attr);
        pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);

        if (pthread_create(&alarm_thread, &attr, (void *(*)(void *))alarm_thread_func, data) != 0) {
            perror("Error al crear el hilo de alarma");
            free(data);
        }
        pthread_attr_destroy(&attr);

        int status;
        waitpid(pid, &status, 0);
    }
}

void manejador_child(int signal) {
    int w_status;
    int pid_wait = 0;
    job *child;

    while (1) {
        pid_wait = waitpid(-1, &w_status, WUNTRACED | WNOHANG | WCONTINUED);
        if (pid_wait <= 0) return;

        block_SIGCHLD();
        child = get_item_bypid(tasks, pid_wait);

        if (child) {
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
			}else
			{
				job_finalizados ++;
				delete_job(tasks, child);
				printf("Background pid: %d, Exited, info: %d\n", pid_wait, WEXITSTATUS(w_status));
			}
        }
        unblock_SIGCHLD();
    }
}

// ---------------------------- FUNCIONES INTERNAS -----------------------------

void process_internal_command(char *args[], int *background) {
    if (strcmp(args[0], "cd") == 0) {
        if (args[1] && chdir(args[1]) == -1) {
            printf("No se puede cambiar al directorio %s\n", args[1]);
        }
    } else if (strcmp(args[0], "quit") == 0) {
        exit(EXIT_SUCCESS);
    } else if (strcmp(args[0], "maskCHLD") == 0) {
        sigset_t mySet;
        sigemptyset(&mySet);
        sigaddset(&mySet, SIGCHLD);
        sigprocmask(SIG_BLOCK, &mySet, NULL);
    } else if (strcmp(args[0], "unmaskCHLD") == 0) {
        sigset_t mySet;
        sigemptyset(&mySet);
        sigaddset(&mySet, SIGCHLD);
        sigprocmask(SIG_UNBLOCK, &mySet, NULL);
    } else if (strcmp(args[0], "jobs") == 0) {
        block_SIGCHLD();
        print_job_list(tasks);
        unblock_SIGCHLD();
    } else if (strcmp(args[0], "alarm-thread") == 0) {
        alarm_thread_command(args);
    }
}

// -------------------------- MANEJO DE COMANDOS -------------------------------

void handle_redirections(char *args[]) {
    int input_fd = -1, output_fd = -1;
    for (int i = 0; args[i]; i++) {
        if (strcmp(args[i], "<") == 0) {
            input_fd = open(args[i + 1], O_RDONLY);
            dup2(input_fd, STDIN_FILENO);
            close(input_fd);
            args[i] = NULL;
        } else if (strcmp(args[i], ">") == 0) {
            output_fd = open(args[i + 1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
            dup2(output_fd, STDOUT_FILENO);
            close(output_fd);
            args[i] = NULL;
        }
    }
}

// ------------------------------- MAIN -----------------------------------------

int main(void) {
    char inputBuffer[MAX_LINE];
    char *args[MAX_LINE / 2];
    int background;

    ignore_terminal_signals();
    signal(SIGCHLD, manejador_child);
    tasks = new_list("Lista de trabajos");

    while (1) {
        printf("COMMAND-> ");
        fflush(stdout);

        background = 0;
        get_command(inputBuffer, MAX_LINE, args, &background);
        if (args[0] == NULL) continue;

        process_internal_command(args, &background);

        if (background == 0) {
            pid_t pid = fork();
            if (pid == 0) {
                handle_redirections(args);
                execvp(args[0], args);
                perror("Error al ejecutar el comando");
                exit(EXIT_FAILURE);
            } else if (pid > 0) {
                waitpid(pid, NULL, 0);
            } else {
                perror("Error al hacer fork");
            }
        }
    }
    return 0;
}
