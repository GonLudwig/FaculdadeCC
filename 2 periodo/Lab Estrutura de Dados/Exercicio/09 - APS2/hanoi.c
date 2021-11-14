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
    printf("    [ %d ]\n", torreAux->ultimo->tamanhoDisco);
    limparTorre(torreFinal);
    adicinarDiscoTorre(torreFinal, 8);
    printf("    [ %d ]\n", torreFinal->ultimo->tamanhoDisco);
    for (i=8;i >= 1; i--){
        adicinarDiscoTorre(torreInicial, i);
        printf("    [ %d ]", torreInicial->ultimo->tamanhoDisco);
    }
    puts("");
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

void exibirTorreHanoi(PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux){
    int i;
    TORRE *auxI = torreInicial->ultimo;
    TORRE *auxF = torreFinal->ultimo;
    TORRE *auxA = torreAux->ultimo;
    for (i=7;i>=1;i--){
        if (i <= torreInicial->qtdDisco){
            printf("    [ %d ]", auxI->tamanhoDisco);
        } else {
            printf("    [ | ]");
        }

        if (i <= torreAux->qtdDisco){
            printf("    [ %d ]", auxA->tamanhoDisco);
        } else {
            printf("    [ | ]");
        }

        if (i <= torreFinal->qtdDisco){
            printf("    [ %d ]", auxF->tamanhoDisco);
        } else {
            printf("    [ | ]");
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
        puts(" ");
    }   
}

void jogarTorreHanoi(FMONGE *filaMonge, PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux){
    
    int escolhaP = 1;
    int escolhaS = 1;
    MONGE *jogador = filaMonge->ultimo;

    puts("Iniciando .");
    puts("TORRE DE HANOI!!!");
    while (torreFinal->qtdDisco <= 7){
        exibirTorreHanoi(torreInicial, torreFinal, torreAux);
        printf("Monge: %s Escolha sua jogada!\n", jogador->monge);
        puts("Escolha qual torre deseja tirrar o disco.");
        if(torreInicial->qtdDisco > 0){
            puts("Digite 1 - Torre Inicial");
        }
        if(torreAux->qtdDisco > 0){
            puts("Digite 2 - Torre Auxilia");
        }
        if(torreFinal->qtdDisco > 0){
            puts("Digite 3 - Torre Final");
        }
        puts("Digite 0 - Sair.");
        scanf("%d", &escolhaP);
        puts("Escolha qual torre deseja adicionar o disco.");
        if(torreInicial->qtdDisco < 7 && escolhaP != 1){
            puts("Digite 1 - Torre Inicial");
        }
        if(torreAux->qtdDisco < 7 && escolhaP != 2){
            puts("Digite 2 - Torre Auxilia");
        }
        if(torreFinal->qtdDisco < 7 && escolhaP != 3){
            puts("Digite 3 - Torre Final");
        }
        puts("Digite 0 - Sair.");
        scanf("%d", &escolhaS);
        
        switch (escolhaP){
            case 1:
                switch (escolhaS){
                    case 2:
                        if (torreInicial->ultimo->tamanhoDisco > torreAux->ultimo->tamanhoDisco){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreInicial, torreAux);
                        }
                        break;
                    case 3:
                        if (torreInicial->ultimo->tamanhoDisco > torreFinal->ultimo->tamanhoDisco){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreInicial, torreFinal);
                            jogador->pontos += 3;
                        }
                        break;
                    case 0:
                        puts("Obrigado pela preferencia!");
                        return;
                        break;
                    default:
                        puts("Escolha Invalida!!!");
                        break;
                }
                break;
            case 2:
                switch (escolhaS){
                    case 1:
                        if (torreAux->ultimo->tamanhoDisco > torreInicial->ultimo->tamanhoDisco){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreAux, torreInicial);
                        }
                        break;
                    case 3:
                        if (torreAux->ultimo->tamanhoDisco > torreFinal->ultimo->tamanhoDisco){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreAux, torreFinal);
                            jogador->pontos += 3;
                        }
                        break;
                    case 0:
                        escolhaP = 0;
                        puts("Obrigado pela preferencia!");
                        return;
                        break;
                    default:
                        puts("Escolha Invalida!!!");
                        break;
                }
                break;
            case 3:
                switch (escolhaS){
                    case 1:
                        if (torreFinal->ultimo->tamanhoDisco > torreInicial->ultimo->tamanhoDisco){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreFinal, torreInicial);
                            jogador->pontos -= 3;
                        }
                        break;
                    case 2:
                        if (torreFinal->ultimo->tamanhoDisco > torreAux->ultimo->tamanhoDisco){
                            puts("Jogada Invalida");
                        }else {
                            transferirDisco(torreFinal, torreAux);
                            jogador->pontos -= 3;
                        }
                        break;
                    case 0:
                        puts("Obrigado pela preferencia!");
                        return;
                        break;
                    default:
                        puts("Escolha Invalida!!!");
                        break;
                }
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                return;
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

    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }
    
    free(auxLista);
    *lista = NULL;
}   