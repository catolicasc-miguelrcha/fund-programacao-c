//
// Created by miguel rocha on 13/04/26.
//
// Considere que a população do país A é de 80.000 habitantes, com crescimento anual de 3%, e que a população do país B é
// de 200.000 habitantes, com crescimento anual de 1,5%. Construa um programa que calcule e mostre o número de anos necessários
// para que a população do país A seja maior ou igual à população do país B, mantendo-se essas taxas de crescimento.

#include <stdio.h>

int main() {

    float a = 80000;
    float crescimento_anualA = 0.03;
    float b = 200000;
    float crescimento_anualB = 0.015;
    int anos = 0;

    while (b > a) {
        a = a * (1 + crescimento_anualA);
        b = b * (1 + crescimento_anualB);
        anos++;
    }

    printf("%d anos serão necessários.\n", anos);

    return 0;
}