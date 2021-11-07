#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct processo PROSS;
typedef struct filaProcesso FPROSS;

FPROSS *criarFilaProcesso();
void adicionarFila(FPROSS *fila, char *name, int idPross);
void executarProcesso(FPROSS *fila);
void exibirFila(FPROSS *fila);
void liberarFila(FPROSS **lista);