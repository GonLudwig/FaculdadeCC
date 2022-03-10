#include <stdio.h>

// Heap Max
int main (){
	int i, j, aux;
	int vetor[10] = {12, 34, 65, 23, 45, 76, 56, 67, 98, 36};
	int n = 10;
	while(n-1 > 0){
		for(i = n-1; i >= 0; i--){
			int direita = (i-2)/2;
			int esquerda = (i-1)/2;
			if(i%2){
				if(vetor[i] > vetor[esquerda]){
					aux = vetor[i];
					vetor[i] = vetor[esquerda];
					vetor[esquerda] = aux; 
				}
			}
			if(vetor[i] > vetor[direita]){
				aux = vetor[i];
				vetor[i] = vetor[direita];
				vetor[direita] = aux; 
			}
		}
		aux = vetor[0];
		vetor[0] = vetor[n-1];
		vetor[n-1] = aux;
		n--;
	}
	
	n = 10;
	
	for(i=0; i < n; i++){
		printf(" - %d", vetor[i]);
	}
	return 0;
}