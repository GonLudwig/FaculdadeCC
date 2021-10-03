/* João é um sujeito muito bacana. No seu comércio ele faz questão de dar o 
trocobastante correto ao seu cliente. Porém, nem sempre isso é uma tarefa fácil. 
O problema real consiste em devolver o troco com a menor quantidade de notas e moedas possíveis.
Crie um programa para que João possa informar qual o valor da compra e quanto ocliente o entregou em dinheiro.
Seu programa deverá exibir as notas e a quantidade de cada uma que precisa ser devolvida ao cliente. 
Ignore troco em moedas.*/ 

#include <stdio.h>

int main() {
    int compra, pagamento, troco, nota200, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("Qual e o valor da compra?");
    scanf("%d", &compra);
    printf("Qual e o valor pago pelo cliente?");
    scanf("%d", &pagamento);

    troco = pagamento - compra;
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
    return 0;
}
