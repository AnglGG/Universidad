#include <stdio.h>
#include <assert.h>

int factorial(int n)
{
	#ifdef DEBUG_INVARIANT
	assert(n >= 0);
	#endif

	#ifdef DEBUG_TRACE
	printf("Entrando a factorial (%d)\n", n);
	#endif

	if (n == 0)
	{
		#ifdef DEBUG_TRACE
		printf("Caso base alcanzado: factorial(0) = 1\n");
		#endif

		return (1);
	}
	else
	{
		int resultado = n * factorial(n - 1);

		#ifdef DEBUG_TRACE
		printf("Saliendo de factorial (%d), resultado = %d\n", n, resultado);
		#endif

		#ifdef DEBUG_INVARIANT
		assert(resultado == n * factorial(n - 1));
		#endif

		return (resultado);
	}
}
int main()
{
	int numero = 3;

	#ifdef DEBUG_TRACE
	printf("Calculando factorial de %d\n", numero);
	#endif

	int resultado = factorial(numero);
	printf("El factorial de %d es %d\n", numero, resultado);
	return 0;
}
