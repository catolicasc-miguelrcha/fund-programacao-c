#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    // Rand() que não gera rand kappa
    int x, y = rand();

    if (x > y) {
        printf("O maior numero e o 1 => %i\n", x);
    } else if (x < y) {
        printf("O maior numero e o 2 => %i\n", y);
    } else {
        printf("Impossível os dois terem sido iguais \n");
    }

    return 0;
}
