#include <stdio.h>

int main() {
    unsigned int originalagg = 65537;       // Valor de 32 bits
    unsigned short truncatedagg = (unsigned short)originalagg; // Conversion a 16 bits

    printf("Valor original: %u\n", originalagg);
    printf("Valor truncado: %u\n", truncatedagg);

    return 0;
}