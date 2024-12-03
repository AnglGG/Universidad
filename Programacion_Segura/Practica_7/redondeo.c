#include <stdio.h>
#include <math.h>

int main() {
    float num_agg = 5.8;
    int redondeo_agg = (int) round(num_agg); // Redondeo explícito
    printf("Valor original: %.1f\n", num_agg);
    printf("Valor redondeado: %d\n", redondeo_agg); // Valor redondeado correctamente
    return 0;
	// Valor original: 5.8
	// Valor redondeado: 6
}