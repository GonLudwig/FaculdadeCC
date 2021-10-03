/*04 – Escreva um programa que leia números digitados, pare quando o valor digitado for
negativo. Nesse momento, exiba quantos números foram aceitos e a soma deles.*/

#include <stdio.h>

int main() {
	int num = 0, sunNum = 0, qtdNum = 0;
    
	puts("Digite numeros inteiros:");
	scanf("%d", &num);
    
	while (num >= 0) {
    	sunNum += num;
    	qtdNum++;
    	scanf("%d", &num);
	}
    
	printf("Foram %d numeros aceitos\n", qtdNum);
	printf("A soma deles foi %d", sunNum);
	return 0;
}
