/* Um funcionário recebe salário fixo e 7% de comissão sobre as vendas realizadas. Faça
um programa que receba o valor do salário fixo de um funcionário e o valor total das
vendas realizadas e exiba o valor líquido do salário recebido. Pergunte ao usuário se
deseja continuar no programa, caso sim comece o processo novamente, caso não, saia
do programa.*/

#include <stdio.h>

int main () {
    int escolha = 1;
    float salario, vendas, salarioLiq;

    while (escolha) {
        printf("Qual e o seu salario fixo?");
        scanf("%f", &salario);
        printf("Qual e o valor total das vendas?");
        scanf("%f", &vendas);
        
        salarioLiq = salario + (vendas * 0.07);

        printf("Seu salario liquido e : %.2f\n", salarioLiq);
        printf("Deseja fazer um novo calculo ?\n");
        printf("Digite 1 - sim, 0 - nao");
        scanf("%d", &escolha);
    }

    return 0;
}