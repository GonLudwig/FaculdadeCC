#include"exercicio4.h"

struct estadosCovid {
	int casosConfirmados;
	int mortes;
	char estado[2];
	int regiao; // 1- Norte, 2- Nordeste, 3- Centro-oste, 4- Sudeste, 5-Sul
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

void imprimirLista(LESTADOCOVID *lista){
	ESTADOCOVID *estado = lista->inicio;
	int i;

	for(i=1; estado != NULL ;i++){
		printf("Item - %d\n", i);
		printf("Estado - %s\n", estado->estado);
		printf("Numero de mortos - %d\n", estado->mortes);
		printf("Numero de casos confirmados - %d\n", estado->casosConfirmados);
		estado = estado->proximo;
	}
}

void ordenarCasosConfirmados(LESTADOCOVID *lista){
	int i, j;
	ESTADOCOVID *estadoCovid = lista->inicio;
	ESTADOCOVID *aux;
	
	for (i = 1; i < lista->qtd; i++){
		for (j = 0; j < lista->qtd - i; j++){
			if (estadoCovid->casosConfirmados > estadoCovid->proximo->casosConfirmados){
				aux = estadoCovid->proximo->proximo;
				estadoCovid->proximo->anterior = estadoCovid->anterior;
				estadoCovid->anterior = estadoCovid->proximo;
				estadoCovid->proximo->proximo = estadoCovid;
				estadoCovid->proximo = aux;
				aux = NULL;
			}
		}
	}
	printf("Ordenando por casos confirmados\n");
}

void ordenarTotalMortes(LESTADOCOVID *lista){
	int i, j;
	ESTADOCOVID *estadoCovid = lista->inicio;
	ESTADOCOVID *aux;
	
	for (i = 1; i < lista->qtd; i++){
		for (j = 0; j < lista->qtd - i; j++){
			if (estadoCovid->mortes > estadoCovid->proximo->mortes){
				aux = estadoCovid->proximo->proximo;
				estadoCovid->proximo->anterior = estadoCovid->anterior;
				estadoCovid->anterior = estadoCovid->proximo;
				estadoCovid->proximo->proximo = estadoCovid;
				estadoCovid->proximo = aux;
				aux = NULL;
			}
		}
	}
	printf("Ordenando por total de mortes\n");
}

void ordenarPorEstado(LESTADOCOVID *lista){
	int i, j;
	int letra1, letra2;
	ESTADOCOVID *estadoCovid = lista->inicio;
	ESTADOCOVID *aux;
	

	for (i = 1; i < lista->qtd; i++){
		for (j = 0; j < lista->qtd - i; j++){
			letra1 = estadoCovid->estado[0];
			letra2 = estadoCovid->proximo->estado[0];
			if (leta1 > letra2){
				aux = estadoCovid->proximo->proximo;
				estadoCovid->proximo->anterior = estadoCovid->anterior;
				estadoCovid->anterior = estadoCovid->proximo;
				estadoCovid->proximo->proximo = estadoCovid;
				estadoCovid->proximo = aux;
				aux = NULL;
			}
		}
	}
	printf("Ordenando por estado\n");
}

void liberarLista(LESTADOCOVID **lista){
    LESTADOCOVID *l = *lista;

    ESTADOCOVID *percorer = l->inicio;
    ESTADOCOVID *aux = NULL;
    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }
    
    free(l);
    // *lista = NULL;
}