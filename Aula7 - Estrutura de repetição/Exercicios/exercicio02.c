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

    while (x<y) {
        if (x%2==0) {
            printf("%d\n", x);
        }
        x++;
    }

    return 0;
}
