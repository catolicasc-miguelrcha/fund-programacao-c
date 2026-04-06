//
// Created by miguel.xavier on 06/04/2026.
//

#include <stdio.h>

int main (void) {
    float nota1, nota2, nota3, calc;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    fflush(stdin);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    fflush(stdin);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    fflush(stdin);

    calc = nota1 + nota2 + nota3;

    if (calc >= 7) {
        printf("Aprovado");
    } else if (calc < 7) {
        printf("Reprovado");
    } else if (calc == 10) {
        printf("Aprovado com Distincao");
    } else {
        printf("Erro");
    }
}
