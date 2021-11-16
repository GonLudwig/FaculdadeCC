#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct programa EXE;
typedef struct filaProgramas FEXE;

FEXE *criarFilaExe();
int adicionarExe(FEXE *fila, int qtd);
int executarFila(FEXE *fila);
void liberaFila(FEXE **fila);