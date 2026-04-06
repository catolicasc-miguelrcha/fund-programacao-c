#include <stdio.h>

int main (void) {

    char turno;

    printf ("Insira M para Matutino, V para Vespertino ou N para Noturno: \n");
    scanf ("%c", &turno);
    fflush (stdin);

       switch (turno) {
        case 'M':
            printf ("Bom dia!\n");
               break;
            case 'V':
            printf ("Boa tarde!\n");
               break;
            case 'N':
            printf ("Boa noite!\n");
               break;
           default:
               printf("Opcao invalida");
        }


    return 0;
}