//
// Created by miguel rocha on 13/04/26.
//

#include <stdio.h>

int main () {

    int x,y, i;

    printf("Insira o valor do primeiro num: ");
    scanf("%d",&x);
    fflush(stdin);

    printf("Insira o valor do segundo num: ");
    scanf("%d",&y);
    fflush(stdin);

    for (int i = x; i <= y; i++) {
        if (i%2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
