#include <stdio.h>
int main() {
    // Valor maximo para un entero con signo de 32 bits
    int agg = 4294967295;
	if (agg < 4294967295 )
    	agg += 1;            // Intento de sumar 1 al valor maximo
    printf("Valor de agg: %d\n", agg); 
    // Valor de agg: 0
    return 0;
}