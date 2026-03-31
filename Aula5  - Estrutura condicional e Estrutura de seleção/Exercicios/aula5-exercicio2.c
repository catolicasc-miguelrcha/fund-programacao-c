#include <stdio.h>

int main (void) {

    int x,y,z, temp;
    printf("Digite os 3 numero: ");
    scanf("%d %d %d", &x, &y, &z);
    fflush(stdin);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }

    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }

    printf("Ordem crescente: %d %d %d\n", x, y, z);


    return 0;
}