#include <stdio.h>

void imprimirVetor(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void trocarElementos(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int dividirVetor(int array[], int low, int high, int *trocaAchar) {
    int pivot = array[high];
    
    int i = (low - 1);

    if(high == 2 && trocaAchar[0] <= 1){
        trocaAchar[0]++;
    }

    if(trocaAchar[0] > 1 && trocaAchar[0] <= trocaAchar[1]+1){
        trocaAchar[2] = array[trocaAchar[0]-2];
        trocaAchar[0]++;
    }

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      trocarElementos(&array[i], &array[j]);
    }
  }
  trocarElementos(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high, int *trocaAchar) {
  if (low < high) {
    
    int pi = dividirVetor(array, low, high, trocaAchar);
    
    quickSort(array, low, pi - 1, trocaAchar);
    
    quickSort(array, pi + 1, high , trocaAchar);
  }
}

int main() {
  int n = 14;
  int data[] = {8, 7, 2, 1, 0, 9, 6, 12, 43, 65, 87, 23, 89, 34};
  int bora[3];
  bora[0] = 0;
  bora[1] = 3; // Qual menor numero deve ser achado
  bora[2] = 0; // numero achado

  imprimirVetor(data, n);
  
  quickSort(data, 0, n - 1, bora);
  
  imprimirVetor(data, n);

  printf("O %d menor numero e: %d \n", bora[1], bora[2]);
}