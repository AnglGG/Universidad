#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int unsignedagg = 4294967295;
	int signedagg = 0;
	if (unsignedagg <= INT_MAX)
	{
    	signedagg = (int)unsignedagg;
		printf("Valor sin signo: %u\n", unsignedagg);
    	printf("Valor con signo: %d\n", signedagg);
	}
	else
		printf("No se debe convertir en este caso\n");

	// No se debe convertir en este caso
    return 0;
}