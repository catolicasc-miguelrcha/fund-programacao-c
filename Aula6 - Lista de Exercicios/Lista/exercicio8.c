#include <stdio.h>

int main (void) {

    int x;

    printf ("Digite um numero de 1 a 7: ");
    scanf ("%d", &x);
    fflush (stdin);

        switch (x) {
        case 1:
            printf ("Segunda-feira");
            case 2:
            printf ("Terca-feira");
            case 3:
            printf ("Quarta-feira");
            case 4:
            printf ("Quinta-feira");
            case 5:
            printf ("Sexta-feira");
            case 6:
            printf ("Sabado");
            case 7:
            printf ("Domingo");
            default:
                printf("Opcao invalida");
    }

    return 0;

}