#include <stdio.h>

void trocarElementos(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int dividirVetor(int array[], int low, int high) {
  
  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      trocarElementos(&array[i], &array[j]);
    }
  }

  trocarElementos(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    int pi = dividirVetor(array, low, high);
    
    quickSort(array, low, pi - 1);
    
    quickSort(array, pi + 1, high);
  }
}

void imprimirVetor(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6, 12, 43, 65, 87, 23, 89, 34};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  imprimirVetor(data, n);
  
  quickSort(data, 0, n - 1);
  
  imprimirVetor(data, n);
}