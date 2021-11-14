#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa PACIENTE;
typedef struct filaVacinacao FPACIENTE;

FEXE *criarFilaExe();
int adicionarExe(FEXE *fila, int qtd);
int executarFila(FEXE *fila);
void liberaFila(FEXE **fila);