#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct endereco CEP;
typedef struct listaEndereco LENDERECO;

LENDERECO *criarlista();
void adicionarCEP(LENDERECO *lista, char *nRua, char *nBairro, char *nComplemento, int num);
void verCEPs(LENDERECO *lista);
void liberarLista(LENDERECO **lista);