#include"contato.h"

struct pessoa {
    int cod;
    char nome[100];
    char email[100];
    char numero[20];
    struct pessoa *proximo;
    struct pessoa *anterior;
};

struct listaContato {
    int qtd;
    struct pessoa *inicio;
    struct pessoa *fim;
};

LCONTATO *criarlista(){
    LCONTATO *lista = (LCONTATO*) calloc(1, sizeof(LCONTATO));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

CONTATO *criarContato(char *nPessoa, char *nEmail, char *num){
    CONTATO *pessoa = (CONTATO*) calloc(1, sizeof(CONTATO));

    strcpy(pessoa->nome, nPessoa);
    strcpy(pessoa->email, nEmail);
    strcpy(pessoa->numero, num);
    pessoa->proximo = NULL;
    pessoa->anterior = NULL;
    pessoa->cod = 0;

    return pessoa;
}

void adicionarContato(LCONTATO *lista, char *nPessoa, char *nEmail, char *num){
    CONTATO *pessoa = criarContato(nPessoa, nEmail, num);
    pessoa->anterior = lista->fim;

    if(lista->inicio == NULL){
        lista->inicio = pessoa;
    }else{
        lista->fim->proximo = pessoa;
    }
    lista->fim = pessoa;
    lista->qtd++;
    pessoa->cod = lista->qtd;
}

void editarContato(CONTATO *pessoa, char *nPessoa, char *nEmail, char *num){

    strcpy(pessoa->nome, nPessoa);
    strcpy(pessoa->email, nEmail);
    strcpy(pessoa->numero, num);
}

void verAgenda(LCONTATO *lista){
    CONTATO *list = lista->inicio;
    int escolha;
    char nPessoa[100];
    char nEmail[100];
    char nTelefone[20];


    while (list != NULL){
        printf("Nome: %s\n", list->nome);
        printf("Numero: %s\n", list->numero);
        printf("E-mail: %s\n", list->email);
        puts("Digite 1 - Ver o proximo pessoa");
        puts("Digite 2 - Editar contato da lista");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                if(list == lista->fim){
                    puts("Este e o ultimo contato");
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
                puts("Digite nome da pessoa:");
                fflush(stdin);
                gets(nPessoa);
                puts("Digite o E-mail");
                fflush(stdin);
                gets(nEmail);
                puts("Digite o Telefone:");
                fflush(stdin);
                gets(nTelefone);
                editarContato(list, nPessoa, nEmail, nTelefone);
            case 0:
                list = NULL;
                break;
            default:
                puts("Escolha Invalida!!!");
                break;
        }
    }

}

void liberarLista(LCONTATO **lista){
    LCONTATO *l = *lista;

    CONTATO *percorer = l->inicio;
    CONTATO *aux = NULL;
    while (percorer != NULL){
        percorer = percorer->proximo;
        aux = percorer;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}
