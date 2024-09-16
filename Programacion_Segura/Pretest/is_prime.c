#include <stdbool.h>
#include <stdio.h>
bool	is_prime(int n)
{
	int	divisor;
	bool prime;
	divisor = 2;
	prime = true;
	while (divisor <= n/2 && prime)
	{
		if (n%divisor == 0)
			prime = false;
		divisor++;
	}
	return (prime);
}
int main()
{
	int	numero = 4;
	bool primo = is_prime(numero);
	if (primo == true)
    	printf("El numero es primo\n");
    else
    	printf("El numero no es primo\n");
}