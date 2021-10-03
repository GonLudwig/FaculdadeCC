/* 06 – Crie um programa para ler o nome e o valor de uma determinada mercadoria de uma
loja. O desconto para pagamento a vista é de 10% sobre o valor total, calcule o valor a ser
pago a vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a
ser pago a vista. */

#include <stdio.h>
#include <string.h>

int main () {
    char mercadoria[60];
    float valorMerc, desconto, valorLiquido;

    puts("Qual e o nome da mercadoria?");
    fflush(stdin);
    gets(mercadoria);
    puts("Qual e o valor da mercadoria?");
    scanf("%f", &valorMerc);

    desconto = valorMerc * 0.1;
    valorLiquido = valorMerc - desconto;
    

    printf("A mercadoria %s possui o valor total de %.2f com %.2f de desconto e um valor a vista de %.2f",mercadoria, valorMerc, desconto, valorLiquido);
    return 0;
    //Por algum motivo não sei qual o fflush não resolvi meu problema no buffer.
}
