/* Crie um programa capaz de receber do usuário uma determinada letra que deve ser
a, b ou c. Exiba na tela qual a posição da letra em relação ao alfabeto: a = primeira letra,
b = segunda letra e c = terceira letra. Utilize as estruturas switch case. */

#include <stdio.h>

int main () {
    char letra;

    printf("Digite uma letra em A, B ou C:");
    scanf("%c", &letra);

    switch (letra) {
        case 'A':
        case 'a':
            printf("E a Primeira Letra do Alfabeto brasileiro.");
            break;
        case 'B':
        case 'b':
            printf("E a Segunda Letra do Alfabeto brasileiro.");
            break;
        case 'C':
        case 'c':
            printf("E a Terceira Letra do Alfabeto brasileiro.");
            break;
        default:
            printf("Letra invalida!");
            break;
    }
    return 0;
}