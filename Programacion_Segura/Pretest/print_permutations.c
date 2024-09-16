#include <stdio.h>
#include <stdbool.h>

bool all_diff_array(int tam, int result[tam])
{
	bool check = true;
	for (int i = 0; i < tam && check; i++)
	{
		for (int j = 0; j < tam && check; j ++)
		{
			if (i != j)
			{
				if (result[i] == result[j])
					check = false;
			}
		}
	}
	return (check);
}

void inicializate_array(int tam, int result[tam])
{
	for (int i = 0; i < tam; i ++)
		result[i] = 1;
}

int factorial(int n)
{
	int result = 1;
	for (int i = 2; i <= n; i ++)
		result *= i;
	return (result);
}

void print_array(int tam, int result[tam])
{
	for (int i = 0; i < tam; i ++)
		printf("%d", result[i]);
	printf(" ");
}

void sum_array(int tam, int result[tam]) {
    int pos = tam - 1;
	bool stop = false;

    while (pos >= 0 && !stop)
	{
        result[pos]++;
        if (result[pos] <= tam)
            stop = true;
		else
		{
            result[pos] = 1;
            pos--;
        }
    }
}


void	print_permutation(int n)
{
	int	result[n];
	int	counter = 0;
	int	fact = factorial(n);

	inicializate_array(n, result);
	while(counter < fact)
	{
		sum_array(n, result);
		if (all_diff_array(n, result))
		{
			print_array(n, result);
			counter ++;
		}
	}
	printf("\n");
}

int main()
{
	int numero = 9;
	print_permutation(numero);
}
