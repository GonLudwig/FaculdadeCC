#include"compras.h"

struct item {
    int cod;
    char nome[100];
    struct item *proximo;
};

struct listaCompras {
    int qtd;
    struct item *inicio;
    struct item *fim;
};

LCOMPRAS *criarlista(){
    LCOMPRAS *lista = (LCOMPRAS*) calloc(1, sizeof(LCOMPRAS));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

COMPRA *criarProduto(char *produto){
    COMPRA *iten = (COMPRA*) calloc(1, sizeof(COMPRA));

    strcpy(iten->nome, produto);
    iten->proximo = NULL;
    iten->cod = 0;

    return iten;
}

void adicionarProduto(LCOMPRAS *lista, char *produto){
    COMPRA *iten = criarProduto(produto);

    if(lista->inicio == NULL){
        lista->inicio = iten;
    }else{
        lista->fim->proximo = iten;
    }
    lista->fim = iten;
    lista->qtd++;
    iten->cod = lista->qtd;
}

void excluirItem(LCOMPRAS *lista){

    if(lista != NULL){
        COMPRA *aux = lista->inicio;    
        lista->inicio = aux->proximo;
        if (aux == lista->fim){
            lista->fim = NULL;
        }
        lista->qtd--;
        free(aux);
        puts("Item excluido!");
    } else {
        puts("Lista esta vazia!");
    }
}

void verCompras(LCOMPRAS *lista){
    COMPRA *list = lista->inicio;
    int escolha;


    while (list != NULL){
        printf("Nome: %s\n", list->nome);
        puts("Digite 1 - Ver o proximo item");
        puts("Digite 2 - Excluir o primeiro item da lista");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                if(list == lista->fim){
                    puts("Este e o ultimo item");
                    puts("Digite 1 - Voltar ao inicio");
                    puts("Digite 0 - Sair");
                    scanf("%d", &escolha);
                    switch (escolha){
                        case 1:
                            list = lista->inicio;
                            break;
                        case 0:
                            list = list->proximo;
                            break;
                        default:
                            puts("Escolha Invalida!!!");
                            break;
                    }
                }else{
                    list = list->proximo;
                }
                break;
            case 2:
                printf("Este e o primeiro item da lista: %s\n", lista->inicio->nome);
                puts("Digite 1 - Excluir item");
                puts("Digite 0 - Sair");
                scanf("%d", &escolha);
                switch (escolha){
                    case 1:
                        excluirItem(lista);
                        break;
                    case 0:
                        puts("Item nao foi excluido!");
                        break;
                    default:
                        puts("Escolha Invalida!!!");
                        break;
                }
                break;
            case 0:
                list = NULL;
                break;
            default:
                puts("Escolha Invalida!!!");
                break;
        }
    }

}

void liberarLista(LCOMPRAS **lista){
    LCOMPRAS *l = *lista;

    COMPRA *percorer = l->inicio;
    COMPRA *aux = NULL;
    while (percorer != NULL){
        percorer = percorer->proximo;
        aux = percorer;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}
