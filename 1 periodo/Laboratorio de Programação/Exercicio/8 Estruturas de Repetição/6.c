/*Crie um programa que solicite ao usuário dois números. Exiba todos os números
ímpares entre eles.*/

#include<stdio.h>

int main () {
    int numInicial, numFinal, i;

    puts("Digite o numero inicial da sequencia:");
    scanf("%d", &numInicial);
    puts("Digite o numero final da sequencia:");
    scanf("%d", &numFinal);

    for (i = numInicial + 1; i < numFinal; i++){
        if(i%2){
            printf("%d ", i);
        }
    }
    return 0;
}