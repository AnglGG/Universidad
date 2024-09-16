#include <stdio.h>
#include <stdbool.h>

int	search_matriz(int value, int tam, int array[tam][tam])
{
	bool found = false;
	int i;
	int	j;
	for (i = 0; i < tam && !found; i ++)
	{
		for (j = 0; j < tam; j ++)
		{
			if (array[i][j] == value)
				found = true;
		}
	}
	if (!found)
		i = -1;
	return (i);
}