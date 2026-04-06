//
// Created by miguel.xavier on 06/04/2026.
//

#include <stdio.h>

int main (void) {
    int idade, calc;

    for (int i = 1; i <= 4; i++) {
        printf("Digite a idade: ", &i);
        scanf("%i", &idade);
        fflush(stdin);

        calc = calc + idade;
    }

    calc = calc / 4;

    if (calc < 25 ) {
        printf("Turma Jovem");
    } else if (calc == 25 && calc <= 45 ) {
        printf("Turma Adulta");
    } else {
        printf("Turma Idosa");
    }

    return 0;
}
