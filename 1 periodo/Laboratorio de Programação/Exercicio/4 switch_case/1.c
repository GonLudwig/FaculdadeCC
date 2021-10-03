/* Faça um programa que informe o mês de acordo com o número informado pelo usuário.
(Exemplo: Entrada: 4. Saída: Abril). */

#include <stdio.h>

int main() {
    int mes;

    printf("Informe o mes de acordo com seu numero:");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("Janeiro!");
            break;
        case 2:
            printf("fevereiro!");
            break;
        case 3:
            printf("Março!");
            break;
        case 4:
            printf("Abril!");
            break;
        case 5:
            printf("Maio!");
            break;
        case 6:
            printf("Junho!");
            break;
        case 7:
            printf("Julho!");
            break;
        case 8:
            printf("Agosto!");
            break;
        case 9:
            printf("Setembro!");
            break;
        case 10:
            printf("Outubro!");
            break;
        case 11:
            printf("Novembro!");
            break;
        case 12:
            printf("Dezembro!");
            break;
        default:
            printf("Valor de mes invalido");
            break;
    }
    return 0;
}