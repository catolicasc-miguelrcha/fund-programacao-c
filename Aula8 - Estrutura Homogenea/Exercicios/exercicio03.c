//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main() {

    int v[10];
    int h;

    for (int i = 0; i < 11; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
        fflush(stdin);

    }

    h = v[0];

    for (int i = 0; i < 11; i++) {
        if (v[i] > h) {
            h = v[i];
        }
    }

    printf("Maior numero presente no vetor: %d\n", h);

    return 0;

}