#include"metodos_ordenacao.h"

int main() {
    int vetor1k[50000];
    int vetor10k[100000];
    int vetor100k[500000];

    numerosCrescente(vetor1k, 50000);
    numerosCrescente(vetor10k, 100000);
    numerosCrescente(vetor100k, 500000);

    mergeSortComparacao(vetor1k, 50000);
    mergeSortComparacao(vetor10k, 100000);
    mergeSortComparacao(vetor100k, 500000);
    printf("\n");
    radixSortComparacao(vetor1k, 50000);
    radixSortComparacao(vetor10k, 100000);
    radixSortComparacao(vetor100k, 500000);
    printf("\n");
    quickSortComparacao(vetor1k, 50000);
    quickSortComparacao(vetor10k, 100000);
    quickSortComparacao(vetor100k, 500000);
    printf("\n");

    puts("Array Decrescente");
    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);

    mergeSortComparacao(vetor1k, 50000);
    mergeSortComparacao(vetor10k, 100000);
    mergeSortComparacao(vetor100k, 500000);
    printf("\n");
    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);

    radixSortComparacao(vetor1k, 50000);
    radixSortComparacao(vetor10k, 100000);
    radixSortComparacao(vetor100k, 500000);
    printf("\n");

    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);
    quickSortComparacao(vetor1k, 50000);
    quickSortComparacao(vetor10k, 100000);
    quickSortComparacao(vetor100k, 500000);
    printf("\n");

    puts("Array Aleatorio");
    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);

    mergeSortComparacao(vetor1k, 50000);
    mergeSortComparacao(vetor10k, 100000);
    mergeSortComparacao(vetor100k, 500000);
    printf("\n");

    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);
    radixSortComparacao(vetor1k, 50000);
    radixSortComparacao(vetor10k, 100000);
    radixSortComparacao(vetor100k, 500000);
    printf("\n");

    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);
    quickSortComparacao(vetor1k, 50000);
    quickSortComparacao(vetor10k, 100000);
    quickSortComparacao(vetor100k, 500000);
    printf("\n");

    return 0;
}