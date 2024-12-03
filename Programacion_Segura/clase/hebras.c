#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define NUM_THREADS 2

FILE *file;
void *write_to_file(void *arg) {
    int thread_id = *(int *)arg;

    fprintf(file, "Hebra %d escribiendo en el fichero.\n", thread_id);

    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];

    file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error al abrir el fichero");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i;
        if (pthread_create(&threads[i], NULL, write_to_file, &thread_ids[i]) != 0) {
            perror("Error al crear la hebra");
            fclose(file);
            exit(EXIT_FAILURE);
        }
    }

    // Espera a que todas las hebras terminen
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    // Cierra el fichero
    fclose(file);

    return 0;
}
