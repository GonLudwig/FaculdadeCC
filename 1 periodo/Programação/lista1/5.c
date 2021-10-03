//Sabe-se que um triângulo pode ser classificado em: Isósceles, quando apresenta 2
//lados iguais e um diferente; Equilátero, quando os 3 lados são iguais; Escaleno, quando
//os 3 lados são diferentes. Desenvolva um algoritmo que dados 3 números não nulos
//representando os lados de um triângulo seja capaz de escrever a classificação do
//triângulo.

#include <stdio.h>

int main () {
    int ladoA, ladoB, ladoC;

    printf("Digite um valor inteiro:");
    scanf("%d", &ladoA);
    printf("Digite um valor inteiro:");
    scanf("%d", &ladoB);
    printf("Digite um valor inteiro:");
    scanf("%d", &ladoC);
    
    if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Com esses valores temos um triangulo :Equilatero");
        } else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) {
            printf("Com esses valores temos um triangulo :Escaleno");
        } else {
            printf("Com esses valores temos um triangulo :Isosceles");
        }
    } else {
        printf("Com esses valores nao podemos formar um triangulo!");
    }
    return 0;
}