#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAXSENHAS 27 // Altere para os testes iniciais. No final ordene pelo menos metade disso.

struct senha{
	char *estado;
	int casos;
	int mortes;
	int regiao;
};
typedef struct senha Senha;

void LerSenhas(Senha **senhas, char *filepath){
	FILE *fp;
	int n = 0, casosR, mortesR, regiaoR;
	char estadoR[3];

	fp = fopen(filepath, "r");

	while (fscanf(fp, "%d %d %d %[^\n]", &casosR, &mortesR, &regiaoR, estadoR) == 4 && n < MAXSENHAS)
	{
		senhas[n] = (Senha*)malloc(sizeof(Senha));
		senhas[n]->casos = casosR;
		senhas[n]->mortes = mortesR;
		senhas[n]->regiao = regiaoR;
		senhas[n]->estado = (char*)malloc((3) * sizeof(char));
		estadoR[3] = '\0';
		strcpy(senhas[n]->estado, estadoR);
		n++;
	}

	fclose(fp);
}

void ordenacaoEstado(Senha **senhas){
	Senha *aux;

    int i, j, letra1, letra2;

	for (i = 1; i < MAXSENHAS; i++){
		for (j = 0; j < MAXSENHAS - i; j++){
			letra1 = senhas[j]->estado[0];
			letra2 = senhas[j+1]->estado[0];
			if (letra1 > letra2){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
	}
}

void ordenacaoEstadoRegiao(Senha **senhas){
	Senha *aux;

    int i, j, letra1, letra2, regiao1, regiao2;

	for (i = 1; i < MAXSENHAS; i++){
		for (j = 0; j < MAXSENHAS - i; j++){
			regiao1 = senhas[j]->regiao;
			regiao2 = senhas[j+1]->regiao;
			if (regiao1 > regiao2){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
		for (j = 0; j < MAXSENHAS - i; j++){
			letra1 = senhas[j]->estado[0];
			letra2 = senhas[j+1]->estado[0];
			regiao1 = senhas[j]->regiao;
			regiao2 = senhas[j+1]->regiao;
			if(letra1 > letra2 && regiao1 > regiao2){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
	}
}

void ordenacaoCasos(Senha **senhas){
	Senha *aux;

    int i, j, letra1, letra2;

	for (i = 1; i < MAXSENHAS; i++){
		for (j = 0; j < MAXSENHAS - i; j++){
			letra1 = senhas[j]->casos;
			letra2 = senhas[j+1]->casos;
			if (letra1 > letra2){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
	}
}

void ordenacaoMortes(Senha **senhas){
	Senha *aux;

    int i, j, letra1, letra2;

	for (i = 1; i < MAXSENHAS; i++){
		for (j = 0; j < MAXSENHAS - i; j++){
			letra1 = senhas[j]->mortes;
			letra2 = senhas[j+1]->mortes;
			if (letra1 > letra2){
				aux = senhas[j];
				senhas[j] = senhas[j+1];
				senhas[j+1] = aux;
			}
		}
	}
}

void imprimirVetor(Senha **senhas) {
	int i;

	char regiao[15];

	for (i = 0; i < MAXSENHAS; i++){
		switch(senhas[i]->regiao){
			case 1:
				strcpy(regiao, "Norte");
				break;
			case 2:
				strcpy(regiao, "Nordeste");
				break;
			case 3:
				strcpy(regiao, "Centro-Oeste");
				break;
			case 4:
				strcpy(regiao, "Sudeste");
				break;
			case 5:
				strcpy(regiao, "Sul");
				break;
		}

		printf("%s - %s - %d %d\n", regiao, senhas[i]->estado, senhas[i]->casos, senhas[i]->mortes);
	}
}

int main(){
    int n;
	Senha** senhas;
	senhas = (Senha**)malloc(MAXSENHAS * sizeof(Senha*));

	LerSenhas(senhas, "estados.txt");

	ordenacaoEstadoRegiao(senhas);
	puts("Ordenar por estado e regiao.");
	imprimirVetor(senhas);
	puts("");
	ordenacaoEstado(senhas);
	puts("Ordenar por estado");
	imprimirVetor(senhas);
	puts("");
	ordenacaoCasos(senhas);
	puts("Ordenar por casos");
	imprimirVetor(senhas);
	puts("");
	ordenacaoMortes(senhas);
	puts("Ordenar por mortes");
	imprimirVetor(senhas);


	for (n = 0; n < MAXSENHAS ; n++){
		free(senhas[n]);
	}
	free(senhas);

	return 0;
}