#include <stdio.h>
#include <math.h>

int quantidadeDigitos(int numero, int posicao) {
    int digito;
    int posicaoNum;
    int potencia;
    int contador;
  
    posicaoNum = 1;
    contador = 0;
    

    while (contador != posicao) {
        posicaoNum = posicaoNum * 10;
        contador = contador + 1;
    }

    if(posicao == 0){
        posicaoNum = 1;
    }
    
    digito = (numero / posicaoNum) % 10;


    return digito;
}

int main() {
    int numero = 1243;
    int posicao;

    posicao = quantidadeDigitos(numero, 5);

    printf("%d \n", posicao);
    
    return 0;
}