/*Solicite ao usuário que digite valores inteiros em quantidade indefinida. A medida em
que ele for digitando efetue a soma dos valores. Pare quando o valor que o usuário digitar
for igual a 0. Ao final, exiba o resultado.*/

#include<stdio.h>

int main () {
    int numero, somaNum;
    
    do {
        puts("Digite valores para a soma deles:");
        scanf("%d", &numero);
        somaNum += numero;
    } while (numero != 0);

    printf("A soma total foi de %d", somaNum);
    return 0;
}