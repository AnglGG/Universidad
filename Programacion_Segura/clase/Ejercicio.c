#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool comprueba(char *password)
{
	bool ok = false;
	if ( strcmp(password, "abc") == 0)
	{
		ok = true;		
	}
	return (ok);
}

int main()
{
	char password[10];
	printf("Introduce tu contraseña: ");
	gets(password);
	if (comprueba(password) == true)
	{
		printf("La contraseña es correcta\n");
	}else
	{
		printf("La contraseña es incorrecta\n");
	}
}
