/*01 – Solicite ao usuário um valor inteiro denominado quantidade. Crie um vetor com essa
quantidade de posições (de números inteiros) e preencha-o aleatoriamente. Ao final, exiba
quantos valores armazenados no vetor são pares.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    
	int quantidade, *vetor, i, quantidadePares=0;

	printf("Informe a quantidade do vetor");
	scanf("%d", &quantidade);

	vetor = calloc(quantidade, sizeof(int));

	for(i = 0 ; i < quantidade ; i++){
		printf("Preenchendo aleatoriamente a posicoes [%d]\n", i);
		vetor[i] = rand() % 20;

		if(vetor[i]%2 == 0){
			quantidadePares++;
		}
	}

	for(i = 0 ; i < quantidade ; i++){
		printf("[%d] -> %d ", i, vetor[i]);
	}
	printf("\nTemos %d numeros pares\n", quantidadePares);
    free(vetor);
}
