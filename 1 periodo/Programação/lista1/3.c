#include <stdio.h>

int main() {
    int valor1, valor2, valor3, maior, menor;

    printf("Digite um valor inteiro:");
    scanf("%d", &valor1);
    printf("Digite um valor inteiro:");
    scanf("%d", &valor2);
    printf("Digite um valor inteiro:");
    scanf("%d", &valor3);

    maior = valor1;
    menor = valor1;

    if (valor2 > valor1) {
        maior = valor2;
    } if (valor3 > valor2) {
        maior = valor3;
    }
    
    if (valor2 < valor1) {
        menor = valor2;
    } if (valor3 < valor2) {
        menor = valor3;
    }
    printf("Maior numero e %d e o menor e %d", maior, menor);

    return 0;
}