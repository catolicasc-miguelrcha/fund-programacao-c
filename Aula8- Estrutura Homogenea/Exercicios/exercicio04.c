//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main (void) {

    int v[10];
    int countPar, countImpar;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
        fflush(stdin);
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            countPar++;
        } else {
            countImpar++;
        }
    }

    printf("num Pares: %d\n", countPar);
    printf("num Impares: %d\n", countImpar);


    return 0;

}