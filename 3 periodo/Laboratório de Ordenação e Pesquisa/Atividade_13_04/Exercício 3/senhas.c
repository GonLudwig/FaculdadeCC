#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAXSENHAS 300000 // Altere para os testes iniciais. No final ordene pelo menos metade disso.

struct senha{
	char *palavra;
	int tamanho;
	int frequencia;
};
typedef struct senha Senha;

void LerSenhas(Senha **senhas, char *filepath){
	FILE *fp;
	int n = 0, tam, freq;
	char pass[200];

	fp = fopen(filepath, "r");

	while (fscanf(fp, "%d %d %[^\n]", &tam, &freq, pass) == 3 && n < MAXSENHAS)
	{
		senhas[n] = (Senha*)malloc(sizeof(Senha));
		senhas[n]->tamanho = tam;
		senhas[n]->frequencia = freq;
		senhas[n]->palavra = (char*)malloc((tam+1) * sizeof(char));
		pass[tam] = '\0';
		strcpy(senhas[n]->palavra, pass);
		n++;
	}

	fclose(fp);
}

void ordenacaoAlfabeticaBubble(Senha **senhas){
	clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
	Senha *aux;

    int i, j, letra1, letra2;

	printf("Bubble\n");
    segundosAntes = clock();
	for (i = 1; i < MAXSENHAS; i++){
		for (j = 0; j < MAXSENHAS - i; j++){
			letra1 = senhas[j]->palavra[0];
			letra2 = senhas[j+1]->palavra[0];
			if (letra1 > letra2){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
	}
	segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
}

void ordenacaoAlfabeticaSelection(Senha **senhas){
	clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
	Senha *aux;

	int i, j, min, letra1, letra2;
  
	printf("Selection\n");
    segundosAntes = clock();
    for (i = 0; i < MAXSENHAS-1; i++){
        min = i;
        for (j = i+1; j < MAXSENHAS; j++){
			letra1 = senhas[j]->palavra[0];
			letra2 = senhas[min]->palavra[0];
            if (letra1 < letra2){
                min = j;
                aux = senhas[min];
                senhas[min] = senhas[i];
                senhas[i] = aux;
            }
        }
    }
	segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
}

void ordenacaoTamanhoBubble(Senha **senhas){
	clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
	Senha *aux;

    int i, j;

	printf("Bubble\n");
    segundosAntes = clock();
	for (i = 1; i < MAXSENHAS; i++){
		for (j = 0; j < MAXSENHAS - i; j++){
			if (senhas[j]->tamanho > senhas[j+1]->tamanho){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
	}
	segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
}

void ordenacaoTamanhoSelection(Senha **senhas){
	clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
	Senha *aux;

	int i, j, min;
  
	printf("Selection\n");
    segundosAntes = clock();
    for (i = 0; i < MAXSENHAS-1; i++){
        min = i;
        for (j = i+1; j < MAXSENHAS; j++){
            if (senhas[j]->tamanho < senhas[min]->palavra[0]){
                min = j;
                aux = senhas[min];
                senhas[min] = senhas[i];
                senhas[i] = aux;
            }
        }
    }
	segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
}

void ordenacaoFrequenciaBubble(Senha **senhas){
	clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
	Senha *aux;

    int i, j;

	printf("Bubble\n");
    segundosAntes = clock();
	for (i = 1; i < MAXSENHAS; i++){
		for (j = 0; j < MAXSENHAS - i; j++){
			if (senhas[j]->frequencia > senhas[j+1]->frequencia){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
	}
	segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
}

void ordenacaoFrequenciaSelection(Senha **senhas){
	clock_t segundosAntes, segundosDepois;
    double segundosDiferenca;
	Senha *aux;

	int i, j, min;
  
	printf("Selection\n");
    segundosAntes = clock();
    for (i = 0; i < MAXSENHAS-1; i++){
        min = i;
        for (j = i+1; j < MAXSENHAS; j++){
            if (senhas[j]->palavra[0] < senhas[min]->frequencia){
                min = j;
                aux = senhas[min];
                senhas[min] = senhas[i];
                senhas[i] = aux;
            }
        }
    }
	segundosDepois = clock();
    segundosDiferenca = (double)(segundosDepois - segundosAntes)/CLOCKS_PER_SEC;
    printf("Tempo gasto foi de %f\n", segundosDiferenca);
}

int main(){
    int n;
	Senha** senhas;
	senhas = (Senha**)malloc(MAXSENHAS * sizeof(Senha*));

	LerSenhas(senhas, "senhas.txt");

	for (n = 0; n < MAXSENHAS; n++){
		printf("%s - %d %d\n", senhas[n]->palavra, senhas[n]->tamanho, senhas[n]->frequencia);
	}


	for (n = 0; n < MAXSENHAS ; n++){
		free(senhas[n]);
	}
	// free(senhas);

	return 0;
}