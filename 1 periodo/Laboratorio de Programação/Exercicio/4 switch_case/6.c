/* Crie um programa que peça ao usuário que informe dois valores reais. Peça também
que informe um símbolo (+,-,/,*), de acordo com o símbolo informado, execute a operação
adequada. Mostre o resultado ao final. */ 

#include <stdio.h>

int main () {
    float num1, num2;
    char operacao;

    printf("Informe dois valores e sua operacao desejada\n");
    printf("Informe o primeiro valor:");
    scanf("%f", &num1);
    printf("Informe o segundo valor:");
    scanf("%f", &num2);
    printf("Informe a operacao desejada (+,-,/,*)");
    scanf("%s", &operacao);

    switch (operacao) {
        case '+':
            printf("A soma dos valores e:%.2f", num1 + num2);
            break;
        case '-':
            printf("A subtração dos valores e:%.2f", num1 - num2);
            break;
        case '/':
            printf("A divisao dos valores e:%.2f", num1 / num2);
            break;
        case '*':
            printf("A multiplicacao dos valores e:%.2f", num1 * num2);
            break;
        default:
            printf("Operador invalido!");
            break;
    }
    return 0;
}