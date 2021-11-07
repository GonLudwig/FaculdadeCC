#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct itensDaLista tipoItem;
typedef struct lista tipoLista;

tipoLista *criarSerie();
void adicionarEpisodio(tipoLista *lista, char *titulo);
void excluirUltimoEpisodio(tipoLista *lista);
void exibirSerie(tipoLista *lista);
void liberarLista(tipoLista **lista);