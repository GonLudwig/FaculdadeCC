#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXPLACAS 31 // Altere para os testes iniciais. No final ordene pelo menos metade disso.

struct placa{
	char *letras;
    int num;
};
typedef struct placa Placas;

void LerPlacas(Placas **placas, char *filepath){
	FILE *fp;
	int n = 0, tamanho;
	char letr[8];

	fp = fopen(filepath, "r");

	while (fscanf(fp, "%d %[^\n]", &tamanho, letr) == 2 && n < MAXPLACAS)
	{
		placas[n] = (Placas*)malloc(sizeof(Placas));
        placas[n]->num = tamanho;
		placas[n]->letras = (char*)malloc((8) * sizeof(char));
		letr[8] = '\0';
		strcpy(placas[n]->letras, letr);
		n++;
	}

	fclose(fp);
}

int vetorString(char vetor[]){
    int i = 0;
    int valor = 0;
    int aux = 0;
    for ( i = 0; i < 8; i++){
        aux = vetor[i];
        valor += aux;
    }
    
    return valor;
}

int valorMaximo(Placas **placas, int tamanho) {
  int maior = vetorString(placas[0]->letras);
  int aux;
  for (int i = 1; i < tamanho; i++){
    aux = vetorString(placas[i]->letras);
    if (aux > maior){
      maior = aux;
    }
  }
  return maior;
}

// void montadorBaldes(Placas **placas, int tamano, int balde) {
//   int vetorSaida[tamano + 1];
//   int valorMax = (placas[0]->letras / balde) % 10;

//   for (int i = 1; i < tamano; i++) {
//     if (((placas[i]->letras / balde) % 10) > valorMax)
//       valorMax = placas[i]->letras;
//   }
//   int count[valorMax + 1];

//   for (int i = 0; i < valorMax; ++i){
//     count[i] = 0;
//   }

//   for (int i = 0; i < tamano; i++){
//     count[(placas[i]->letras / balde) % 10]++;
//   }
    
//   for (int i = 1; i < 10; i++){
//     count[i] += count[i - 1];
//   }

//   for (int i = tamano - 1; i >= 0; i--) {
//     vetorSaida[count[(placas[i]->letras / balde) % 10] - 1] = placas[i]->letras;
//     count[(placas[i]->letras / balde) % 10]--;
//   }

//   for (int i = 0; i < tamano; i++){
//     placas[i]->letras = vetorSaida[i];
//   }
// }

// void radixsort(Placas **placas, int tamano) {

//   int valorMax = valorMaximo(vetor, tamano);

//   for (int balde = 1; valorMax / balde > 0; balde *= 10)
//     montadorBaldes(vetor, tamano, balde);
// }

int main(){
    int n;
	Placas** placas;
	placas = (Placas**)malloc(MAXPLACAS * sizeof(Placas*));

	LerPlacas(placas, "placas.txt");

    // radixsort(placas, MAXPLACAS);
    int teste = valorMaximo(placas, MAXPLACAS);
    printf("%d", teste);

	for (n = 0; n < MAXPLACAS; n++){
		printf("%s \n", placas[n]->letras);
	}

	// printf("Bubble\n");
	// printf("Tempo gasto foi de %f\n", comparacoes[0]);
	// printf("Selection\n");
	// printf("Tempo gasto foi de %f\n", comparacoes[1]);

	for (n = 0; n < MAXPLACAS ; n++){
		free(placas[n]);
	}
	free(placas);

	return 0;
}