#include "aviao.h"
#include <stdlib.h>

int main () {
    INICIOL *lista = criarLista();

    char cidadeOri[100];
    char cidadeDest[100];

    puts("Cidade de origem:");
    fflush(stdin);
    gets(cidadeOri);
    puts("Cidade de Destino:");
    fflush(stdin);
    gets(cidadeDest); 
    inserirFinalLista(lista, cidadeOri, cidadeDest);
    puts("Cidade de origem:");
    fflush(stdin);
    gets(cidadeOri);
    puts("Cidade de Destino:");
    fflush(stdin);
    gets(cidadeDest); 
    inserirFinalLista(lista, cidadeOri, cidadeDest);
    puts("Cidade de origem:");
    fflush(stdin);
    gets(cidadeOri);
    puts("Cidade de Destino:");
    fflush(stdin);
    gets(cidadeDest); 
    inserirFinalLista(lista, cidadeOri, cidadeDest);
    exibirVoo(lista);

    liberarLista(&lista);
    return 0;
}
