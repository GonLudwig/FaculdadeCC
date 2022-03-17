#include"atividade.h"

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

void insertionSort(int *vetor, int n, int *variaveis){
    int troca = 0;
    int i, aux, j;
    for (i = 1; i < n; i++){
        aux = vetor[i];
        j = i - 1;
        while (j >=0 && vetor[j] > aux){
            vetor[j+1] = vetor[j];
            j = j - 1;
            troca++;
        }
        vetor[j+1] = aux;
    }
    variaveis[1] = troca;
}

void selectionSort(int *vetor, int n, int *variaveis){
    int i, j, min, temp;
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
            }
        }
    }
    variaveis[1] = troca;
}

void shellSort(int *vetor, int n, int *variaveis){
    int i , j , aux;
    int h = 1;
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
            }
            vetor [j + h] = aux;       
        }
    }
    variaveis[1] = troca;
}

void bubbleSort(int *vetor, int n, int *variaveis){
    int i, j, aux;
    int troca = 0;

	for (i = 1; i < n; i++){
		for (j = 0; j < n - i; j++){
			if (vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
                troca++;   
			}
		}
	}
    variaveis[1] = troca;
}

void heapMaxSort(int *vetor, int n, int *variaveis){
    int i, j, aux;
    int troca = 0;

	while(n >= 0){
		for(i = n; i > 0; i--){
			int direita = (i-2)/2;
			int esquerda = (i-1)/2;

			if(i%2 == 0){
				if(vetor[i] > vetor[direita]){
					aux = vetor[i];
					vetor[i] = vetor[direita];
					vetor[direita] = aux; 
                    troca++;
				}
			}

			if(i%2 == 1){
				if(vetor[i] > vetor[esquerda]){
					aux = vetor[i];
					vetor[i] = vetor[esquerda];
					vetor[esquerda] = aux;
                    troca++;
				}
			}
		}
		aux = vetor[0];
		vetor[0] = vetor[n];
		vetor[n] = aux;
		n = n - 1;
	}

    variaveis[1] = troca;
}

void insertion(int *vetor, int n){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int variaveis[2];

    printf("Insertion\n");
    printf("Cresente\n");
    segundosAntes = clock();
    insertionSort(vetor, n, variaveis);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

void selection(int *vetor, int n){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int variaveis[2];

    printf("Selection\n");
    printf("Cresente\n");
    segundosAntes = clock();
    insertionSort(vetor, n, variaveis);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

void bubble(int *vetor, int n){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int variaveis[2];

    printf("Bubble\n");
    printf("Cresente\n");
    segundosAntes = clock();
    insertionSort(vetor, n, variaveis);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

void shell(int *vetor, int n){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int variaveis[2];

    printf("Shell\n");
    printf("Cresente\n");
    segundosAntes = clock();
    insertionSort(vetor, n, variaveis);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}

void heapMax(int *vetor, int n){
    clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
    int variaveis[2];

    printf("HeapMax\n");
    printf("Cresente\n");
    segundosAntes = clock();
    insertionSort(vetor, n, variaveis);
    segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
    printf("Foram realizadas %d trocas\n", variaveis[1]);
}