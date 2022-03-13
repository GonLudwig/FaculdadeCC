#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numerosAletorios (int *vetor, int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        vetor[i] = rand() % quantidade;
    }
}

int insertionSortCresc(int *vetor, int n, int *variaveis){
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
    
    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int insertionSortDecresc(int *vetor, int n, int *variaveis){
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
    
    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int selectionSortCres(int *vetor, int n, int *variaveis){
    int i, j, min, temp;
    int comparacao = 0;
    int troca = 0;
  
    for (i = 0; i < n-1; i++){
        min = i;
        for (j = i+1; j < n; j++){
            if (vetor[j] < vetor[min]){
                min = j;
                temp = vetor[min];
                vetor[min] = vetor[i];
                vetor[i] = temp;
                troca++;
                comparacao++;
            }
            comparacao++;
        }
    }

    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int selectionSortDecres(int *vetor, int n, int *variaveis){
    int i, j, min, temp;
    int comparacao = 0;
    int troca = 0;
  
    for (i = 0; i < n-1; i++){
        min = i;
        for (j = i+1; j < n; j++){
            if (vetor[j] > vetor[min]){
                min = j;
                temp = vetor[min];
                vetor[min] = vetor[i];
                vetor[i] = temp;
                troca++;
                comparacao++;
            }
            comparacao++;
        }
    }

    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int shellSortCresc(int *vetor, int n, int *variaveis){
    int i , j , aux;
    int h = 1;
    int comparacao = 0;
    int troca = 0;

    while(h < n) {
        h = 3*h+1;
    }
    while ( h > 1) {
        h /= 3;
        for(i = h; i < 8; i++) {
            aux = vetor[i];
            j = i - h;
            while (j >= 0 && aux < vetor[j]) {
                vetor [j + h] = vetor[j];
                j -= h;
                troca++;
                comparacao++;
            }
            vetor [j + h] = aux;
            comparacao++;
        }
    }

    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int shellSortDecresc(int *vetor, int n, int *variaveis){
    int i , j , aux;
    int h = 1;
    int comparacao = 0;
    int troca = 0;

    while(h < 8) {
        h = 3*h+1;
    }
    while ( h > 1) {
        h /= 3;
        for(i = h; i < 8; i++) {
            aux = vetor[i];
            j = i - h;
            while (j >= 0 && aux > vetor[j]) {
                vetor [j + h] = vetor[j];
                j -= h;
                troca++;
                comparacao++;
            }
            vetor [j + h] = aux;
            comparacao++;
        }
    }

    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int bubbleSortCresc(int *vetor, int n, int *variaveis){
    int i, j, aux;
    int comparacao = 0;
    int troca = 0;

	for (i = 1; i < n; i++){
		for (j = 0; j < n - i; j++){
			if (vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
                troca++;
                comparacao++;
			}
            comparacao++;
		}
	}

    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int bubbleSortDecresc(int *vetor, int n, int *variaveis){
    int i, j, aux;
    int comparacao = 0;
    int troca = 0;

	for (i = 1; i < n; i++){
		for (j = 0; j < n - i; j++){
			if (vetor[j] < vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
                troca++;
                comparacao++;
			}
            comparacao++;
		}
	}

    variaveis[0] = comparacao;
    variaveis[1] = troca;
}

int insertion(int *vetor, int n){
    clock_t segundosAntes, segundosDepois, segundosDiferenca;
    int variaveis[2];

    printf("Insertion\n");
    printf("Cresente\n");
    segundosAntes = clock();
    insertionSortCresc(vetor, n, variaveis);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);

    printf("Decrescente\n");
    segundosAntes = clock();
    insertionSortDecresc(vetor, n, variaveis);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

int selection(int *vetor, int n){
    clock_t segundosAntes, segundosDepois, segundosDiferenca;
    int variaveis[2];

    printf("Selection\n");
    printf("Cresente\n");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);

    printf("Decrescente\n");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

int shell(int *vetor, int n){
    clock_t segundosAntes, segundosDepois, segundosDiferenca;
    int variaveis[2];

    printf("Shell\n");
    printf("Cresente\n");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);

    printf("Decrescente\n");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

int bubble(int *vetor, int n){
    clock_t segundosAntes, segundosDepois, segundosDiferenca;
    int variaveis[2];

    printf("Bubble\n");
    printf("Cresente\n");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);

    printf("Decrescente\n");
    segundosAntes = clock();
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %ld\n", segundosDiferenca);
    printf("Foram realizadas %d comparacoes\n", variaveis[0]);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

int main() {
    int vetor1k[1000];
    int vetor10k[10000];
    int vetor100k[100000];
    numerosAletorios(vetor1k, 1000);
    numerosAletorios(vetor10k, 10000);
    numerosAletorios(vetor100k, 100000);

    insertion(vetor1k, 1000);
    // insertion(vetor10k, 10000);
    // insertion(vetor100k, 100000);
    printf("\n");
    selection(vetor1k, 1000);
    // selection(vetor10k, 10000);
    // selection(vetor100k, 100000);
    printf("\n");
    shell(vetor1k, 1000);
    // shell(vetor10k, 10000);
    // shell(vetor100k, 100000);
    printf("\n");
    bubble(vetor1k, 1000);
    // bubble(vetor10k, 10000);
    // bubble(vetor100k, 100000);


    return 0;
}