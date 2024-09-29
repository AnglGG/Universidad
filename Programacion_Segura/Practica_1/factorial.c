#include <stdio.h>
#include <assert.h>

int factorial(int n)
{
	assert(n >= 0); // Invariante: n >= 0
	printf("Entrando a factorial (%d)\n", n);
	if (n == 0)
	{
		printf("Caso base alcanzado: factorial(0) = 1\n");
		return (1); // Caso base: factorial(0) = 1
	}
	else
	{
		int resultado = n * factorial(n - 1);
		printf("Saliendo de factorial (%d), resultado = %d\n", n, resultado); 
		// Invariante: resultado igual a n!
		assert(resultado == n * factorial(n - 1));
		return (resultado);
	}
}
int main()
{
	int numero = 3;
	printf("Calculando factorial de %d\n", numero);
	int resultado = factorial(numero);
	printf("El factorial de %d es %d\n", numero, resultado);
	return 0;
}
