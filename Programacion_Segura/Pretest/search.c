#include <stdio.h>
#include <stdbool.h>

int	search(int value, int tam, int array[tam])
{
	bool found = false;
	int i;
	for (i = 0; i < tam && !found; i ++)
	{
		if (array[i] == value)
			found = true;
	}
	if (!found)
		i = -1;
	return (i);
}