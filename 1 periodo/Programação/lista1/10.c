/*  O preço ao consumidor de um carro novo é a soma do custo de fábrica com a
porcentagem do distribuidor e com os impostos, ambos aplicados ao custo de fábrica. As
porcentagens encontram-se na tabela a seguir. Faça um programa que receba o custo de
fábrica de um carro e mostre o preço ao consumidor.
(imagem no exercicio) */

#include <stdio.h>

int main () {
    float custoFabri, precoConsu;

    printf("Qual e o custo de fabricacao do veiculo?");
    scanf("%f", &custoFabri);
    
    if (custoFabri > 25000) {
        precoConsu = custoFabri + (custoFabri * 0.15) + (custoFabri * 0.2);
    } else if (custoFabri >= 18000 && custoFabri <= 25000) {
        precoConsu = custoFabri + (custoFabri * 0.10) + (custoFabri * 0.15);
    } else {
        precoConsu = custoFabri + (custoFabri * 0.05);
    }

    printf("O preco do veiculo e: %.2f", precoConsu);
    return 0;
}