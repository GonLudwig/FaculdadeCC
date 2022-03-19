#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct estadosCovid ESTADOCOVID;
typedef struct listaEstadoCovid LESTADOCOVID;

LESTADOCOVID *criarListaEstado();
void adicionarEstado(LESTADOCOVID *lista, int casos, int mortes, char *nomeEstado, int regiao);
void imprimirLista(LESTADOCOVID *lista);
void ordenarCasosConfirmados(LESTADOCOVID *lista);
void ordenarTotalMortes(LESTADOCOVID *lista);
void ordenarPorEstado(LESTADOCOVID *lista);
void ordenarPorEstadoRegiao(LESTADOCOVID *lista);
void liberarLista(LESTADOCOVID **lista);