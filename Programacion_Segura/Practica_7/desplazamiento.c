// #include <stdio.h>

// int main() {
//     unsigned int valor_agg = 1; 
//     unsigned int desplazamiento_agg = valor_agg << 32;

//     printf("Valor original: %u\n", valor_agg);
//     printf("Valor desplazado: %u\n", desplazamiento_agg);

// 	// Valor original: 1
// 	// Valor desplazado: 0
//     return 0;
// }

#include <stdio.h>

int main() {
    unsigned int valor_agg = 1;
    unsigned int desplazamiento_agg = 32;

    if (desplazamiento_agg < 32) {
        unsigned int resultado = valor_agg << desplazamiento_agg;
        printf("Valor desplazado: %u\n", resultado);
    } else {
        printf("Error: Desplazamiento fuera de rango.\n");
    }

    return 0;
}
