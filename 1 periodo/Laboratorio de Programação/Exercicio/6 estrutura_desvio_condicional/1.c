#include <stdio.h>

int main() {
    int valorA, valorB, valorC, maior, menor, medio;
    
    printf("Digite o valor A:");
    scanf("%d", &valorA);
    printf("Digite o valor B:");
    scanf("%d", &valorB);
    printf("Digite o valor C:");
    scanf("%d", &valorC);

    maior = valorA;
    medio = valorA;
    menor = valorA;

    if (valorB > valorA && valorB > valorC) {
        maior = valorB;
    } if (valorC > valorB && valorC > valorA) {
        maior = valorC;
    }
    
    if (valorB < valorA && valorB < valorC) {
        menor = valorB;
    } if (valorC < valorB && valorC < valorA) {
        menor = valorC;
    }

    if (valorB < maior && valorB > menor) {
        medio = valorB;
    } if (valorC < maior && valorC > menor) {
        medio = valorC;
    }

    printf("Ordem crescente e %d %d %d", menor, medio, maior);
    return 0;
}
