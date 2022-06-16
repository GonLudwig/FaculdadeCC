#include <stdio.h>

int buscaSequencial(int *vetor, int busca, int tamanho, int *vetorSec) {
    int i;
    int j = 0;
    int achou = 0;
    for (i = 0; i < tamanho; i++){
        if(vetor[i] == busca) {
            vetorSec[j] = i;
            j++;
            achou = 1;
        }
    }
    if (achou != 1){
        return -1;
    }
    return j;
}

void imprimirVetor(int array[], int size) {
	int i;
  for (i = 0; i < size; ++i) {
    printf("%d ", array[i], i);
  }
  printf("\n");
}

void select(int *vetor, int n){
    int i, j, min_idx, temp;
	for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
          if (vetor[j] < vetor[min_idx]){
            min_idx = j;
            temp = vetor[min_idx];
            vetor[min_idx] = vetor[i];
            vetor[i] = temp;
          }
        }
    }
}

int main() {
    int n = 16;

  int data[] = {8, 7, 2, 8, 1, 0, 9, 6, 12, 8, 43, 65, 8, 87, 23, 89, 34};
  int dataSec[n];
  int fimDataSec;
  
  imprimirVetor(data, n);
  
  fimDataSec = buscaSequencial(data, 8, n, dataSec);
  imprimirVetor(dataSec, fimDataSec);
  select(data, n);
  imprimirVetor(data, n);
  fimDataSec = buscaSequencial(data, 8, n, dataSec);
  imprimirVetor(dataSec, fimDataSec);
}