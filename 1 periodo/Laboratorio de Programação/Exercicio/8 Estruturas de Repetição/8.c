/* Faça um programa em C para exibir a tabuada (de multiplicação) de 0 a 9.*/

#include<stdio.h>

int main () {
    int i, numTabela, resultadoTabela;

    puts("Digite um numero para saber sua tabuada:");
    scanf("%d", &numTabela);

    for (i = 0;i < 10; i++){
        resultadoTabela = i * numTabela;
        printf("%d * %d = %d\n", i, numTabela, resultadoTabela);
    }

    return 0;
}
