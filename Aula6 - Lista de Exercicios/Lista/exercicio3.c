#include <stdio.h>

int main (void) {
    int x;

    printf ("Digite um numero: ");
    scanf ("%d", &x);
    fflush(stdin);

    if (x % 2 == 0) {
        printf ("O numero %d e par", x);
    } else if (x % 2 == 1) {
        printf ("O numero %d e impar", x);
    } else if (x == 0 ) {
        printf ("O numero %d e zero", x);
    } else {
        printf("Com certeza isso nao e um numero");
    }

}