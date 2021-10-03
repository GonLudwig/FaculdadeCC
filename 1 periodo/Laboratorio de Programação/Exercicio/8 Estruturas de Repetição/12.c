/*Solicite do usuário uma sequência de números inteiros em quantidade indefinida, os
quais deverão ser lidos até que o usuário digite o número zero. Ao final, exiba:
a) Quantos números foram maiores que 0.
b) Quantos números foram menores que 0.
c) Quantos números são pares.
d) Quantos números são ímpares.
e) Qual desses números é o menor.
f) Qual desses números é o maior.*/

#include<stdio.h>

int main () {
    int num = 0, numPositive = 0, numNegative = 0, numOdd = 0, numPar = 0, beforeNum = 0, largeNum = 0, smallNum = 0;

    puts("Digite um numero inteiro:");
    do {
        //beforeNum = num;

        scanf("%d", &num);

        if (num > 0) {
            numPositive++;
        }

        if (num < 0) {
            numNegative++;
        }  

        if (num%2) {
            numOdd++;
        } else {
            numPar++;
        }

        //printf("%d", largeNum);
        if (num > largeNum && num != 0) {
            largeNum = num;
        }

        //printf("%d", smallNum);
        if (num < smallNum && num != 0) {
            smallNum = num;
        }
    } while (num != 0);

    printf("Os numeros maiores que 0 foram: %d\n", numPositive);
    printf("Os numeros menores que 0 foram: %d\n", numNegative);
    printf("Os numeros impares foram: %d\n", numOdd);
    printf("Os numeros pares foram: %d\n", numPar - 1);
    printf("O maior numero foi: %d\n", largeNum);
    printf("O menor numero foi: %d\n", smallNum);


    return 0;
}
