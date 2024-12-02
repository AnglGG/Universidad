// #include <stdio.h>

// int main() {
//     int int_agg = 1065353216;
//     float *float_agg = (float *)&int_agg;

//     printf("El valor de int_agg como int: %d\n", int_agg);
//     printf("El valor de int_agg como float: %f\n", *float_agg);

// 	// El valor de int_agg como int: 1065353216
// 	// El valor de int_agg como float: 1.000000

//     return 0;
// }

#include <stdio.h>

int main() {
    union {
        int int_agg;
        float float_agg;
    } data;

    data.int_agg = 1065353216;
    printf("Interpretando entero como float: %f\n", data.float_agg);

	// Interpretando entero como float: 1.000000

    return 0;
}