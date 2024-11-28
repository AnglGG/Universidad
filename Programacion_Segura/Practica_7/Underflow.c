#include <stdio.h>
#include <limits.h>

int main() {
    // Valor minimo para un entero con signo de 32 bits
    int valor = -2147483648;
    int resta = 1;

	if (valor > INT_MIN + resta)
		valor = valor - resta;
	else
	{
		printf("No se puede realizar la resta\n");
	}
    printf("Valor: %d\n", valor); 
    // Resultado: Valor: 2147483647
    return 0;
}