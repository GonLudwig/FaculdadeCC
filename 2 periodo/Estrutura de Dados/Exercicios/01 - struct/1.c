/*Crie uma função capaz de receber por parâmetro um número qualquer e um vetor de
inteiros por referência, além de um último inteiro por parâmetro indicando o tamanho do
vetor.
Retorne quantas vezes o número é encontrado dentro do vetor.*/
#include <stdio.h>
#include <stdlib.h>

void funciton(int num, int *vet, int lastNum) {
    int i, sum=0;

    for(i=0;i<lastNum;i++) {
        if(vet[i] == num) {
            sum++;
        }
    }

    printf("O numero %d se repitiu %d vez(es), sendo comparando com %d numeros aleatorios", num, sum, lastNum);
}


int main() {
    int numero, UltimoNum, vetor[100], i;

    for (i=0; i<100; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Digite um valor de 0 a 100:");
    scanf("%d", &numero);
    printf("Digite quantas numeros voce quer comparar:");
    scanf("%d", &UltimoNum);

    funciton(numero, vetor, UltimoNum);
    
}
