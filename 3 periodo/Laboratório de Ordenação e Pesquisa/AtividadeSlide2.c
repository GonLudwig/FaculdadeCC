#include<stdio.h>

void insertSortNome(){

}

void insertSortSalario(){

    float vetor[10] = {1.23, 24.54, 56.12, 45.76, 66.23, 57.12, 54.12, 45.76, 65.65, 56.78};
    int n = 10;
    int i, aux, j;
    for (i = 0; i < n; i++){
        aux = vetor[i];
        j= i;
        while (j >=0 && vetor[j] > aux){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }

    for (i = 0; i < n; i++){
        printf('%d ', vetor[i]);
    }
    
    
}

int main (){

    return 0;
}