/*11 – Leia uma matriz 5 x 5. Peça ao usuário um valor X. O programa devera fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma
mensagem de “não encontrado”. */

#include <stdio.h>

int main () {
    int i, j, maior = 0, matrizNum[5][5], searchNum, noNum = 0;

    puts("Preencha uma tabela de 5 linhas por 5 colunas");
	for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
        	printf("Digite o numero da Linha %d na Coluna %d\n", i+1 ,j+1);
        	scanf("%d", &matrizNum[i][j]);
    	}
	}

    printf("Digite o numero que deseja localizar na tabela:");
    scanf("%d", &searchNum);

    puts("Tabela Total");
	for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
        	printf("%d / ",matrizNum[i][j]);
    	}
    	puts("");
	}
	puts("");
    printf("Localizacao do numero %d\n\n", searchNum);
	for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
            if (matrizNum[i][j] == searchNum){
        	    printf("%d / ",matrizNum[i][j]);
            }else{
                printf("x / ");
                noNum++;
            }
    	}
        if (noNum == 25) {
            printf("\nO numero %d nao foi encontrato!\n", searchNum);
        }
    	puts("");
	}
}
