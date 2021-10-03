/* Faça um programa que leia os coeficientes de uma equação de segundo grau e
calcule suas raízes. Isso é, leia os valores das variáveis a, b e c da seguinte equação e
ao final exiba o valor de x’ e x’’ */

#include <stdio.h>
#include <math.h>

int main () {
    float a, b, c, delta, x1, x2;

    printf("Infome o valor de A:");
    scanf("%f", &a);
    printf("Infome o valor de B:");
    scanf("%f", &b);
    printf("Infome o valor de C:");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);
    
    if (delta < 0) {
        printf("Não sera resolvido!");
    } else {
        x1 =  ((-1* b) - (sqrt(delta)) / (2*a));
        x2 =  ((-1* b) + (sqrt(delta)) / (2*a));

        printf("Valor de x' e:%.2f\n", x1);
        printf("valor de x e:%.2f\n", x2);
    }
}
