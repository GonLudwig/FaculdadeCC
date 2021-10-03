/*10 – Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor*/
#include <stdio.h>

int main () {
    int i, j, maior = 0, matrizNum[4][4];

    puts("Preencha uma tabela de 4 linhas por 4 colunas");
	for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
        	printf("Digite o numero da Linha %d na Coluna %d\n", i+1 ,j+1);
        	scanf("%d", &matrizNum[i][j]);
            if(matrizNum[i][j] > maior) {
                maior = matrizNum[i][j];   
            }
    	}
	}

    puts("Tabela Total");
	for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
        	printf("%d ",matrizNum[i][j]);
    	}
    	puts("");
	}
	puts("");
    puts("Localizacao do maior numero:");
	for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
            if (matrizNum[i][j] == maior){
        	    printf("%d ",matrizNum[i][j]);
            }else{
                printf("x ");
            }
    	}
    	puts("");
	}
}
