/* Faça um programa que informe o mês de acordo 
com o número informado pelousuário. (Exemplo: Entrada: 4. Saída: Abril). */

#include <stdio.h>

int main() {
    int mes;

    printf("Digite um numero para descobrir seu mes:");
    scanf("%d", &mes);

    if (mes == 1){
        printf(" Numero %d e referente a Janeiro", mes);
    }else if (mes == 2){
        printf(" Numero %d e referente a Fevereiro", mes);
    }else if (mes == 3){
        printf(" Numero %d e referente a Março", mes);
    }else if (mes == 4){
        printf(" Numero %d e referente a Abril", mes);
    }else if (mes == 5){
        printf(" Numero %d e referente a Maio", mes);
    }else if (mes == 6){
        printf(" Numero %d e referente a Junho", mes);
    }else if (mes == 7){
        printf(" Numero %d e referente a Julho", mes);
    }else if (mes == 8){
        printf(" Numero %d e referente a Agosto", mes);
    }else if (mes == 9){
        printf(" Numero %d e referente a Setembro", mes);
    }else if (mes == 10){
        printf(" Numero %d e referente a Outubro", mes);
    }else if (mes == 11){
        printf(" Numero %d e referente a Novembro", mes);
    }else if (mes == 12){
        printf(" Numero %d e referente a Dezembro", mes);
    } else {
        printf("Nao e um valor valido para um mes.");
    }

    return 0;
}
