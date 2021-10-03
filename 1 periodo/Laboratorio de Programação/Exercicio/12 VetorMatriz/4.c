/*04 – Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação
dos elementos de posições iguais, colocando o resultado em um terceiro vetor. Mostre o
vetor resultante.*/

#include <stdio.h>

int multiVets(int *vetOne, int *vetTwo){
    int resultMultiVets[10], i;

    for(i=0; i<10; i++){
        resultMultiVets[i] = vetOne[i] * vetTwo[i];
    }

    printf("Os valores da primeira lista vezes a segunda e: ")
    for(i=0; i<10; i++){
        printf("%d ", resultMultiVets[i]);
    }
    return 0;
}

int main () {
    int vetFrist[10], vetSecond[10], i;

    puts("Preencha duas listas com 10 numeros cada:");
    for(i=0; i<10; i++) {
        printf("Primeira Lista, digite o %d numero:", i+1);
        scanf("%d", &vetFrist[i]);
    }
    puts("");
    for(i=0; i<10; i++) {
        printf("Segunda Lista, digite o %d numero:", i+1);
        scanf("%d", &vetSecond[i]);
    }

    multiVets(vetFrist, vetSecond);

    return 0;
}
