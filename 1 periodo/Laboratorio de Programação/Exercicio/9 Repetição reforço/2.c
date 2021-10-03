/*02 – Utilizando a estrutura de repetição for, faça um programa que receba 10 números e
conte quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo.*/

#include <stdio.h>

int main() {
	int i, num, intervalInt, intervalExt;
    
	puts("Digite 10 numeros:");
    
	for(i = 0; i < 10; i++){
    	scanf("%d", &num);
   	 
    	if (num < 20 && num > 10) {
        	intervalInt++;
    	} else {
        	intervalExt++;
    	}
   	 
	}
    
	printf("Foram %d numeros dentro do intervalo\n", intervalInt);
	printf("Foram %d numeros fora do intervalo\n", intervalExt);
    
	return 0;
}