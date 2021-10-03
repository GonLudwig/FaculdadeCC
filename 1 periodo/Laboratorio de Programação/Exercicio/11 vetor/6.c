/*06 – Ler um vetor de 10 elementos inteiros e positivos. Criar um segundo vetor da
seguinte forma: os elementos contidos em posições pares receberão os respectivos
elementos divididos por 2; os elementos contidos em posições ímpares receberão os
respectivos elementos multiplicados por 3. Imprima os dois vetores.*/

#include<stdio.h>

float modificadorVetor(int *vetor) {
    float newVetor[10];
    int i, j;

    for (i=0, j = 0; i<10; i++, j++) {
        if (i%2) {
            newVetor[j] = (vetor[i] * 3);
        } else {
            newVetor[j] = (vetor[i] / 2.0);
        }
    }
    
    for (i=0; i < 10; i++){
        printf("%.2f ", newVetor[i]);
    }

    return 0;
}

int main () {
    int numeros[10], i, num;

    for (i=0; i<10; i++){
        printf("Digite o %d:", i+1);
        scanf("%d", &num);
        numeros[i] = num;
        if (num < 0) {
            i--;
        }
    }
    
    modificadorVetor(numeros);
    
    return 0;
}
