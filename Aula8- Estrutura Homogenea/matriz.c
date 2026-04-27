//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main(void) {

    int i,j;
    int matriz[3][3];

    // Insert data in matriz
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }


    // Draw matriz
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}