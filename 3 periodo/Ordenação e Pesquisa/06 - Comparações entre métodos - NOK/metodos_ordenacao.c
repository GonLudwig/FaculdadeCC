#include"metodos_ordenacao.h"

void numerosAletorios (int *vetor, int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        vetor[i] = rand() % quantidade;
    }
}

void numerosCrescente(int *vetor, int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        vetor[i] = i;
    }
}

void numerosDecrescente(int *vetor, int quantidade){
    int i, j;

    for (i = quantidade-1, j = 0; i >= 0; i--, j++){
        vetor[j] = i;
    }
}

// Merge Sort
int merge(int vetor[], int esqueda, int media, int direita){
    int i, j, k;
    int n1 = media - esqueda + 1;
    int n2 = direita - media;
    int troca = 0;
  

    int Vesquerda[n1], Vdireita[n2];
  

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
    troca = i + j;
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

    return troca;
}
  
int mergeSort(int vetor[], int esquerda, int direita){
  int troca;

    if (esquerda < direita) {
        int media = esquerda + (direita - esquerda) / 2;
  
        mergeSort(vetor, esquerda, media);
        mergeSort(vetor, media + 1, direita);
  
        troca = merge(vetor, esquerda, media, direita);
    }

    return troca;
}

void mergeSortComparacao(int vetor[], int n){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int troca;

    printf("Merge Sort\n");
    segundosAntes = clock();
    troca = mergeSort(vetor, 0, n);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", troca);
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

int montadorBaldes(int vetor[], int tamano, int balde) {
  int vetorSaida[tamano + 1];
  int valorMax = (vetor[0] / balde) % 10;
  int troca = 0;

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
    troca++;
  }

  for (int i = 0; i < tamano; i++){
    vetor[i] = vetorSaida[i];
  }
}

int radixsort(int vetor[], int tamano) {
    int troca;
  int valorMax = valorMaximo(vetor, tamano);

  for (int balde = 1; valorMax / balde > 0; balde *= 10)
    troca = montadorBaldes(vetor, tamano, balde);

    return troca;
}

void radixSortComparacao(int *vetor, int num){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int troca;

    printf("Radix Sort\n");
    segundosAntes = clock();
    troca = radixsort(vetor, n);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", troca);
}

// Quick Sort
int trocarElementos(int *a, int *b) {
    int troca = 0;
    int t = *a;
    *a = *b;
    *b = t;

    return troca;
}

int dividirVetor(int array[], int low, int high, int *troca) {
  
  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      troca += trocarElementos(&array[i], &array[j]);
    }
  }

  troca += trocarElementos(&array[i + 1], &array[high]);
  
  return (i + 1);
}

int quickSort(int array[], int low, int high) {
    int troca = 0;
  if (low < high) {
    
    int pi = dividirVetor(array, low, high, &troca);
    
    quickSort(array, low, pi - 1);
    
    quickSort(array, pi + 1, high);
  }

  return troca;
}

void quickSortComparacao(int *vetor, int num){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int troca;

    printf("Quick Sort\n");
    segundosAntes = clock();
    troca = quickSort(vetor, 0, n-1);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", troca);
}