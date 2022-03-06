#include <stdio.h>

int main (){

	int vetor[10] = { 6, 5, 3, 1, 7, 8, 4, 23, 10, 9};
	int n = 10;
	int i, aux, j;
    for (i = 1; i < n; i++) {
        aux = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > aux) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = aux;
    }

    for (i = 0; i < n; i++){
    	printf("%d\n", vetor[i]);
    }

}