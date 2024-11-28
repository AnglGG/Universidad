#include <stdio.h>
#include <limits.h>

int main() {
    long number = LONG_MAX;

    if (number >= INT_MIN && number <= INT_MAX) {
        int truncated = (int)number; // Truncar directamente
        printf("Truncado: %d\n", truncated);
    } else {
        printf("Error: El valor está fuera del rango representable para int.\n");
    }
    //Error: El valor está fuera del rango representabl para int.
}
