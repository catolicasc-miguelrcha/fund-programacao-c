#include <stdio.h>

int main(void) {
    char sexo;

    printf("M para Masculino && F para Feminino\nInforme seu sexo: ");
    scanf("%c", &sexo);
    fflush(stdin);

    switch (sexo) {
        case 'M':
            printf("Masculino");
            break;
        case 'F':
            printf("Feminino");
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}
