#include <stdio.h>

int main (void) {
    int x, y;

    printf ("Insira o primeiro numero: ");
    scanf ("%d", &x);
    printf ("Insira o segundo numero:");
    scanf ("%d", &y);

    if (x > y) {
        printf("O primeiro numero e maior");
    } else if (x < y) {
        printf("O segundo numero e maior");
    } else {
        printf("Os numeros sao equals");
    }

    return 0;
}
