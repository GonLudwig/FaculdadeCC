/* Escreva um programa para contar dinheiro que pergunte, ao usuário a quantidade de
notas de: 1 real, 2 reais, 5 reais, 10 reais, 50 reais, 100 reais e 200 reais. Ao final exiba o
valor total de dinheiro. */ 

#include <stdio.h>

int main () {
    int cont200, cont100, cont50, cont20, cont10, cont5, cont2, cont1;
    float somaTotal;

    printf("Vamos contar seu dinheiro!\n");
    printf("Quantas notas de RS200");
    scanf("%d", &cont200);
    printf("Quantas notas de RS100");
    scanf("%d", &cont100);
    printf("Quantas notas de RS50");
    scanf("%d", &cont50);
    printf("Quantas notas de RS20");
    scanf("%d", &cont20);
    printf("Quantas notas de RS10");
    scanf("%d", &cont10);
    printf("Quantas notas de RS5");
    scanf("%d", &cont5);
    printf("Quantas notas de RS2");
    scanf("%d", &cont2);
    printf("Quantas notas de RS1");
    scanf("%d", &cont1);

    somaTotal = (cont200 * 200) + (cont100 * 100) + (cont50 * 50) + (cont20 * 20) + (cont10 * 10) + (cont5 * 5) + (cont2 * 2) + cont1;

    printf("O valor Total e: %.2f", somaTotal);
    return 0;
}
