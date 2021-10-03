/*  Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo
médio no último ano. Faça um programa que receba o saldo médio de um cliente e
calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor
do crédito. 
SALDO MÉDIO VALOR DO CRÉDITO
Acima de R$ 400,00 30% do saldo médio
Menor ou igual a R$ 400,00 e maior que R$ 300,00 25% do saldo médio
Menor ou igual a R$ 300,00 e maior que R$ 200,00 20% do saldo médio
Até R$ 200,00 10% do saldo médio */

#include <stdio.h>

int main () {
    float saldoMedio, valorCredio;

    printf("Qual seu saldo medio do ano passado?");
    scanf("%f", &saldoMedio);

    if (saldoMedio > 400) {
        valorCredio = saldoMedio * 0.3;
    }else if (saldoMedio <= 400 && saldoMedio > 300) {
        valorCredio = saldoMedio * 0.25;
    }else if (saldoMedio <= 300 && saldoMedio > 200) {
        valorCredio = saldoMedio * 0.2;
    } else {
        valorCredio = saldoMedio * 0.1;
    }

    printf("O seu saldo medio:%.2f, seu valor de credito:%.2f", saldoMedio, valorCredio);

    return 0;
}