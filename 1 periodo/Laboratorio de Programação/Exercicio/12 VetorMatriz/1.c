/*01 – Ler um conjunto de números reais, armazenando-o em um vetor e calcular o
quadrado de cada um dos elementos, armazenando o resultado em um segundo vetor. Os
vetores devem ter 10 elementos cada. Imprimir todos os conjuntos ao final.*/

#include <stdio.h>

float calcQuadrado(float *vet) {
    float vetQuadrado[10], i;

    for (i=0; i<10; i++) {
        vetQuadrado[i] = vet[i] * vet[i];
    }

    for(i=0; i<10; i++) {
        printf("O quadrado do %d numero e %d\n", i+1, vetQuadrado[i]);
    }

    return 0;
}

int main () {
    float vetNum[10], i;

    puts("Digite 10 numeros e sabia o quadrado de cada numero:");
    for (i=0; i<10; i++) {
    	printf("Digite o %d numero:", i+1);
        scanf("%d", &vetNum[i]);
    }

    calcQuadrado(vetNum);

    return 0;
}
