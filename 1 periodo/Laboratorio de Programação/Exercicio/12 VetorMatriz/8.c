/*08 – Crie um programa capaz de solicitar ao usuário o preenchimento de uma matriz de
números inteiros de 3x3 posições. Faça com que a soma de todas as linhas seja igual a 9.
Isso é, após o usuário informar os valores de uma linha, faça-o repetir esse processo
enquanto a soma desta linha não for igual a 9. Ao final, exiba a matriz organizada para
possibilitar a conferência.*/

#include <stdio.h>

int main () {
    int matrizNum[3][3], sunNine = 0, i, j;

    puts("Preencha uma tabela de 3 linhas por 3 colunas\n");
    puts("CUIDADO!!!O somatorio de cada numero da linha deve ser 9.");
	for(i=0; i<3; i++){
        sunNine = 0;
    	for(j=0; j<3; j++){
        	printf("Digite o numero da Linha %d na Coluna %d\n", i+1 ,j+1);
        	scanf("%d", &matrizNum[i][j]);
            sunNine += matrizNum[i][j];
    	}
        if (sunNine != 9){
            printf("O somatoriao deu %d, tente novamente!\n", sunNine);
            puts("CUIDADO!!!O somatorio de cada numero da linha deve ser 9.");
            i--;
        }
	}

    puts("Tabela");
	for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
        	printf("%d ", matrizNum[i][j]);
    	}
    	puts("");
	}
}
