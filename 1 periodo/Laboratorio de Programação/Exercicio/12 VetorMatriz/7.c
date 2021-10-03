/*07 – Crie um programa com uma matriz de tamanho 4 x 4. Permita ao seu usuário
preencher as posições com valores inteiros e ofereça um menu com as seguintes
possibilidades
a) Exibir a matriz completa
b) Exibir os números da diagonal principal e secundária
c) Exibir soma de uma determinada linha (usuário informa a linha)
d) Exibir soma de uma determinada coluna (usuário informa a coluna)*/
#include <stdio.h>

int menuMatriz(int matriz[4][4], int num) {
    int i, j, sun = 0, choice;

    while (num != 0){
        switch (num){
            case 1:
                puts("Tabela");
                for(i=0; i<4; i++){
                    for(j=0; j<4; j++){
                        printf("%d ", matriz[i][j]);
                    }
                    puts("");
                }
                break;
            case 2:
                puts("Diagonal Principal");
                for(i=0; i<4; i++){
                    for(j=0; j<4; j++){
                        if (i == j){
                            printf("%d ",matriz[i][j]);
                        } else {
                            printf(" ");
                        }
                    }
                    puts("");
                }
                puts("Diagonal Secundaria:");
                for(i=0; i<4; i++){
                    for(j=0; j<4; j++){
                        if (i+j == 3){
                            printf("%d ",matriz[i][j]);
                        } else {
                            printf(" ");
                        }
                    }
                    puts("");
                }
                break;
            case 3:
                sun = 0;
                puts("Qual linha voce deseja saber a somatoria ?");
                scanf("%d", &choice);
                for(i=0; i<4; i++){
                    sun += matriz[choice-1][i];
                }
                printf("A somatoria da linha %d e %d\n", choice, sun);
                break;
            case 4:
                sun = 0;
                puts("Qual Coluna voce deseja saber a somatoria ?");
                scanf("%d", &choice);
                for(i=0; i<4; i++){
                    sun += matriz[i][choice-1];
                }
                printf("A somatoria da linha %d e %d\n", choice, sun);
                break;
            default:
                puts("Opcao incorreta !!!, Se Deseja sair digite 0");
                break;
        
        }
        puts("Escolha a opcao novamente:");
        scanf("%d", &num);
    }
}

int main() {
	int matrizNum[4][4], i, j, choice;

	puts("Preencha uma tabela de 4 linhas por 4 colunas");
	for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
        	printf("Digite o numero da Linha %d na Coluna %d\n", i+1 ,j+1);
        	scanf("%d", &matrizNum[i][j]);
    	}
	}
    
	puts("Digite 1 - Exibir a matriz completa");
	puts("Digite 2 - Exibir os números da diagonal principal e secundária");
	puts("Digite 3 - Exibir soma de uma determinada linha (usuário informa a linha)");
	puts("Digite 4 - Exibir soma de uma determinada coluna (usuário informa a coluna");
	scanf("%d", &choice);
    
	menuMatriz(matrizNum, choice);
    
	return 0;
}
