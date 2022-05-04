#include <stdio.h>

int quantidadeDigitos(int numero) {
    int digitos = 0;
    for (int place = 1; numero / place > 0; place *= 10){
        (numero / place) % 10;
        digitos++;

    }

    return digitos;
}

int main() {
    int numero = 1243;
    int quantidade;

    quantidade = quantidadeDigitos(numero);

    printf("%d \n", quantidade);
}