//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main() {

    int v[10];

    for (int i = 0; i < 11; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 11; i++) {
        printf("Valor da %d: %d\n", i, v[i]);
    }

    return 0;
}