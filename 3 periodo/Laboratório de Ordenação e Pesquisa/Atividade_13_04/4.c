#include"exercicio4.h"

struct estadosCovid {
	int casosConfirmados;
	int mortes;
	char estado[2];
	struct estadosCovid *proximo;
	struct estadosCovid *anterior;
};

struct listaEstadoCovid{
	int qtd;
	struct estadosCovid *inicio;
	struct estadosCovid *fim;
};

ESTADOCOVID *criarEstado(int casos, int mortes, char *nomeEstado){
	ESTADOCOVID *estado = (ESTADOCOVID*) calloc(1, sizeof(ESTADOCOVID));
	
	estado->casosConfirmados = casos;
	estado->mortes = mortes;
	strcpy(estado->estado, nomeEstado);
	estado->proximo = NULL;
	estado->anterior = NULL;
	
	return estado;
}

LESTADOCOVID *criarListaEstado(){
	LESTADOCOVID *lista = (LESTADOCOVID*) calloc(1, sizeof(LESTADOCOVID));
	
	lista->inicio = NULL;
	lista->fim = NULL;
	lista->qtd = 0;

	return lista;
}

void adicionarEstado(LESTADOCOVID *lista, int casos, int mortes, char *nomeEstado){
	ESTADOCOVID *estado = criarEstado(casos, mortes, nomeEstado);
	estado->anterior = lista->fim;

	if(lista->inicio == NULL){
		lista->inicio = estado;
	}else {
		lista->fim->proximo = estado;
	}

	lista->fim = estado;
	lista->qtd++;
}

void ordenarCasosConfirmados(LESTADOCOVID *lista){
	int i, j;
	ESTADOCOVID *estado = lista->inicio;
	ESTADOCOVID *aux;
	
	for (i = 1; i < lista->qtd; i++){
		for (j = 0; j < lista->qtd - i; j++){
			if (estado->casosConfirmados > estado->proximo->casosConfirmados){
				aux = estado->proximo->proximo;
				estado->proximo->anterior = estado->anterior;
				estado->anterior = estado->proximo;
				estado->proximo->proximo = estado;
				estado->proximo = aux;
				// estado = vetor[j+1];
				// vetor[j+1] = aux;
			}
		}
	}
	
	
	printf("Ordenando por estado\n");
	
}

void ordenarTotalMortes(){

}