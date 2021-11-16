#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa PACIENTE;
typedef struct filaVacinacao FPACIENTE;

FPACIENTE *criarFilaPacientes();
int adicionarPaciente(FPACIENTE *fila, char *nome, int ano);
void atenderPacientes(FPACIENTE *fila);
void liberaFila(FPACIENTE **fila);