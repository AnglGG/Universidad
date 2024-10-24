#include <stdio.h>

int main()
{
  int el_array[] = {6, 5 , 4, 3, 2 , 1};
  int *punt1, *punt2;
  int i = 0;

  punt1 = &el_array[0];
  punt2 = el_array;

  printf("\nDirección de inicio del array = %p \n", &el_array[0]);
  printf("Contenido de la primera posición del array = %d\n\n", el_array[0]);
  printf("Dirección apuntada por punt1 = %p \n", punt1);
  printf("Contenido de la posición apuntada por punt1 = %d \n\n", *punt1);
  printf("Dirección apuntada por punt2 = %p \n", punt2);
  printf("Contenido de la posición apuntada por punt2 = %d \n\n", *punt2);

  printf("Comienza la iteración \n\n");
  for (i=0; i<6; i++) {
    printf("Indice = %d \n", i);
    printf("Contenido de posición %d direccionada via array = %d \n", i, el_array[i]);
    printf("Contenido de posición %d direccionada sumando i a punt1 = %d \n", i, *(punt1 + i));
    printf("Contenido de posición %d direccionada via postincremento de punt2 = %d \n\n", i, *(punt2++));
  } 
}
