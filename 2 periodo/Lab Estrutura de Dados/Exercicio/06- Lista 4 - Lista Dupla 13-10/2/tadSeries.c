#include"tadSeries.h"

struct serie {
    int codSerie;
    char titulo[100];
    int temporadas;
    int episodios;
    int epiAssistidos;
    float porcAssistido;
    struct serie *proximo;
    struct serie *anterior;
};

struct listaSerie {
    int qtdSerie;
    struct serie *inicio;
    struct serie *fim;
};

Catalogo *criarCatalogo(){
    Catalogo *lista = (Catalogo*) calloc(1, sizeof(Catalogo));

    lista->qtdSerie = 0;
    lista->inicio = NULL;
    lista->fim = NULL;

    return lista;
}

SERIE *criarSerie(int codS, char *nomeS, int tempS, int epiS) {
    SERIE *franquia = (SERIE*) calloc(1, sizeof(SERIE));

    strcpy(franquia->titulo, nomeS);
    franquia->codSerie = codS;
    franquia->temporadas = tempS;
    franquia->episodios = epiS;
    franquia->epiAssistidos = 0;
    franquia->porcAssistido = 0;
    franquia->proximo = NULL;
    franquia->anterior = NULL;

    return franquia;
}

void adicionarSerie(Catalogo *lista, int codS, char *nomeS, int tempS, int epiS){
    SERIE *franquia = criarSerie(codS, nomeS, tempS, epiS);
    franquia->anterior = lista->fim;

    if(lista->qtdSerie == 0){
        lista->inicio = franquia;
    } else {
        lista->fim->proximo = franquia;
    }

    lista->fim = franquia;
    lista->qtdSerie++;
}

void assistirSerie(SERIE *franquia, int epiAssist){
    franquia->epiAssistidos = epiAssist;
    franquia->porcAssistido = (epiAssist * 100) / franquia->episodios;
    franquia->porcAssistido = ceil(franquia->porcAssistido);

}

void escolherSerie(Catalogo *lista){
    int escolha = 1;
    int escolha2 = 1;
    int i;
    SERIE *franquia = lista->inicio;

    while(franquia != NULL){
        printf("Codigo Serie: %d\n", franquia->codSerie);
        printf("Nome Serie: %s\n", franquia->titulo);
        printf("Numero de Temporadas: %d\n", franquia->temporadas);
        printf("Numero total de episodios: %d\n", franquia->episodios);
        printf("Episodios assistidos: %d", franquia->epiAssistidos);
        printf("Porcetagem Epidios Assistidos: %.2f\n", franquia->porcAssistido);
        puts("Digite 1 - Assistir esta serie.");
        puts("Digite 2 - Proxima");
        puts("Digite 3 - Voltar");
        puts("Digite 0 - Fechar StarlingFlix");
        while (escolha != 0) {
            scanf("%d", &escolha);
            switch (escolha){
                case 1:
                    if (franquia->epiAssistidos == franquia->episodios){
                        franquia->epiAssistidos = 0;
                    }
                    for (i=franquia->epiAssistidos;i<=franquia->episodios || escolha2 != 0;){
                        printf("Voce ja assistiu %d episodeos desta serie\n", i);
                        printf("Digite 1 - Para assistir o %d episodio.\n", i+1);
                        puts("Digite 0 - Para parar de assistir:");
                        scanf("%d", &escolha2);
                        switch (escolha2) {
                            case 1:
                                i++;
                                break;
                            case 0:
                                puts("Te esperamo mais tarde!!! ;D");
                            default:
                                puts("Opcao invalida! Tente novamente!");
                                printf("Digite 1 - Para assistir o %d\n", i+1);
                                puts("Digite 0 - Para parar de assistir:");
                                break;
                        }
                    }
                    assistirSerie(franquia, i);
                    break;
                case 2:
                    franquia = franquia->proximo;
                    break;
                case 3:
                    franquia = franquia->anterior;
                    break;
                case 0:
                    puts("Obrigado pela preferencia!!!");
                    break;
                default:
                    puts("Opcao invalida! Tente novamente!");
                    puts("Digite 1 - Assistir esta serie.");
                    puts("Digite 2 - Proxima");
                    puts("Digite 3 - Voltar");
                    puts("Digite 0 - Fechar StarlingFlix");
                    break;
            }
        }
    }
}

void liberarLista(Catalogo **lista){
    Catalogo *l = *lista;

    SERIE *percorer = l->fim;
    SERIE *aux = NULL;
}