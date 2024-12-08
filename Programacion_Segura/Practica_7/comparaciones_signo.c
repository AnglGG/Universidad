#include <stdio.h>

int main() {
    int signed_agg = -1;        // Entero con signo
    unsigned int unsigned_agg = 1; // Entero sin signo

    if (signed_agg < (int)unsigned_agg) {
        printf("-1 es menor que 1\n");
    } else {
        printf("-1 NO es menor que 1\n");
    }
    return 0;

	 // -1 es menor que 1
}