/*10 – Crie um programa destinado a possibilitar o cálculo das áreas de estruturas
geométricas. Para cada estrutura geométrica, deve haver uma função específica:
a) Triangulo retangulo → receber a altura e a base do triângulo
b) Triangulo equilatero → receber a medida de um dos lados
c) Quadrado ou retângulo → receber a altura e a base*/

#include <stdio.h>

float areTriaRetangulo( int altura, int base) {
    float retornoo = (altura * base) / 2;

    return retornoo;
}

float areTriaEquilatero(int lado) {
    float retornoo = ((lado * lado) / 4) * 1.732;

    return retornoo;
}

float areaQuadrado(int altura, int base) {
    return altura * base;
}

int main () {
    int escolha, x = 0, y = 0;

    puts("Escolha qual forma geometrica deseja mediar sua area.");
    puts("1 - Triangulo retangulo - receber a altura e a base do triangulo");
    puts("2 - Triangulo equilatero - receber a medida de um dos lados");
    puts("3 - Quadrado ou retangulo - receber a altura e a base");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            puts("Informe a altura e a base do Triangulo:");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("A area do triangulo e %.2f", areTriaRetangulo(x, y));
            break;
        case 2:
            puts("Informe o lado do Triangulo:");
            scanf("%f", &x);
            printf("A area do triangulo e %.2f", areTriaEquilatero(x));
            break;
        case 3:
            puts("Infome a altura e o base do Quadrado ou Retangulo");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("A area do triangulo e %.2f", areTriaRetangulo(x, y));
            break;
        default:
            puts("Escola nao definida! Tente novamente.");
            break;
    }
    return 0;
}
