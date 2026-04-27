//
// Created by miguel.xavier on 27/04/2026.
//

#include <stdio.h>

int main(void) {

    int i,j;
    int matriz[3][3];
    int sum = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite os valores: ");
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = sum + matriz[i][j];
        }
    }

    printf("soma matriz: %d\n", sum);

    return 0;
}
