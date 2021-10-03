#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct postagem POST;

POST *criarPost();

void addLegenda(POST *foto, char *legenda);

void curtiFoto(POST *foto);

void compartilharFoto(POST *foto);

void comentarFoto(POST *foto);

void exibirFoto(POST *foto);

void liberarFoto(POST *foto);