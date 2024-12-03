#include <stdio.h>

int main() {
    int peq_agg = 100000;
    long gra_agg = 1000000000;
    long resultado_agg = (long) peq_agg * gra_agg;
    
	printf("Resultado: %ld\n", resultado_agg);
    
	return 0;

	// Resultado: 100000000000000
}