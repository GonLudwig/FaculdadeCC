/*Para os próximos exercícios desta lista, resolva todos utilizando os laços while, do
while e for.
06 – Faça um programa que receba dois números A e B, e exiba os números inteiros
existentes entre eles.*/

#include <stdio.h>

int main () {
    int fristNum = 0, secondNum = 0, iTwo = 0, iThree = 0, i = 0, jokerNum;

    puts("Digite o primeiro numero");
    scanf("%d", &fristNum);
    puts("Digite o segundo numero");
    scanf("%d", &secondNum);

    jokerNum = fristNum;    
    iTwo = fristNum;
	iThree = fristNum;

    if(fristNum > secondNum) {
        fristNum = secondNum;
        secondNum = jokerNum;
    }
	
    for(i = fristNum + 1;i < secondNum; i++) {
        printf("%d ", i);
    }
    puts("");
    while(iTwo < secondNum - 1) {
        iTwo++;
        printf("%d ", iTwo);
    }
    puts("");
    do {
        iThree++;
        printf("%d ", iThree);
    } while(iThree < secondNum - 1);

    return 0;
}
