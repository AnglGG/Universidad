#include <stdio.h>

int main() {
	int agg_index = 0;      // Variable no inicializada

	printf("Elemento asignado en la posición: %d\n", agg_index);

	int agg_array[1];
	agg_array[agg_index] = 34;

    return 0;
	// Elemento asignado en la posición: 0
}
