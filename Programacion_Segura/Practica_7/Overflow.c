#include <stdio.h>
#include <limits.h>

int main() {
    // Valor maximo para un entero con signo de 32 bits
    long long agg = LLONG_MAX;

	if (agg < LLONG_MAX)
    	agg += 1;            // Intento de sumar 1 al valor maximo
    printf("Valor de agg: %lld\n", agg); 
    // Valor de agg: -2147483648
    return 0;
}