#include"endereco.h"

struct endereco {
    int cod;
    char rua[100];
    char bairro[100];
    char complemento[500];
    int numero;
    struct endereco *proximo;
    struct endereco *anterior;
};

struct listaEndereco {
    int qtd;
    struct endereco *inicio;
    struct endereco *fim;
};

LENDERECO *criarlista(){
    LENDERECO *lista = (LENDERECO*) calloc(1, sizeof(LENDERECO));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

CEP *criarCEP(char *nRua, char *nBairro, char *nComplemento, int num){
    CEP *loc = (CEP*) calloc(1, sizeof(CEP));

    strcpy(loc->rua, nRua);
    strcpy(loc->bairro, nBairro);
    strcpy(loc->complemento, nComplemento);
    loc->numero = num;
    loc->proximo = NULL;
    loc->anterior = NULL;
    loc->cod = 0;

    return loc;
}

void adicionarCEP(LENDERECO *lista, char *nRua, char *nBairro, char *nComplemento, int num){
    CEP *loc = criarCEP(nRua, nBairro, nComplemento, num);
    loc->anterior = lista->fim;

    if(lista->inicio == NULL){
        lista->inicio = loc;
    }else{
        lista->fim->proximo = loc;
    }
    lista->fim = loc;
    lista->qtd++;
    loc->cod = lista->qtd;
}

void excluirCEP(LENDERECO *lista){

    if(lista != NULL){
        CEP *aux = lista->fim;    
        lista->fim = aux->anterior;
        if (aux == lista->inicio){
            lista->inicio = NULL;
        }
        lista->qtd--;
        free(aux);
        lista->fim->proximo = NULL;
        aux = NULL;
        puts("endereco excluido!");
    } else {
        puts("Lista esta vazia!");
    }
}

void verCEPs(LENDERECO *lista){
    CEP *list = lista->inicio;
    int escolha;


    while (list != NULL){
        printf("Rua: %s\n", list->rua);
        printf("Numero: %d\n", list->numero);
        printf("Bairro: %s\n", list->bairro);
        printf("Complemento: %s\n", list->complemento);
        puts("Digite 1 - Ver o proximo endereco");
        puts("Digite 2 - Excluir o ultimo endereco da lista");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                if(list == lista->fim){
                    puts("Este e o ultimo endereco");
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
                puts("Este e o ultimo endereco da lista:");
                printf("Rua: %s\n", list->rua);
                printf("Numero: %d\n", list->numero);
                printf("Bairro: %s\n", list->bairro);
                printf("Complemento: %s\n", list->complemento);
                puts("Digite 1 - Excluir endereco");
                puts("Digite 0 - Sair");
                scanf("%d", &escolha);
                switch (escolha){
                    case 1:
                        excluirCEP(lista);
                        list = lista->inicio;
                        break;
                    case 0:
                        puts("Endereco nao foi excluido!");
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

void liberarLista(LENDERECO **lista){
    LENDERECO *l = *lista;

    CEP *percorer = l->inicio;
    CEP *aux = NULL;
    while (percorer != NULL){
        percorer = percorer->proximo;
        aux = percorer;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}
