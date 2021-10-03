/*09 – Crie um programa em C que carregue uma matriz 12 x 4 com os valores das vendas
de uma loja, em que cada linha representa um mês do ano, e cada coluna, uma semana
do mês. Tendo preenchido tudo, calcule e imprima:
a) O total vendido em cada mês
b) O total vendido em cada semana durante todo o ano
c) O total vendido no ano.*/
#include <stdio.h>

int main() {
	float sellYear[12][4], sunSellMonth[12], sunSellYear = 0;
	int i, j;
    
	//sunSellMonth[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
	puts("Preencha a relatorio com as vendas de cada semana:");
	for (i=0; i<12; i++){
    	for(j=0; j<4; j++){
        	printf("Digite a venda do %d mes da %d semana:", i+1, j+1);
        	scanf("%f", &sellYear[i][j]);
        	sunSellMonth[i] += sellYear[i][j];
        	sunSellYear += sellYear[i][j];
    	}
	}
	puts("____________________________________________");
    
	for(i=0; i<12; i++){
    	printf("As vendas do %d foi de: %.2f\n", i+1, sunSellMonth[i]);
	}
	puts("____________________________________________");
    
	for (i=0; i<12; i++){
    	printf("As vendas de cada semana do %d mes foram de:\n", i+1);
    	for(j=0; j<4; j++){
    		
        	printf("%.2f / ", sellYear[i][j]);
    	}
    	puts(" ");
	}
	puts("____________________________________________");
    
	printf("O total de vendas do ano foi de: %.2f", sunSellYear);
    
	return 0;
}
