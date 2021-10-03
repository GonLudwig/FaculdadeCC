/*02 – Crie um programa com um vetor de 10 posições, armazene em cada posição o valor
da (posição / 2). Exiba o vetor completo ao final.*/
#include <stdio.h>

int main() {
	float vetor[10];
	int i;

	for (i = 0; i < 10; i++) {
    	vetor[i] = i / 2.0;
    	printf("%.2f\n", vetor[i]);
	}
      
	return 0;
}