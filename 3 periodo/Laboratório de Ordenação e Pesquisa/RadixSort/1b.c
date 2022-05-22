#include <stdio.h>
#include <stdlib.h>

#define MAXPLACAS 30 // Altere para os testes iniciais. No final ordene pelo menos metade disso.

struct placa{
	int numeros;
};
typedef struct placa Placas;

void LerPlacas(Placas **placas, char *filepath){
	FILE *fp;
	int n = 0, tamanho, letr;
	// char letr[8];

	fp = fopen(filepath, "r");

	while (fscanf(fp, "%d", &letr) == 1 && n < MAXPLACAS)
	{
		placas[n] = (Placas*)malloc(sizeof(Placas));
		placas[n]->numeros = letr;
		n++;
	}

	fclose(fp);
}

void heapSort(Placas **placas, int tamanho) {
	int i, j;
	Placas *aux;
	int n = tamanho-1;
	while(n >= 0){
		for(i = n; i > 0; i--){
			int direita = (i-2)/2;
			int esquerda = (i-1)/2;

			if(i%2 == 0){
				if(placas[i]->numeros > placas[direita]->numeros){
					aux = placas[i];
					placas[i] = placas[direita];
					placas[direita] = aux; 
				}
			}

			if(i%2 == 1){
				if(placas[i]->numeros > placas[esquerda]->numeros){
					aux = placas[i];
					placas[i] = placas[esquerda];
					placas[esquerda] = aux;
				}
			}
		}
		aux = placas[0];
		placas[0] = placas[n];
		placas[n] = aux;
		n = n - 1;
	}
}

int main(){
    int n;
	Placas** placas;
	placas = (Placas**)malloc(MAXPLACAS * sizeof(Placas*));

	LerPlacas(placas, "placasNumeros.txt");

	heapSort(placas, 30);

	for (n = 0; n < MAXPLACAS; n++){
		printf("%d \n", placas[n]->numeros);
	}

	for (n = 0; n < MAXPLACAS ; n++){
		free(placas[n]);
	}
	free(placas);

	return 0;
}