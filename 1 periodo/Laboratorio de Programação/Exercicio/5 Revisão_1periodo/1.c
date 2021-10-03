/*  Faça um programa que calcule a quantidade necessária de latas de tinta para pintar
uma parede. O programa pergunta a medidas de largura e altura da parede em metros e
imprime o resultado (em latas de tinta).
Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de
tinta por lata é de 2 litros */

#include <stdio.h>

int main () {
    float altura, largura, consumoTinta, latasTinta;

    printf("Qual e Altura da parede em metros?");
    scanf("%f", &altura);
    printf("Qual e Largura da parede em metros?");
    scanf("%f", &largura);
    
    consumoTinta = altura * largura * 300;
    latasTinta = consumoTinta / 2000;

    printf("Voce vai prescisar de %.1f", latasTinta);

    return 0;
}