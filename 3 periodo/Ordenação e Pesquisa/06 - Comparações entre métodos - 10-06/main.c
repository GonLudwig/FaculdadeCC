#include"metodos_ordenacao.h"

int main() {
    int vetor1k[50000];
    int vetor10k[100000];
    int vetor100k[500000];

    numerosCrescente(vetor1k, 50000);
    numerosCrescente(vetor10k, 100000);
    numerosCrescente(vetor100k, 500000);

    insertion(vetor1k, 50000);
    insertion(vetor10k, 100000);
    insertion(vetor100k, 500000);
    printf("\n");
    selection(vetor1k, 50000);
    selection(vetor10k, 100000);
    selection(vetor100k, 500000);
    printf("\n");
    shell(vetor1k, 50000);
    shell(vetor10k, 100000);
    shell(vetor100k, 500000);
    printf("\n");
    bubble(vetor1k, 50000);
    bubble(vetor10k, 100000);
    bubble(vetor100k, 500000);
    printf("\n");
    heapMax(vetor1k, 50000);
    heapMax(vetor10k, 100000);
    heapMax(vetor100k, 500000);
    printf("\n");
    puts("Array Decrescente");
    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);

    insertion(vetor1k, 50000);
    insertion(vetor10k, 100000);
    insertion(vetor100k, 500000);
    printf("\n");
    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);
    selection(vetor1k, 50000);
    selection(vetor10k, 100000);
    selection(vetor100k, 500000);
    printf("\n");
    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);
    shell(vetor1k, 50000);
    shell(vetor10k, 100000);
    shell(vetor100k, 500000);
    printf("\n");
    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);
    bubble(vetor1k, 50000);
    bubble(vetor10k, 100000);
    bubble(vetor100k, 500000);
    printf("\n");
    numerosDecrescente(vetor1k, 50000);
    numerosDecrescente(vetor10k, 100000);
    numerosDecrescente(vetor100k, 500000);
    heapMax(vetor1k, 50000);
    heapMax(vetor10k, 100000);
    heapMax(vetor100k, 500000);
    printf("\n");
    puts("Array Aleatorio");
    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);

    insertion(vetor1k, 50000);
    
    insertion(vetor10k, 100000);
    insertion(vetor100k, 500000);
    printf("\n");
    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);
    selection(vetor1k, 50000);
    selection(vetor10k, 100000);
    selection(vetor100k, 500000);
    printf("\n");
    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);
    shell(vetor1k, 50000);
    shell(vetor10k, 100000);
    shell(vetor100k, 500000);
    printf("\n");
    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);
    bubble(vetor1k, 50000);
    bubble(vetor10k, 100000);
    bubble(vetor100k, 500000);
    printf("\n");
    numerosAletorios(vetor1k, 50000);
    numerosAletorios(vetor10k, 100000);
    numerosAletorios(vetor100k, 500000);
    heapMax(vetor1k, 50000);
    heapMax(vetor10k, 100000);
    heapMax(vetor100k, 500000);

    return 0;
}