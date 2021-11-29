#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct livro LIVRO;
typedef struct pilhaLivro PLIVRO;

PLIVRO *pilhaLivro();
int adicionarLivro(PLIVRO *pilhaLivro, char *nome);
int desepilharLivro(PLIVRO *pilhaLivro);
void liberarPilha(PLIVRO **pilha);