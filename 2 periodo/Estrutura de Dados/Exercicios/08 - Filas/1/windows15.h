#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct programa EXE;
typedef struct filaProgramas FEXE;

FEXE *criarFilaExe();
void adicionarExe(FEXE *fila, int qtd);
void executarFila(FEXE *fila);
void liberaFila(FEXE **fila);