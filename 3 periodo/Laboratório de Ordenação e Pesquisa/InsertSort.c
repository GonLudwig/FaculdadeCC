#include <stdio.h>

int main (){

	int vetor[10] = { 1, 5, 3, 6, 7, 8, 4, 23, 10, 9};
	int n = 10;
	int i, key, j;
    for (i = 1; i < n; i++) {
        key = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = key;
    }

    for (i = 0; i < n; i++){
    	printf("%d\n", vetor[i]);
    }

}