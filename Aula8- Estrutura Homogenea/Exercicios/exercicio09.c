//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main (void) {

    int i, j;
    int matrizA[2][2];
    int matrizB[2][2];
    int matrizC[2][2];

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("Digite um valor: ");
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("Digite um valor: ");
            scanf("%d", &matrizB[i][j]);
        }
    }

    // soma correta
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("matrizA \n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("matrizB \n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("matrizC \n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
}