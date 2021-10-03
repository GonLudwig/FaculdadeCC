/* Faça um programa que receba dois números e execute uma das operações listadas a
seguir, de acordo com a escolha do usuário. Se for digitada uma opção inválida, mostre
mensagem de erro e termine a execução do programa. As opções são:
1. O primeiro número elevado ao segundo número;
2. Raiz quadrada de cada um dos números;
3. Raiz cúbica de cada um dos números.*/

#include <stdio.h>
#include <math.h>

int main () {
    float valor1, valor2, elevado = 1, raiz1, raiz2, cub1, cub2;
    int escolha, e;

    printf("Informe um valor:");
    scanf("%f", &valor1);
    printf("Informe um valor:");
    scanf("%f", &valor2);
    printf("1. O primeiro número elevado ao segundo número\n");
    printf("2. Raiz quadrada de cada um dos números\n");
    printf("3. Raiz cúbica de cada um dos números.\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            for (e = valor2; e > 0; e--) {
                elevado = elevado * valor1;
            }
            printf("%.2f elevado a %.2f e: %.2f", valor1, valor2, elevado);
            break;
        case 2:
            raiz1 = sqrt(valor1);
            raiz2 = sqrt(valor2);
            printf("Raiz quadrade de %.2f e %.2f\n", valor1, raiz1);
            printf("Raiz quadrade de %.2f e %.2f\n", valor2, raiz2);
            break;
        case 3:
            cub1 = cbrt(valor1);
            cub2 = cbrt(valor2);
            printf("Raiz cubica de %.2f e %.2f\n", valor1, cub1);
            printf("Raiz cubica de %.2f e %.2f\n", valor2, cub2);
            break;
        default:
            printf("Escolha indefinida!");
            break;
    }
    return 0;
}