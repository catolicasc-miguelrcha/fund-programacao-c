//
// Created by miguel.xavier on 11/05/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m[3][3];
    int d, s = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite [%i,%i]: ", i, j);
            scanf("%i", &m[i][j]);
            fflush(stdin);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                d += m[i][j];
            }

            if (i + j == 2) {
                s += m[i][j];
            }
        }
        printf("\n");
    }

    printf("%i Diagonal pr\n", d);
    printf("%i Diagonal sec\n", s);

    return 0;
}
