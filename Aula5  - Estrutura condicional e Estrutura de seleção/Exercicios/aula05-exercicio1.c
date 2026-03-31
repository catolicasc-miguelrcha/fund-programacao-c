#include <stdio.h>

int main(void) {
    float x;

    printf("Digite um numero: ");
    scanf("%f", &x);

    if (x == (int)x) {
        printf(" %.2f e inteiro", x);
    } else {
        printf("%.2f e quebrado", x);
    }

    return 0;
}
