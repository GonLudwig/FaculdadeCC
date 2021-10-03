/*12 – Escrever uma função para receber a idade de uma pessoa em dias e imprimir essa
idade expressa em anos, meses e dias.*/
#include <stdio.h>

int countDays(int days) {
	int years = 0, month = 0;
    
	while (days>30) {
    	if (days >= 365) {
    	days -= 365;
    	years++;
   	 
    	} else if (days >= 30) {
    	days -= 30;
    	month++;
    	}
	}

	printf("Sao %d ano(s) %d messes e %d dias", years, month, days);
}

int main () {
	int days;
    
	puts("Digite a quantidade deseja em dias:");
	scanf("%d", &days);
    
	countDays(days);
    
	return 0;
}