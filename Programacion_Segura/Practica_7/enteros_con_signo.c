/* Malinterpretación de datos
#include <stdio.h>

int main() {
    int signedagg = -1;
    unsigned int unsignedagg = 1;

    if (signedagg > unsignedagg) {
        printf("signedagg es mayor\n");
    } else {
        printf("unsignedagg es mayor\n");
    }

    return 0;
}
*/

// Solución
// #include <stdio.h>
// #include <limits.h>

// int main() 
// {
//     int signedagg = -1;
//     unsigned int unsignedagg = 1;

//     // Validación de rangos antes de la comparación
//     if (signedagg < 0) 
//     {
//         printf("signedagg es negativo, comparación no válida sin conversión.\n");
//     } 
//     else if (unsignedagg > INT_MAX) 
//     {
//         printf("unsignedagg excede el rango máximo para int con signo.\n");
//     } 
//     else 
//     {
//         if ((int)unsignedagg > signedagg) 
//         {
//             printf("Comparación segura: unsignedagg es mayor.\n");
//         } 
//         else 
//         {
//             printf("Comparación segura: signedagg es mayor.\n");
//         }
//     }
//     return 0;
// }


//Ejemplo de error de pérdida de datos
// #include <stdio.h>

// int main() {
//     int originalagg = 99024;       // Valor de 32 bits
//     short truncatedagg = (short)originalagg; // Conversion a 16 bits

//     printf("Valor original: %d\n", originalagg);
//     printf("Valor truncado: %d\n", truncatedagg);

//     return 0;
// }


#include <stdio.h>

int main() {
    int originalagg = 99024;       // Valor de 32 bits
	short truncatedagg;
    
	if (originalagg <= 32767)
		truncatedagg = (short)originalagg; // Conversion a 16 bits
	else
	{
		printf("Conversión errónea\n");
		return (1);
	}

    printf("Valor original: %d\n", originalagg);
    printf("Valor truncado: %d\n", truncatedagg);

    return 0;
}