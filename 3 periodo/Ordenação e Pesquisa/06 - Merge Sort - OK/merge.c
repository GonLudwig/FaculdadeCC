#include<stdio.h>
#include<stdlib.h>

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

void preencheVetor(char vetor[],int tam){
  int i;
  
  for(i=0;i<tam;i++){
    vetor[i]='a'+(char)(rand()%26);
  }
}

int main(){
    int i;
    int inicio = 0;
    int fim = 27;
    char vetor[fim];

    preencheVetor(vetor, fim);

    for (i = 0; i < fim; i++){
        printf("%c ",vetor[i]);
    }
    printf("\n");

    mergeSort(vetor, inicio, fim);
    
    for (i = 0; i < fim; i++){
        printf("%c ",vetor[i]);
    }
    printf("\n");
}