#include "tadNetflix.h"

struct itensDaLista {
    int numeroEpisodio;
    char titulo[50];
    struct itensDaLista *proximo;
    struct itensDaLista *anterior;
};

struct lista {
    tipoItem *primeiro;
    tipoItem *ultimo;
    int quantidade;
};

tipoItem *criarEpisodio(tipoLista *lista, char *titulo, int qtd){
    tipoItem *episodio = (tipoItem*) calloc(1, sizeof(tipoItem));

    episodio->numeroEpisodio = qtd;
    strcpy(episodio->titulo, titulo);
    episodio->anterior = NULL;
    episodio->proximo = NULL;

    return episodio;
}

tipoLista *criarSerie(){
    tipoLista *lista = (tipoLista*) calloc(1, sizeof(tipoLista));

    lista->quantidade = 0;
    lista->primeiro = NULL;
    lista->ultimo = NULL;

    return lista;
}

void adicionarEpisodio(tipoLista *lista, char *titulo){
    lista->quantidade++;
    tipoItem *episodio = criarEpisodio(lista, titulo, lista->quantidade);
    episodio->anterior = lista->ultimo;

    if (lista->quantidade == 1){
        lista->primeiro = episodio;
    } else {
        lista->ultimo->proximo = episodio;
    }
    lista->ultimo = episodio;
}

void excluirUltimoEpisodio(tipoLista *lista){
    tipoItem *aux = lista->ultimo;

    printf("Episodio %d:\n", aux->numeroEpisodio);
    printf("Titulo: %s\n", aux->titulo);
    puts("Episodio EXCLUIDO!!!");

    lista->ultimo = lista->ultimo->anterior;
    free(aux);
    lista->ultimo->proximo = NULL;
    lista->quantidade--;
}

void exibirSerie(tipoLista *lista){
    int escolha = 1;
    tipoItem *aux = lista->primeiro;

    while(aux != NULL){
        while (escolha != 0){
            printf("Episodio %d:\n", aux->numeroEpisodio);
            printf("Titulo: %s\n", aux->titulo);
            if (aux->numeroEpisodio < lista->quantidade){
                puts("Digite 1 - Proximo episodio.");
            }
            
            if(aux->numeroEpisodio > 1){
                puts("Digite 2 - Episodio anterior.");
            }

            puts("Digite 0 - Sair.");
            scanf("%d", &escolha);
            switch (escolha){
                case 1:
                    if (aux->numeroEpisodio < lista->quantidade){
                        aux = aux->proximo;
                    }
                    break;
                case 2:
                    if (aux->numeroEpisodio > 1){
                        aux = aux->anterior;
                    }
                    break;
                case 0:
                    puts("Adeus ate a proxima!");
                    aux = NULL;
                    break;
                default:
                    puts("Escolha Invalida!");
                    break;
            }
        }
    }
}

void liberarLista(tipoLista **lista){
    tipoLista *listaAux = *lista;
    tipoItem *aux = listaAux->primeiro;
    tipoItem *auxExclusao = NULL;

    while (aux != NULL){
        auxExclusao = aux;
        aux = aux->proximo;
        free(auxExclusao);
    }
    
    free(listaAux);
    *lista = NULL;
}