#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numerosAletorios (int *vetor, int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        vetor[i] = rand() % quantidade;
    }
}

int insertionSortCresc(int *vetor, int n){
    int comparacao = 0;
    int troca = 0;

    int i, aux, j;
    for (i = 1; i < n; i++){
        aux = vetor[i];
        j = i - 1;
        while (j >=0 && vetor[j] > aux){
            vetor[j+1] = vetor[j];
            j = j - 1;
            comparacao++;
            troca++;
        }
        comparacao++;
        vetor[j+1] = aux;
    }
    
    int variaveis[2] = {comparacao, troca};
    return variaveis;
}

int insertionSortDecresc(int *vetor, int n){
    int comparacao = 0;
    int troca = 0;

    int i, aux, j;
    for (i = 1; i < n; i++){
        aux = vetor[i];
        j = i - 1;
        while (j >=0 && vetor[j] < aux){
            vetor[j+1] = vetor[j];
            j = j - 1;
            comparacao++;
            troca++;
        }
        comparacao++;
        vetor[j+1] = aux;
    }
    
    int variaveis[2] = {comparacao, troca};
    return variaveis;
}

int selectionSortCres(){

}

int selectionSortDecres(){

}

int shellSortCresc(){

}

int shellSortDecresc(){

}

int bubbleSortCresc(){

}

int bubbleSortDecresc(){

}

int main() {
    int comparacao, troca;
    int comparacaoTroca[2];
    int variaveis[2];
    clock_t segundosAntes, segundosDepois, segundosDiferenca;
    int vetor1k[1000];
    int vetor10k[10000];
    int vetor100k[100000];
    numerosAletorios(vetor1k, 1000);
    numerosAletorios(vetor10k, 10000);
    numerosAletorios(vetor100k, 100000);

    printf("Insertion\n");
    printf("Cresente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    printf("Decrescente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    printf("Selection\n");
    printf("Cresente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    printf("Decrescente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    printf("Shell\n");
    printf("Cresente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    printf("Decrescente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    printf("Bubble\n");
    printf("Cresente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    printf("Decrescente");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %lf\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", comparacao);
    printf("Foram realizadas %d trocas\n", troca);

    return 0;
}