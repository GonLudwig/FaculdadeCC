/*06 – Crie uma matriz de números inteiros de tamanho 4x4. Preencha-a e ao final exiba-a
organizada como uma tabela*/
#include <stdio.h>

int main() {
	int matrizNum[4][4], i, j;

	puts("Preencha uma tabela de 4 linhas por 4 colunas");
	for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
        	printf("Digite o numero da Linha %d na Coluna %d\n", i+1 ,j+1);
        	scanf("%d", &matrizNum[i][j]);
    	}
	}
	puts("Tabela");
	for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
        	printf("%d ",matrizNum[i][j]);
    	}
    	puts("");
	}
    
	return 0;
}
