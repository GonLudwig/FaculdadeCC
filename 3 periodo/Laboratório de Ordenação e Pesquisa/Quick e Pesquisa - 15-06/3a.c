#include <stdio.h>

void imprimirVetor(int array[], int size) {
	int i;
  for (i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void imprimirVetor2(int array[], int inicio, int size) {
	int i;
  for (i = inicio; i < size; ++i) {
    printf("%d ", array[i]);
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

// int buscarBinariaRecursiva(int *vector, int inicio, int fim, int procura, int *vetorSec, int *achou) {
//     int i = (inicio + fim) / 2;
//     int j = *achou;
//     int aux;

//     // imprimirVetor2(vector, inicio, fim);
//     if (inicio >= fim) {
//         return -1;
//     }

//     if (vector[i] == procura) {
//         vetorSec[j] = i;
//         return j + 1;
//     }

//     if (vector[i] < procura) {
//         aux = buscarBinariaRecursiva(vector, i + 1, fim, procura, vetorSec, achou);
//         if(aux > 0){
            
//         }
//         printf(" d %d - %d\n", vector[i], *achou);
//     } else {
//         aux = buscarBinariaRecursiva(vector, inicio, i - 1, procura, vetorSec, achou);
//         if(aux > 0){
//             return aux
//         }
//         printf(" e %d - %d\n", vector[i], *achou);
//     }
//     printf("%d\n", *achou);
// }

int buscaBinaria (int x, int n, int v[]) { 
    int e = -1, d = n; // atenção!
    int j =0;

    while (e < d-1) {
        // imprimirVetor2(v, e+1, d);
        int m = (e + d)/2;

        if (v[m] < x){
            e = m;
        }else {
            d = m; 
        }

        if(v[d] == x){
            j++;
        }
        printf(" %d - %d - %d\n", m, d, e+1);
        printf(" %d - %d - %d\n\n", v[m], v[d], v[e+1]);
    }
    return j;
}

int main() {
    int n = 16;

    int data[] = {8, 7, 2, 2, 1, 0, 9, 6, 12, 2, 43, 8, 8, 87, 23, 89, 34};
    int dataSec[n];
    int fimDataSec;
    int achou = 0;

    imprimirVetor(data, n);
    puts("Exercicio A:");
    fimDataSec = buscaSequencial(data, 8, n, dataSec);
    imprimirVetor(dataSec, fimDataSec);
    puts("Exercicio B:");
    select(data, n);
    imprimirVetor(data, n);
    puts("Exercicio C:");
    fimDataSec = buscaSequencial(data, 8, n, dataSec);
    imprimirVetor(dataSec, fimDataSec);
    puts("Exercicio D:");
    achou = buscaBinaria(8, n, data);
    printf("%d \n", achou);
    imprimirVetor(dataSec, achou);
}