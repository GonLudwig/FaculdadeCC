#include "hanoi.h"

struct pessoa {
    int qtd;
    char monge[100];
    int pontos;
    struct pessoa *proximo;
    struct pessoa *anterior;
};

struct filaPessoa {
    int qtdFila;
    struct pessoa *primeiro;
    struct pessoa *ultimo;
};

struct disco {
    int tamanhoDisco;
    struct disco *proximo;
    struct disco *anterior;
};

struct pilhaDisco {
    int qtdDisco;
    struct disco *primeiro;
    struct disco *ultimo;
};

MONGE *criarMonge(int num, char *nome){
    MONGE *pessoa = (MONGE*) calloc(1, sizeof(MONGE));

    pessoa->qtd = num;
    strcpy(pessoa->monge, nome);
    pessoa->pontos = 0;
    pessoa->proximo = NULL;
    pessoa->anterior = NULL;

    return pessoa;
}

FMONGE *criarFilaMonge(){
    FMONGE *fila = (FMONGE*) calloc(1, sizeof(FMONGE));

    fila->qtdFila = 0;
    fila->primeiro = NULL;
    fila->ultimo = NULL;

    return fila;
}

TORRE *criarTorre(int tamanho){
    TORRE *disco = (TORRE*) calloc(1, sizeof(TORRE));

    disco->tamanhoDisco = tamanho;
    disco->proximo = NULL;
    disco->anterior = NULL;

    return disco;
}

PTORRE *criarTorreHanoi(){
    PTORRE *pilha = (PTORRE*) calloc(1, sizeof(PTORRE));

    pilha->qtdDisco = -1;
    pilha->primeiro = NULL;
    pilha->ultimo = NULL;

    return pilha;
}

void adicionarMonge(FMONGE *fila, char *nome){
    fila->qtdFila++;
    MONGE *pessoa = criarMonge(fila->qtdFila, nome);
    
    if (fila->primeiro == NULL){
        fila->ultimo = pessoa;
    } else {
        pessoa->proximo = fila->primeiro; 
        fila->primeiro->anterior = pessoa;
        pessoa->anterior = fila->ultimo;
        fila->ultimo->proximo = pessoa;
    }

    fila->primeiro = pessoa;
}

void limparTorre(PTORRE *tor){
    TORRE *aux = NULL;
    TORRE *percorer = tor->primeiro;

    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }
    tor->qtdDisco = -1;
}

void adicinarDiscoTorre(PTORRE *tor, int nunDisco) {
    TORRE *disco = criarTorre(nunDisco);

    if(tor->primeiro == NULL){
        tor->primeiro = disco;
    } else {
        disco->anterior = tor->ultimo;
        tor->ultimo->proximo = disco;
    }
    tor->ultimo = disco;
    tor->qtdDisco++;
}

void iniciarTorreHanoi(PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux){
    int i;

    limparTorre(torreAux);
    adicinarDiscoTorre(torreAux, 8);
    limparTorre(torreFinal);
    adicinarDiscoTorre(torreFinal, 8);
    for (i=8;i <= 1; i--){
        adicinarDiscoTorre(torreInicial, i);
    }
}

int removerDiscoTorre(PTORRE *tor){
    int numDisco = tor->ultimo->tamanhoDisco;
    TORRE *disco = tor->ultimo;
    
    tor->ultimo = tor->ultimo->anterior;
    tor->ultimo->proximo = NULL;
    free(disco);
    tor->qtdDisco--;

    return numDisco;
}

void transferirDisco(PTORRE *torreRetirar, PTORRE *torreInserir) {
    int disco;

    disco = removerDiscoTorre(torreRetirar);
    adicinarDiscoTorre(torreInserir, disco);
}

void exibirTorreHanoi(PTORRE *torreInicial, int *numI, PTORRE *torreFinal, int *numF, PTORRE *torreAux, int *numA){
    int i;
    *numI = torreInicial->ultimo->tamanhoDisco;
    *numF = torreFinal->ultimo->tamanhoDisco;
    *numA = torreAux->ultimo->tamanhoDisco;
    TORRE *auxI = torreInicial->ultimo;
    TORRE *auxF = torreFinal->ultimo;
    TORRE *auxA = torreAux->ultimo;
    for (i=7;i>=1;i--){
        if (i > torreInicial->qtdDisco){
            printf("    [ | ]");
        } else {
            printf("    [ %d ]", auxI->tamanhoDisco);
        }

        if (i > torreAux->qtdDisco){
            printf("    [ | ]");
        } else {
            printf("    [ %d ]", auxA->tamanhoDisco);
        }

        if (i > torreFinal->qtdDisco){
            printf("    [ | ]");
        } else {
            printf("    [ %d ]", auxF->tamanhoDisco);
        }

        if (i <= torreAux->qtdDisco){
            auxA = auxA->anterior;
        }

        if (i <= torreInicial->qtdDisco){
            auxI = auxI->anterior;
        }

        if (i <= torreFinal->qtdDisco){
            auxF = auxF->anterior;
        }
    }   
}

void jogarTorreHanoi(FMONGE *filaMonge, PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux){
    
    int ultI, ultF, ultA, escolhaP, escolhaS;
    MONGE *jogador = filaMonge->ultimo;

    puts("Iniciando .");
    puts("TORRE DE HANOI!!!");
    while (torreFinal->qtdDisco != 7 || escolhaP == 0){
        exibirTorreHanoi(torreInicial, &ultI, torreFinal, &ultF, torreAux, &ultA);
        printf("Monge: %s. Escolha sua jogada!", jogador->monge);
        puts("Escolha qual torre deseja tirrar o disco.");
        if(ultI > 0){
            puts("Digite 1 - Torre Inicial");
        }
        if(ultA > 0){
            puts("Digite 2 - Torre Auxilia");
        }
        if(ultF > 0){
            puts("Digite 3 - Torre Final");
        }
        puts("Digite 0 - Sair.");
        scanf("%d", &escolhaP);
        puts("Escolha qual torre deseja adicionar o disco.");
        if(ultI < 7 && escolhaP != 1){
            puts("Digite 1 - Torre Inicial");
        }
        if(ultA < 7 && escolhaP != 2){
            puts("Digite 2 - Torre Auxilia");
        }
        if(ultF < 7 && escolhaP != 3){
            puts("Digite 3 - Torre Final");
        }
        puts("Digite 0 - Sair.");
        scanf("%d", &escolhaS);
        
        switch (escolhaP){
            case 1:
                switch (escolhaS){
                    case 2:
                        if (ultI > ultA){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreInicial, torreAux);
                        }
                        break;
                    case 3:
                        if (ultI > ultF){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreInicial, torreFinal);
                            jogador->pontos += 3;
                        }
                        break;
                    default:
                        puts("Escolha Invalida!!!");
                        break;
                }
                break;
            case 2:
                switch (escolhaS){
                    case 1:
                        if (ultA > ultI){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreAux, torreInicial);
                        }
                        break;
                    case 3:
                        if (ultA > ultF){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreAux, torreFinal);
                            jogador->pontos += 3;
                        }
                        break;
                    default:
                        puts("Escolha Invalida!!!");
                        break;
                }
                break;
            case 3:
                switch (escolhaS){
                    case 1:
                        if (ultF > ultI){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreFinal, torreInicial);
                            jogador->pontos -= 3;
                        }
                        break;
                    case 2:
                        if (ultF > ultA){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreFinal, torreAux);
                            jogador->pontos -= 3;
                        }
                        break;
                    case 0:
                        escolhaP = 0;
                        puts("Obrigado pela preferencia!");
                        break;
                    default:
                        puts("Escolha Invalida!!!");
                        break;
                }
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Escolha Invalida!!!");
                break;
        }

        jogador = jogador->anterior;
    }
    
}

void liberarTorre(PTORRE **lista){
    PTORRE *l = *lista;

    TORRE *percorer = l->primeiro;
    TORRE *aux = NULL;
    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}

void liberarFila(FMONGE **lista){
    FMONGE *auxLista = *lista;
    MONGE *percorer = auxLista->primeiro;
    MONGE *aux = NULL;
    int i = 0;
    while (percorer != NULL && i< auxLista->qtdFila){
        aux = percorer;
        if(auxLista->ultimo == auxLista->primeiro){
            auxLista->primeiro = NULL;
            auxLista->ultimo = NULL;
            free(aux);
        } else {
            percorer = percorer->proximo;
            free(aux);
        }
    }
    
    free(auxLista);
    *lista = NULL;
}   