#include <stdio.h>

// Shell Sort
int main(){
	
	int vetor[10] = {5, 1, 8, 3, 10, 7, 9, 2};
	int i , j , aux;
    int h = 1;
    while(h < 8) {
        h = 3*h+1;
    }
    while ( h > 1) {
        h /= 3;
        for(i = h; i < 8; i++) {
            aux = vetor[i];
            j = i - h;
            while (j >= 0 && aux < vetor[j]) {
                vetor [j + h] = vetor[j];
                j -= h;
            }
            vetor [j + h] = aux;
        }
    }
        
	return 0;
}