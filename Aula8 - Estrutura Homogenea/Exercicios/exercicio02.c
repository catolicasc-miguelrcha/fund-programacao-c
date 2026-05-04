//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main(void) {

    int v[8];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
        fflush(stdin);
    }

    for (int i = 0; i < 8; i++) {
        sum = sum + v[i];
    }

    printf("sum: %d\n", sum);
}
