/*07 – Escreva uma função que recebe 3 valores reais X, Y e Z e que verifique se esses
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar
qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que
a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é
menor do que a soma do comprimento dos outros dois lados. O procedimento deve
identificar o tipo de triângulo formado observando as seguintes definições:
Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
Triângulo Isósceles: os comprimentos de 2 lados são iguais.
Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.*/

#include <stdio.h>

int testTriangle(int x,int y,int z) {

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Com esses valores temos um triangulo :Equilatero");
        } else if (x != y && x != z && y != z) {
            printf("Com esses valores temos um triangulo :Escaleno");
        } else {
            printf("Com esses valores temos um triangulo :Isosceles");
        }
    } else {
        printf("Com esses valores nao podemos formar um triangulo!");
    }
    return 0;
}

int main () {
    int ladoA, ladoB, ladoC;

    printf("Digite um valor inteiro:");
    scanf("%d", &ladoA);
    printf("Digite um valor inteiro:");
    scanf("%d", &ladoB);
    printf("Digite um valor inteiro:");
    scanf("%d", &ladoC);
    
    testTriangle(ladoA, ladoB, ladoC);

    return 0;
}