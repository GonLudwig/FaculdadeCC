#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct veiculo CARRO;
typedef struct filaVeiculo FCARRO;

FCARRO *criarFilaCarro();
int adicionarCarro(FCARRO *fila, char *placa);
void abrirSemaforo(FCARRO *fila);
void liberaFila(FCARRO **fila);