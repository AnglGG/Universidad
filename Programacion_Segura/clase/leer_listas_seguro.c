#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t_list
{
	char contenido;
	struct t_list *next;
} lista;

void ft_print_list(lista *header)
{
	while (header != NULL)
	{
		printf("%c", header->contenido);
		header = header->next;
	}
	printf("\n");
}
void free_list(lista *header)
{
	lista *temp;
	while (header != NULL)
	{
		temp = header;
		header = header->next;
		free(temp);
	}
}

int main()
{
	lista *palabra = NULL;
	lista *header = NULL;
	lista *temp = NULL;
	char c;
	while ((c = getchar()) != '\n')
	{
		temp = malloc(sizeof(lista));
		if (!temp)
		{
			free_list(temp);
			return 1;
		}
		temp->contenido = c;
		temp->next = NULL;
		if (header == NULL)
		{
			header = temp;
			palabra = temp;
		}
		else
		{
			palabra->next = temp;
			palabra = temp;
		}
	}
	ft_print_list(header);
	free_list(header);
}
