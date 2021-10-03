/*Crie um programa capaz de receber um determinado número e informar se ele é um
número primo.*/

#include<stdio.h>

int main () {
    int num, division, i;
    
    puts("Digite um numero:");
    scanf("%d", &num);

    for (i = 1; i <= num;i++) {
        if(num%i == 0) {
            division++;
        }
    }

    if (division == 2) {
        printf("%d e um numero primo", num);
    } else {
        printf("%d este nao e um numero primo.", num);
    }
    return 0;
}