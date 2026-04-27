//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i,j;
    int matriz[3][3];

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Digite um valor");
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }


    printf("matriz normal: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("matriz diagonal: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            // if i = j = place number
            if(i==j) {
                printf("%d ", matriz[i][j]);
                // else = null
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
