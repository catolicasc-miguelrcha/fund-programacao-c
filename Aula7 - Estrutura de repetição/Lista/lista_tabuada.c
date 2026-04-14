//
// Created by miguel rocha on 13/04/26.
//
//Construa um programa que gere a tabuada de 1 a 10
//de qualquer número informado pelo usuário.
//Ao final, o programa deverá exibir todos os
//resultados correspondentes à multiplicação desse número pelos valores de 1 até 10.

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);
    fflush(stdin);

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", n * i);
    }

    return 0;
}
