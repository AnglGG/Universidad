#include <stdio.h>
#include <stdint.h>

struct Alineacion {
    char a_agg;    // 1 byte
    int b_agg;     // 4 bytes (puede requerir alineación de 4 bytes)
};

int main() {
    struct Alineacion data;
    data.a_agg = 'A';
    data.b_agg = 1000;

    printf("Dirección de 'a': %p\n", (void*)&data.a_agg);
    printf("Dirección de 'b': %p\n", (void*)&data.b_agg);
    return 0;
}