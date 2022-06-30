#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<locale.h>

typedef struct Pessoa Pessoa;

typedef struct TrieNode TrieNode;

void removeParteDaString(char *string, int inicio);
Pessoa *criarPessoa(char *nome, char *cpf, char *endereco, char *telefone, char *observacoes);
void criarArvoreTrie(TrieNode **arvTrie, char *posicao, Pessoa *pessoa);
void printArvore(TrieNode *arvTrie, char *posicao);
void printArvoreCom(TrieNode *arvTrie);