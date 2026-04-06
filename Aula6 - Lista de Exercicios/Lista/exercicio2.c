#include <stdio.h>

int main (void) {

    int x;

    printf("Informe um numero: ");
    scanf("%i", &x);
    fflush(stdin);

    if (x > 0) {
        printf("Este numero e positivo %i\n", x);
    } else if (x < 0) {
        printf("Este numero e negativo %i\n", x);
    } else if (x == 0) {
        printf("Este numero e zero\n");
    } else {
        printf("Isto que voce informou certamente nao e um numero\n");
    }

    return 0;
}