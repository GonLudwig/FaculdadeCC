#include"video.h"

struct video {
    int cod;
    char nome[100];
    int visualizacao;
    struct video *proximo;
};

struct listaVideo {
    int qtd;
    struct video *inicio;
    struct video *fim;
};

LVIDEO *criarlista(){
    LVIDEO *lista = (LVIDEO*) calloc(1, sizeof(LVIDEO));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

VIDEO *criarVideo(char *nVideo){
    VIDEO *vid = (VIDEO*) calloc(1, sizeof(VIDEO));

    strcpy(vid->nome, nVideo);
    vid->visualizacao = 0;
    vid->proximo = NULL;
    vid->cod = 0;

    return vid;
}

void adicionarVideo(LVIDEO *lista, char *nVideo){
    VIDEO *vid = criarVideo(nVideo);

    if(lista->inicio == NULL){
        lista->inicio = vid;
    }else{
        lista->fim->proximo = vid;
    }
    lista->fim = vid;
    lista->qtd++;
    vid->cod = lista->qtd;
}

void verVideo(LVIDEO *lista){
    VIDEO *list = lista->inicio;
    int escolha;


    while (list != NULL){
        printf("Nome: %s\n", list->nome);
        printf("Visualizacoes: %d\n", list->visualizacao);
        puts("Digite 1 - Ver o proximo video");
        puts("Digite 2 - Assistir este video");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                if(list == lista->fim){
                    puts("Este e o ultimo video");
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
                list->visualizacao++;
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

void liberarLista(LVIDEO **lista){
    LVIDEO *l = *lista;

    VIDEO *percorer = l->inicio;
    VIDEO *aux = NULL;
    while (percorer != NULL){
        percorer = percorer->proximo;
        aux = percorer;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}
