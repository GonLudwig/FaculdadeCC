#include <stdio.h>
#include <time.h>
#include <string.h>

int main (){
    clock_t segundoAntes, segundosDepois;
    double segundoDiferenca;
	int vetor[10] = { 1, 5, 3, 6, 7, 8, 4, 23, 10, 9};
    char vetorString[10][5];
	int n = 10;
	int i, aux, j, min_idx, temp, letra1, letra2;
    char auxString[5];
    int comparacoes = 0;
    
    puts("Escregva 10 palavras de 5 letras\n");
    for (i = 0; i < n; i++){
        fgets(vetorString[i], 5, stdin);
    }

    // int
    printf("Insert Sort\n");
    segundoAntes = clock();
    for (i = 1; i < n; i++) {
        aux = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > aux && comparacoes++) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = aux;
    }
    segundosDepois = clock();
    segundoDiferenca = (double)(segundosDepois - segundoAntes) / CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundoDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacoes);

    printf("Selection Sort\n");
    comparacoes = 0;
    segundoAntes = clock();
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
            if(vetor[j] < vetor[min_idx] && comparacoes++){
                min_idx = j;
                temp = vetor[min_idx];
                vetor[min_idx] = vetor[i];
                vetor[i] = temp;
            }
        }
    }
    segundosDepois = clock();
    segundoDiferenca = (double)(segundosDepois - segundoAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundoDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacoes);

    // String
    printf("Insert Sort String\n");
    segundoAntes = clock();
    for (i = 1; i < n; i++) {
        strcpy(auxString, vetorString[i]);
        letra1 = vetorString[i][0];
        j = i - 1;
        letra2 = vetorString[j][0];
        while (j >= 0 && letra2 > letra1) {
            strcpy(vetorString[j+1], vetorString[j]);
            j = j - 1;
            letra2 = vetorString[j][0];
            comparacoes++;
        }
        strcpy(vetorString[j+1], auxString);
    }
    segundosDepois = clock();
    segundoDiferenca = (double)(segundosDepois - segundoAntes) / CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundoDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacoes);

    printf("Selection Sort\n");
    comparacoes = 0;
    segundoAntes = clock();
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
            letra1 = vetorString[min_idx][0];
            letra2 = vetorString[j][0];
            if (letra2 < letra1){
                min_idx = j;
                strcpy(auxString, vetorString[min_idx]);
                stpcpy(vetorString[min_idx], vetorString[i]);

                stpcpy(vetorString[i], auxString);
                comparacoes++;
            }
        }
    }
    segundosDepois = clock();
    segundoDiferenca = (double)(segundosDepois - segundoAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundoDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacoes);

    return 0;
}