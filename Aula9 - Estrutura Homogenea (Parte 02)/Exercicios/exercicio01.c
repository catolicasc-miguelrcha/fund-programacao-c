//
// Created by miguel.xavier on 04/05/2026.
//

#include <stdio.h>

int main(void) {

    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
        fflush(stdin);
    }

    int sum;

    for (int i = 0; i < 5; i++) {
        sum = sum + v[i];
    }

    float media = sum / 5;

    printf("Media: %.2f", media);
}
