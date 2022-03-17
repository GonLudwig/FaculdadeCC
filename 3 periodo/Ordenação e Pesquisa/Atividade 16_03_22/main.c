#include"atividade.h"

int main() {
    int vetor1k[10000];
    int vetor10k[100000];
    int vetor100k[1000000];

    numerosCrescente(vetor1k, 10000);
    numerosCrescente(vetor10k, 100000);
    numerosCrescente(vetor100k, 1000000);

    insertion(vetor1k, 10000);
    insertion(vetor10k, 100000);
    insertion(vetor100k, 1000000);
    printf("\n");
    selection(vetor1k, 10000);
    selection(vetor10k, 100000);
    selection(vetor100k, 1000000);
    printf("\n");
    shell(vetor1k, 10000);
    shell(vetor10k, 100000);
    shell(vetor100k, 1000000);
    printf("\n");
    bubble(vetor1k, 10000);
    bubble(vetor10k, 100000);
    bubble(vetor100k, 1000000);
    printf("\n");
    heapMax(vetor1k, 10000);
    heapMax(vetor10k, 100000);
    heapMax(vetor100k, 1000000);

    numerosDecrescente(vetor1k, 10000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 1000000);

    insertion(vetor1k, 10000);
    insertion(vetor10k, 100000);
    insertion(vetor100k, 1000000);
    printf("\n");
    selection(vetor1k, 10000);
    selection(vetor10k, 100000);
    selection(vetor100k, 1000000);
    printf("\n");
    shell(vetor1k, 10000);
    shell(vetor10k, 100000);
    shell(vetor100k, 1000000);
    printf("\n");
    bubble(vetor1k, 10000);
    bubble(vetor10k, 100000);
    bubble(vetor100k, 1000000);
    printf("\n");
    heapMax(vetor1k, 10000);
    heapMax(vetor10k, 100000);
    heapMax(vetor100k, 1000000);
    
    numerosAletorios(vetor1k, 10000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 1000000);

    insertion(vetor1k, 10000);
    insertion(vetor10k, 100000);
    insertion(vetor100k, 1000000);
    printf("\n");
    selection(vetor1k, 10000);
    selection(vetor10k, 100000);
    selection(vetor100k, 1000000);
    printf("\n");
    shell(vetor1k, 10000);
    shell(vetor10k, 100000);
    shell(vetor100k, 1000000);
    printf("\n");
    bubble(vetor1k, 10000);
    bubble(vetor10k, 100000);
    bubble(vetor100k, 1000000);
    printf("\n");
    heapMax(vetor1k, 10000);
    heapMax(vetor10k, 100000);
    heapMax(vetor100k, 1000000);
    
    return 0;
}