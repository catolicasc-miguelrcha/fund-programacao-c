#include <stdio.h>
#include <math.h> // lib para utilizar o campo floor/ feito para identificar se o num e quebrado ou nao

int main() {
    double x;

    printf("Digite um numero: ");
    scanf("%lf", &x);

    if (floor(x) == x) {
        printf(" %.2f e inteiro", x);
    } else {
        printf("%.2f e quebrado", x);
    }

    return 0;
}
