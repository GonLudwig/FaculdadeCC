/*  Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21
anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for = -99. */

#include <stdio.h>

int main () {
    int idade, menor21 = 0, maior50 = 0;

    while (idade != -99 ) {
        printf("Qual e a sua idade?");
        scanf("%d", &idade);

        if (idade < 21 && idade != -99) {
            menor21++;
        }

        if (idade > 50) {
            maior50++;
        }
        printf(" %d %d \n", menor21, maior50);
    }

    printf("O total de pessoal com menor de 21 e: %d\n", menor21);
    printf("O total de pessoal com mmais de 50 e: %d\n", maior50);

    return 0;
}