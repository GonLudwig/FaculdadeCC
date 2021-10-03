/* Solicite do usuário um número e exiba seu valor elevado ao quadrado e ao cubo. */

#include <stdio.h>

int main () {
    int valor, elevadoQuadrado, elevadoCubo;

    printf("Informe um valor inteiro:");
    scanf("%d", &valor);

    elevadoQuadrado = valor * valor;
    elevadoCubo = valor * valor * valor;

    printf("Esse valor elevado ao Quadrado e: %d\n", elevadoQuadrado);
    printf("Esse valor elevado ao Cubo e: %d\n", elevadoCubo);
    return 0;
}