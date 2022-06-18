#include <stdio.h>
#include <time.h>

void imprimirVetor(int array[], int size) {
	int i;
  for (i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void BubbleSort(int *vetor, int n){
    int i, j, aux;
	for (i = 1; i < n; i++){
		for (j = 0; j < n - i; j++){
			if (vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
}

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

int buscarBinaria(int *vector, int inicio, int fim, int procura) {
    int i = (inicio + fim) / 2;
    int aux;
    int d = i +1;
    int e = i -1;
    // printf("%d - i \n", i);
    // imprimirVetor2(vector, inicio, fim);
    if (vector[i] == procura) {
        vector[i] = procura -1;
        return i;
    }

    if (i < fim && vector[i+1] == procura) {
        vector[i+1] = procura -1;
        return i+1;
    }

    if (i > 0 && vector[i-1] == procura) {
        vector[i-1] = procura -1;
        return i-1;
    }

    if (inicio > fim) {
        return -1;
    }

    if (vector[i] < procura) {
        return buscarBinaria(vector, i + 1, fim, procura);
    } else {
        return buscarBinaria(vector, inicio, i - 1, procura);
    }
}  

int buscarBinariaRecursiva(int *vector, int inicio, int fim, int procura, int *vetorSec) {
    int vAux[fim];
    int i;
    int aux = 1;
    int quant = 0;
    for(i=0;i<fim;i++){
        vAux[i]=vector[i];
    }
    while (aux != -1)
    {   
        // imprimirVetor(vAux, fim);
        aux = buscarBinaria(vAux, inicio, fim, procura);
        // printf("%d aux \n", aux);
        if(aux != -1){
            vetorSec[quant] = aux;
            quant++;
        }
    }
    
    return quant;
}

int main() {
    clock_t segundosAntes, segundosDepois;
    double segundosDiferencaA, segundosDiferencaC, segundosDiferencaD;
    int n = 16;

    int data[] = {0, 7, 2, 2, 1, 1, 9, 6, 12, 2, 43, 8, 8, 87, 23, 89, 34};
    int dataSec[n];
    int fimDataSec;

    imprimirVetor(data, n);
    puts("Exercicio A:");
    segundosAntes = clock();
    fimDataSec = buscaSequencial(data, 2, n, dataSec);
    segundosDepois = clock();
    segundosDiferencaA = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    imprimirVetor(dataSec, fimDataSec);
    puts("Exercicio B:");
    BubbleSort(data, n);
    imprimirVetor(data, n);
    puts("Exercicio C:");
    segundosAntes = clock();
    fimDataSec = buscaSequencial(data, 2, n, dataSec);
    segundosDepois = clock();
    segundosDiferencaC = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    imprimirVetor(dataSec, fimDataSec);
    puts("Exercicio D:");
    segundosAntes = clock();
    fimDataSec = buscarBinariaRecursiva(data, 0, n, 2, dataSec);
    segundosDepois = clock();
    segundosDiferencaD = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    imprimirVetor(dataSec, fimDataSec);
    printf("Tempo gasto na A de %f\n", segundosDiferencaA);
    printf("Tempo gasto na C de %f\n", segundosDiferencaC);
    printf("Tempo gasto na D de %f\n", segundosDiferencaD);
}