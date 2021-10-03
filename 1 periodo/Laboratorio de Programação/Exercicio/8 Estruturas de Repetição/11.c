/*Crie um programa que solicite ao usuário dois números. Considere que qualquer um
deles pode ser maior que o outro. Exiba os números entre eles de modo crescente e
decrescente*/

#include<stdio.h>

int main () {
    int fristNum, SecondNum, jokerNum, i;

    puts("Digite um numero inteiro:");
    scanf("%d", &fristNum);
    puts("Digite um segundo numero inteiro:");
    scanf("%d", &SecondNum);

    if (SecondNum < fristNum) {
        jokerNum = fristNum;
        fristNum = SecondNum;
        SecondNum = jokerNum;
    }

    puts("A sequencia crescente e:");
    for (i = fristNum + 1; i < SecondNum; i++){
        printf("%d ", i);
    }

    puts("\nA sequencia decrescente e:");
    for (i = SecondNum - 1; i > fristNum; i--){
        printf("%d ", i);
    }
    return 0;
}