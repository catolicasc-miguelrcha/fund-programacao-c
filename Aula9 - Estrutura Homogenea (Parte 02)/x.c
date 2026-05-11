//
// Created by miguel.xavier on 04/05/2026.
//

#include <stdio.h>

int main(void) {

    int m[3][3][3][3][3];
    int i, j,x,y,z;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (z = 0; z < 3; z++) {
               for (x = 0; x < 3; x++) {
                   for (y = 0; y < 3; y++) {
                       printf("%d \t\t\t\t", m[x][y]);
                   }
               }
                printf("\n");
            }
        }
    }

}
