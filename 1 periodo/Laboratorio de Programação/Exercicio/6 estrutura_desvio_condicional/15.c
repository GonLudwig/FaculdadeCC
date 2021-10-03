/* A KivitsStore está com uma promoção imperdível.
Dependendo do valor da sua compra e da forma de pagamento, 
percentuais de desconto são disponibilizados. Observea tabela de desconto:
(tabela do exercicio) 
Crie um programa que receba o valor da compra de um determinado cliente e a forma de pagamento.
Exiba na tela qual o percentual de desconto que ele terá e qual o valor que ele precisará pagar.*/

#include <stdio.h>

int main() {
    float compra, pagamento;
    int escolha, desconto;

    printf("Qual valor da compra?");
    scanf("%f", &compra);
    printf("Digite 1 para avista.\nDigite 2 para aprazo.");
    scanf("%d", &escolha);

    if (escolha == 1) {
        if (compra <= 100) {
            desconto = 15;
            pagamento = compra - (compra * 0.15);
        } else if (compra > 100 && compra <= 500) {
            desconto = 20;
            pagamento = compra - (compra * 0.20);
        } else if (compra > 500 && compra <= 1000) {
            desconto = 25;
            pagamento = compra - (compra * 0.25);
        } else {
            desconto = 40;
            pagamento = compra - (compra * 0.4);
        }
    }
    if (escolha == 2) {
        if (compra <= 100) {
            desconto = 10;
            pagamento = compra - (compra * 0.1);
        } else if (compra > 100 && compra <= 500) {
            desconto = 15;
            pagamento = compra - (compra * 0.15);
        } else if (compra > 500 && compra <= 1000) {
            desconto = 20;
            pagamento = compra - (compra * 0.2);
        } else {
            desconto = 30;
            pagamento = compra - (compra * 0.3);
        }
    }

    printf("A porcentagem de desconto foi %d%%, o valor a ser pago e: %.2f", desconto, pagamento);
    return 0;
}
