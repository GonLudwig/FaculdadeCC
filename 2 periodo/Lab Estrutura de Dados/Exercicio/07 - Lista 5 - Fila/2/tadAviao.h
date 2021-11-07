#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct voo VOO;
typedef struct filaVoo FVOO;

FVOO *criarFilaDecolagem();
void adicionarFila(FVOO *fila, char *name, int idVoo);
void autorizarDecolagem(FVOO *fila);
void exibirFila(FVOO *fila);
void liberarFila(FVOO **lista);