#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct pessoa MONGE;
typedef struct disco TORRE;
typedef struct filaPessoa FMONGE;
typedef struct pilhaDisco PTORRE;

FMONGE *criarFilaMonge();
PTORRE *criarTorreHanoi();
void adicionarMonge(FMONGE *fila, char *nome);
void iniciarTorreHanoi(PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux);
void exibirTorreHanoi(PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux);
void jogarTorreHanoi(FMONGE *filaMonge, PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux);
void liberarTorre(PTORRE **lista);
void liberarFila(FMONGE **lista);