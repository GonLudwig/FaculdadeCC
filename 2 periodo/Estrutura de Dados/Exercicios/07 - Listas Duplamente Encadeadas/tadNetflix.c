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

