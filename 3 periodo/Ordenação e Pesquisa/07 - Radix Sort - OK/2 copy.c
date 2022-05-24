#include <stdio.h>

int numeros_de_digitos(int numero) {
    int quantidade_de_digitos = 0;
    for (int posicao = 1; numero / posicao > 0; posicao *= 10){
        (numero / posicao) % 10;
        quantidade_de_digitos++;

    }

    return quantidade_de_digitos;
}

int main() {
    int numero = 2135;
    int quantidade_de_digitos;

    quantidade_de_digitos = numeros_de_digitos(numero);

    printf("%d \n", quantidade_de_digitos);
}