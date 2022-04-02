#include <stdio.h>

// Heap Max
int main (){
	int i, j, aux;
	int vetor[10] = {12, 34, 65, 23, 387, 76, 56, 67, 98, 36};
	int n = 9;
	while(n >= 0){
		for(i = n; i > 0; i--){
			int direita = (i-2)/2;
			int esquerda = (i-1)/2;

			if(i%2 == 0){
				if(vetor[i] > vetor[direita]){
					aux = vetor[i];
					vetor[i] = vetor[direita];
					vetor[direita] = aux; 
				}
			}

			if(i%2 == 1){
				if(vetor[i] > vetor[esquerda]){
					aux = vetor[i];
					vetor[i] = vetor[esquerda];
					vetor[esquerda] = aux;
				}
			}
		}
		aux = vetor[0];
		vetor[0] = vetor[n];
		vetor[n] = aux;
		n = n - 1;
	}
	
	n = 9;
	
	for(i=0; i <= n; i++){
		printf(" - %d", vetor[i]);
	}
    printf("\n");
	return 0;
}