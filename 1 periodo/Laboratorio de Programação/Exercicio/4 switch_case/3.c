/* Crie um programa capaz de oferecer para o usuário um menu com as seguintes
opções:
Tipo da compra – Digite 1 dinheiro e Digite 2 para cartão de crédito.
Caso o usuário informe 1 (pagamento em dinheiro), solicite o valor da compra e o
valor pago. Exiba o troco a ser devolvido.
Caso o usuário informe 2 (pagamento em cartão de crédito). Solicite o valor da
compra e a quantidade de parcelas. Exiba na tela o valor de cada uma das parcelas. */

#include <stdio.h>

int main () {
    int escolha, compra1, pagamento, troco, nota200, nota100, nota50, nota20, nota10, nota5, nota2, nota1, compra2, numParcelas;
    float valorParcelas;

    printf("Qual tipo de compra\n");
    printf("Digite 1 para dinheiro!\n");
    printf("Digite 2 para cartao!\n");
    scanf("%d", &escolha);

    switch (escolha) {

        case 1:
            printf("Pagamento em DINHEIRO!\n");
            printf("Qual e o valor da compra?");
            scanf("%d", &compra1);
            printf("Qual e o valor pago pelo cliente?");
            scanf("%d", &pagamento);

            troco = pagamento - compra1;
            printf("O troco e de %d\n", troco);

            if (troco >= 200) {
                nota200 = troco / 200;
                troco = troco - (nota200 * 200);
                printf("%d nota(s) de 200\n", nota200);
            }
            if (troco >= 100) {
                nota100 = troco / 100;
                printf("%d nota(s) de 100\n", nota100);
                troco = troco - (nota100 * 100);
            }
            if (troco >= 50) {
                nota50 = troco / 50;
                printf("%d nota(s) de 50\n", nota50);
                troco = troco - (nota50 * 50);
            }
            if (troco >= 20) {
                nota20 = troco / 20;
                printf("%d nota(s) de 20\n", nota20);
                troco = troco - (nota20 * 20);
            }
            if (troco >= 10) {
                nota10 = troco / 10;
                printf("%d nota(s) de 10\n", nota10);
                troco = troco - (nota10 * 10);
            }
            if (troco >= 5) {
                nota5 = troco / 5;
                printf("%d nota(s) de 5\n", nota5);
                troco = troco - (nota5 * 5);
            }
            if (troco >= 2) {
                nota2 = troco / 2;
                printf("%d nota(s) de 2\n", nota2);
                troco = troco - (nota2 * 2);
            }
            if (troco >= 1) {
                nota1 = troco / 1;
                printf("%d nota(s) de 1\n", nota1);
                troco = troco - (nota1 * 1);
            }
            break;

        case 2:
            printf("Pagamento em CARTAO\n");
            printf("Qual e o valor da compra?");
            scanf("%d", &compra2);
            printf("Qual e a quantidade de parcelas?");
            scanf("%d", &numParcelas);

            valorParcelas = compra2 / numParcelas;

            printf("A compra foi dividida em %d parcelas de %.2f", numParcelas, valorParcelas);
            break;
        
        default:
            printf("Esolha não definida!");
            break;

    }
    return 0;
}