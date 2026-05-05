//
// Created by miguel.xavier on 04/05/2026.
//

#include <stdio.h>

int main (void) {
    int v[10];
    int m;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf ("%d ", v[i]);
    }

    m = v[0];

    for (int i = 0; i < 10; i++) {
        if (v[i] > m) {
            m = v[i];
        }
    }

    printf("\nMaior numero do v[] %d", m);

    return 0;

}
