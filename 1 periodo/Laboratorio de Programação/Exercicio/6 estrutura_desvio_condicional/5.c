/* Crie um programa que pergunte ao usuário qual a temperatura ideal da sala e qual atemperatura atual. 
Mostre quantos graus ele necessitará aumentar ou diminuir.*/

#include<stdio.h>

int main() {
    float tempAtual, tempIdeal, temp;

    printf("Qual e a temperatura ideal da sala?");
    scanf("%f", &tempIdeal);
    printf("Qual e a temperatura da sala?");
    scanf("%f", &tempAtual);

    temp = tempIdeal - tempAtual;

    if (temp > 0) {
        printf("Voce devera aumentar %.1f graus", -temp);
    } else if (temp < 0) {
        printf("Voce devera diminuir %.1f graus", temp);
    } else {
        printf("A temperatura ideal e atual sao as mesmas.");
    }

    return 0;
}
