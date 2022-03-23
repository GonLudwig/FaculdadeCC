#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSENHAS 430000 // Altere para os testes iniciais. No final ordene pelo menos metade disso.

struct senha{
	char *palavra;
	int tamanho;
	int frequencia;
};
typedef struct senha Senha;

void LerSenhas(Senha **senhas, char *filepath)
{
	FILE *fp;
	int n = 0, tam, freq;
	char pass[200];

	fp = fopen(filepath, "r");

	while (fscanf(fp, "%d %d %[^\n]", &tam, &freq, pass) == 3)
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

int main(){
    int n;
	Senha** senhas;
	senhas = (Senha**)malloc(MAXSENHAS * sizeof(Senha*));

	LerSenhas(senhas, "senhas.txt");

	for (n = 0; n < MAXSENHAS; n++)
		printf("%s - %d %d\n", senhas[n]->palavra, senhas[n]->tamanho, senhas[n]->frequencia);


	for (n = 0; n < MAXSENHAS ; n++)
		free(senhas[n]);
	free(senhas);

	return 0;
}

