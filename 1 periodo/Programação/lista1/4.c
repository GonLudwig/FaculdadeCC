#include <stdio.h>

int main() {
    int ladoA, ladoB, ladoC;

    printf("Digite um valor inteiro:");
    scanf("%d", &ladoA);
    printf("Digite um valor inteiro:");
    scanf("%d", &ladoB);
    printf("Digite um valor inteiro:");
    scanf("%d", &ladoC);

    if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
        printf("Com esses valores podemos formar um triangulo!");
    } else {
        printf("Com esses valores nao podemos formar um triangulo!");
    }
    return 0;
}
