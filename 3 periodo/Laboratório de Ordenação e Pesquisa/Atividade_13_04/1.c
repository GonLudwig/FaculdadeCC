#include <stdio.h>
#include <time.h>

int main (){
    clock_t segundoAntes, segundosDepois, segundoDiferenca;
	int vetor[10] = { 1, 5, 3, 6, 7, 8, 4, 23, 10, 9};
	int n = 10;
	int i, aux, j, min_idx, temp;
    int comparacoes = 0;

    printf("Insert Sort");
    segundoAntes = clock();
    for (i = 1; i < n; i++) {
        aux = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > aux) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
            comparacoes++;
        }
        vetor[j + 1] = aux;
    }
    segundosDepois = clock();
    segundoDiferenca = (double)(segundosDepois - segundoAntes) / CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundoDiferenca);
    printf("Foram realizadas %d comparacoes", comparacoes);

    printf("Seguencia ordenada ");
    for (i = 0; i < n; i++){
    	printf("- %d", vetor[i]);
    }
    printf("\n");

    printf("Selection Sort");
    comparacoes = 0;
    segundoAntes = clock();
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
          if (vetor[j] < vetor[min_idx]){
            min_idx = j;
            temp = vetor[min_idx];
            vetor[min_idx] = vetor[i];
            vetor[i] = temp;
            comparacoes++;
          }
        }
    }
    segundosDepois = clock();
    segundoDiferenca = (double)(segundosDepois - segundoAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundoDiferenca);
    printf("Foram realizadas %d comparacoes", comparacoes);

    printf("Seguencia ordenada ");
    for (i = 0; i < n; i++){
        printf("- %d", vetor[i]);
    }
    printf("\n");


    return 0;
}