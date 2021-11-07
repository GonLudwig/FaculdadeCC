#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h> // ceil()

typedef struct serie SERIE;
typedef struct listaSerie Catalogo;

Catalogo *criarCatalogo();
SERIE *criarSerie(int codS, char *nomeS, int tempS, int epiS);
void adicionarSerie(Catalogo *lista, int codS, char *nomeS, int tempS, int epiS);
void escolherSerie(Catalogo *lista);
void liberarLista(Catalogo **lista);