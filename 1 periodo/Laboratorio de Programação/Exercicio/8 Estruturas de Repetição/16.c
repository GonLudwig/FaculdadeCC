
/*Solicite ao usuário que digite vários números, não se sabe ao certo quantos. Crie
uma soma dos números pares e ímpares digitados. Quando o usuário informar o valor
zero, um algum valor negativo, pare de efetuar as somas e exiba a soma dos pares e
ímpares.*/

#include<stdio.h>

int main () {
    int num = 0, numOdd = 0, numPar = 0;

    puts("Digite varios numeros:");

    do {
        scanf("%d", &num);
        if (num%2 && num > 0) {
            numOdd += num;
        } else {
            numPar += num;
        }
        puts("Se quiser para de acrescentar numeros digite 0 ou negativos");
    } while (num > 0);

    printf("A soma dos numeros pares e %d\n", numPar);
    printf("A soma dos numeros impares e %d\n", numOdd);
    return 0;
}
