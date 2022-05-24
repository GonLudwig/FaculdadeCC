#include <stdio.h>

int maior_valor(int numeros[], int tamanho_do_vetor) {
  int maior_numero = numeros[0];
  for (int i = 1; i < tamanho_do_vetor; i++)
    if (numeros[i] > maior_numero)
      maior_numero = numeros[i];
  return maior_numero;
}

int main() {
    int numeros[8] = {15, 32, 576, 531, 323, 214, 534, 65};
    int valor_maximo;

    valor_maximo = maior_valor(numeros, 8);

    printf("%d", valor_maximo);
}