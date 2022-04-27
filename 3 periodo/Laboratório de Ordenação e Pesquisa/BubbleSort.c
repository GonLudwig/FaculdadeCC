#include <stdio.h>


// BubbleSort
int main (){ 

	int vetor[10] = {1 ,54 ,65 ,72 ,5 ,34 ,27 ,41 ,57 , 2};

	int count = 10;
	
	int i, j, aux;

	for (i = 1; i < count; i++){
		for (j = 0; j < count - i; j++){
			if (vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}

	for (i = 0; i < count; i++){
		printf("- %d", vetor[i]);
	}
	
	return 0;
}