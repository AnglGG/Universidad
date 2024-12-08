#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int
main (void)
{
  long a;
  char buf[1024];		// Suficientemente grande
  int success;
  do
    {
    printf ("Introduzca un número: ");
    if (!fgets (buf, 1024, stdin))
	{
	  // No tenemos input
	  return 1;
	}
      // Tenemos input!
      char *endptr;
      errno = 0;		// Reseteamos el error
      a = strtol (buf, &endptr, 10);	//10 es la base
    if (errno == ERANGE)
	{
	  printf ("El número es muy grande o pequeño.\n");
	  success = 0;
	}
    else if (endptr == buf)
	{
	  // No se ha leído ningún carácter concreto
	  success = 0;
	}
    else if (*endptr && *endptr != '\n')
	{
	  // *endptr NO es el final de la cadena, no hemos convertido el input
	  int success = 0;
	}
    else
	{
	  success = 1;
	}
    }
  while (!success);		// Repetir hasta que tengamos un valor correcto
  printf ("Has introducido % ld. \n ", a);
}

