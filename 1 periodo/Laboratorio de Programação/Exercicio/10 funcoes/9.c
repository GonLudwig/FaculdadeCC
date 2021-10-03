/*09 – Crie uma função capaz de receber dois valores referentes a catetos de um triângulo
retângulo, calcule e retorne o valor da hipotenusa.*/

#include <stdio.h>
#include <math.h>

float calcHipotenusa(int cateto1,int cateto2) {
    float hipotenusa = 0, somaCatetos = 0;

    somaCatetos = (cateto1*cateto1) + (cateto2*cateto2);
    hipotenusa = sqrt(somaCatetos);

    return hipotenusa;
}

int main () {
    int cateto1, cateto2;
    float hipotenusa;
    
    puts("Digite o valor dos catetos:");
    scanf("%d", &cateto1);
    scanf("%d", &cateto2);

    hipotenusa = calcHipotenusa(cateto1, cateto2);

    printf("A hipotenusa e %.2f", hipotenusa);

    return 0;
}
