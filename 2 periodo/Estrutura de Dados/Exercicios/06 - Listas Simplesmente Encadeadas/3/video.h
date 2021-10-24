#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct video VIDEO;
typedef struct listaVideo LVIDEO;

LVIDEO *criarlista();
void adicionarVideo(LVIDEO *lista, char *nVideo);
void verVideo(LVIDEO *lista);
void liberarLista(LVIDEO **lista);