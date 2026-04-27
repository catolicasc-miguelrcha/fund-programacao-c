//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main (void) {

    int v[5];
    int sum = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
        fflush(stdin);
    }

    for (int i = 0; i < 5; i++) {
        sum = sum + v[i];
    }

    media = sum / 5;

    printf("media: %f\n", media);

    return 0;
}