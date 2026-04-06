#include <stdio.h>

int main (void) {

    int choice;

    printf("[1] Soma\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("Digite o valor da seção: ");
    scanf("%d", &choice);
    fflush (stdin);

        switch (choice) {
            case 1:
                printf("Soma: operação de adição entre dois valores.");
                break;
                case 2:
                printf("Subtração: operação de diminuição entre dois valores.");
                break;
                case 3:
                printf("Multiplicação: operação de multiplicar dois valores");
                break;
                case 4:
                printf("Divisão: operação de dividir dois valores");
                break;
            default:
                printf("Opcao invalida");
    }

    return 0;
}