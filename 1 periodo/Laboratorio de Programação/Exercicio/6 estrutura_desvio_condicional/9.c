/* Crie um programa que receba o salário mensal de uma pessoa e informe em 
qualalíquota do imposto de renda ela deverá se encaixar. Observe a tabela abaixo.*/

#include <stdio.h>

int main() {
    float salario;

    printf("Qual e o valor bruto do seu Salario:");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        printf("A aliquota de IF e 0%% seu Salario vai ser %.2f.", salario);
    } else if (salario > 1903.99 && salario <= 2826.65) {
        salario = salario - (salario * 0.075);
        printf("A aliquota de IF e 7,5%% seu Salario vai ser %.2f.", salario);
    } else if (salario > 2826.66 && salario <= 3751.05) {
        salario = salario - (salario * 0.15);
        printf("A aliquota de IF e 15%% seu Salario vai ser %.2f.", salario);
    } else if (salario > 3751.06 && salario <= 4664.68) {
        salario = salario - (salario * 0.225);
        printf("A aliquota de IF e 22,5%% seu Salario vai ser %.2f.", salario);
    } else {
        salario = salario - (salario * 0.275);
        printf("A aliquota de IF e 27,5%% seu Salario vai ser %.2f.", salario);
    }
    return 0;
}