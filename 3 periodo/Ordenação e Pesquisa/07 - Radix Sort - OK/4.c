#include <stdio.h>

int valorMaximo(int vetor[], int tamanho) {
  int maior = vetor[0];
  for (int i = 1; i < tamanho; i++){
    if (vetor[i] > maior){
      maior = vetor[i];
    }
  }
  return maior;
}

void montadorBaldes(int vetor[], int tamano, int balde) {
  int vetorSaida[tamano + 1];
  int valorMax = (vetor[0] / balde) % 10;

  for (int i = 1; i < tamano; i++) {
    if (((vetor[i] / balde) % 10) > valorMax)
      valorMax = vetor[i];
  }
  int count[valorMax + 1];

  for (int i = 0; i < valorMax; ++i){
    count[i] = 0;
  }

  for (int i = 0; i < tamano; i++){
    count[(vetor[i] / balde) % 10]++;
  }
    
  for (int i = 1; i < 10; i++){
    count[i] += count[i - 1];
  }

  for (int i = tamano - 1; i >= 0; i--) {
    vetorSaida[count[(vetor[i] / balde) % 10] - 1] = vetor[i];
    count[(vetor[i] / balde) % 10]--;
  }

  for (int i = 0; i < tamano; i++){
    vetor[i] = vetorSaida[i];
  }
}

void radixsort(int vetor[], int tamano) {

  int valorMax = valorMaximo(vetor, tamano);

  for (int balde = 1; valorMax / balde > 0; balde *= 10)
    montadorBaldes(vetor, tamano, balde);
}

void printVetor(int vetor[], int tamano) {
  for (int i = 0; i < tamano; ++i) {
    printf("%d  ", vetor[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {121, 432, 564, 23, 1, 45, 788};
  int n = sizeof(array) / sizeof(array[0]);
  radixsort(array, n);
  printVetor(array, n);
}