//
// Created by miguel.xavier on 11/05/2026.
//

#include <stdio.h> 

int main(void) {
    int matriz[3][3];
    int i, j, somaDP, somaDS = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter a number: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    return 0;
}