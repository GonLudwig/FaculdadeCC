#include<stdio.h>
#include<stdlib.h>

typedef struct listaLoteria ListLoteria;

ListLoteria *criarMegaSena();

void sortearNumeros(ListLoteria *mega);

void exibirSemanaMes(ListLoteria *mega, int semana);

void exibirMes(ListLoteria *mega);

void liberarMega(ListLoteria *mega);
