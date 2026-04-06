#include <stdio.h>

int main (void) {

    int choice, x, y, soma;

    printf("Bem-vindo a Calculadora da Catolica do Miguel\n");
    printf ("Digite um numero: ");
    scanf ("%i", &x);
    fflush (stdin);

    printf ("Qual função deseja escolher para operar\n");
    printf("[1] +\n");
    printf("[2] -\n");
    printf("[3] *\n");
    printf("[4] /\n");
    printf("[5] Fim\n");
    scanf("%d", &choice);
    fflush (stdin);

        switch (choice) {
            case 1:
                printf("Segundo numero: ");
                scanf("%i", &y);
                soma = x + y;
                printf ("%i", soma);
                break;
            case 2:
                printf("Segundo numero: ");
                scanf("%i", &y);
                soma = x - y;
                printf ("%i", soma);
                break;
            case 3:
                printf("Segundo numero: ");
                scanf("%i", &y);
                soma = x * y;
                printf ("%i", soma);
                break;
            case 4:
                printf("Segundo numero: ");
                scanf("%i", &y);
                soma = x / y;
                printf ("%i", soma);
                break;
            case 5:
                break;
            default:
                printf("Opcao invalida");

    }

    return 0;
}