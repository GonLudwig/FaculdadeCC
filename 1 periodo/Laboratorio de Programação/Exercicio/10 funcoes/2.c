/*02 – Crie um programa com uma função capaz de receber um número inteiro e exibir na
tela o mês referente ao número.*/
#include <stdio.h>

int mes(int number) {

    switch (number) {
        case 1:
            puts("Janeiro");
            break;
        case 2:
            puts("Fevereiro");
            break;
        case 3:
            puts("Março");
            break;
        case 4:
            puts("Abril");
            break;
        case 5:
            puts("Maio");
            break;
        case 6:
            puts("Junho");
            break;
        case 7:
            puts("Julho");
            break;
        case 8:
            puts("Agosto");
            break;
        case 9:
            puts("Setembro");
            break;
        case 10:
            puts("Outubro");
            break;
        case 11:
            puts("Novembro");
            break;
        case 12:
            puts("Dezembro");
            break;
        default:
            puts("Numero invalido.");
            break;
    }
}

int main () {
    int month;

    puts("Digite o numero para saber seu mês:");
    scanf("%d", &month);

    mes(month);

    return 0;
}