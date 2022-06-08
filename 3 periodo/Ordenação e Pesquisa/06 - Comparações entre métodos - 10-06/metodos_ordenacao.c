#include"metodos_ordenacao.h"

void preencheVetorAletorios (int *vetor, int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        vetor[i] = rand() % quantidade;
    }
}

void preencheVetorCrescente(int *vetor, int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        vetor[i] = i;
    }
}

void preencheVetorDecrescente(int *vetor, int quantidade){
    int i, j;

    for (i = quantidade-1, j = 0; i >= 0; i--, j++){
        vetor[j] = i;
    }
}

// Merge Sort
void merge(char vetor[], int esqueda, int media, int direita){
    int i, j, k;
    int n1 = media - esqueda + 1;
    int n2 = direita - media;
  

    char Vesquerda[n1], Vdireita[n2];
  

    for (i = 0; i < n1; i++)
        Vesquerda[i] = vetor[esqueda + i];
    for (j = 0; j < n2; j++)
        Vdireita[j] = vetor[media + 1 + j];
  

    i = 0;
    j = 0;
    k = esqueda;
    while (i < n1 && j < n2) {
        if (Vesquerda[i] <= Vdireita[j]) {
            vetor[k] = Vesquerda[i];
            i++;
        }
        else {
            vetor[k] = Vdireita[j];
            j++;
        }
        k++;
    }
  
    while (i < n1) {
        vetor[k] = Vesquerda[i];
        i++;
        k++;
    }
  
    while (j < n2) {
        vetor[k] = Vdireita[j];
        j++;
        k++;
    }
}
  
void mergeSort(char vetor[], int esquerda, int direita){
    if (esquerda < direita) {
        int media = esquerda + (direita - esquerda) / 2;
  
        mergeSort(vetor, esquerda, media);
        mergeSort(vetor, media + 1, direita);
  
        merge(vetor, esquerda, media, direita);
    }
}

// Radix Sort
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

// Quick Sort
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