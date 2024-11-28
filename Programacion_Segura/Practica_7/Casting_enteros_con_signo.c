#include <stdio.h>

int main() {
    signed char sc = -1;   // Valor binario: 11111111
    int si = sc;           // Extensión de signo
    printf("sc = %d, si = %d\n", sc, si); // Ambos mostrarán -1
    return 0;
}

/*
PROBLEMAS:
int a = -1;
unsigned int b = 1;
if (a < b) {
    printf("¿Cómo -1 es mayor que 1?\n");
}
*/