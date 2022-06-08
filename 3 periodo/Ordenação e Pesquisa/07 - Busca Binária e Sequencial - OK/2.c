#include <stdio.h>

int buscaSequencial(int *vetor, int busca, int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++){
        if(vetor[i] == busca)
        {
            return i;
        }
    }
    
    return -1;
}