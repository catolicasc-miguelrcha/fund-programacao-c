//
// Created by miguel.xavier on 04/05/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i, j;
    int matriz[4][4];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf ("Digite os valores: ");
            scanf ("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] >= 10) {
                printf ("%d ", matriz[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}
