/*04 – Crie função capaz de calcular e retornar o fatorial de um número inteiro recebido por
parâmetro.*/

#include <stdio.h>

int fatorial(int numero) {
    int i, fatorial;
    
    printf("%d! = ", numero);
    for (i = numero; i >= 1; i--){
        fatorial *= i;
        printf("%d*", i);
    }
    printf(" = %d", fatorial);
}

int main () {
    int numero;

    puts("Digite um numero:");
    scanf("%d", &numero);

    fatorial(numero);
}