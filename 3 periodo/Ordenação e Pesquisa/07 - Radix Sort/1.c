#include <stdio.h>

int valorMaximo(int vetor[], int tamanho) {
  int maior = vetor[0];
  for (int i = 1; i < tamanho; i++)
    if (vetor[i] > maior)
      maior = vetor[i];
  return maior;
}

int main() {
    int vetor[10] = {13, 22, 55, 51, 123, 14, 54, 65 ,87, 16};
    int maiorValor;

    maiorValor = valorMaximo(vetor, 10);

    printf("%d", maiorValor);
}