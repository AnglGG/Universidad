#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void resta_segura(int valor, int decremento) {
    // Comprobamos si la resta generaria un subdesbordamiento
    if (valor - decremento < INT_MIN) {
        printf("Error: Subdesbordamiento detectado. Operacion detenida.\n");
        exit(EXIT_FAILURE); // Finalizamos el programa con un codigo de error
    } else {
        valor -= decremento;
        printf("Resultado de la resta: %d\n", valor);
    }
}

int main() {
    int valor = INT_MIN;
    int decremento = 1;

    printf("Valor inicial: %d\n", valor);
    resta_segura(valor, decremento);

    return 0;
}