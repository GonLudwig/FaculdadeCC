/*12 – Crie uma matriz de 5x20. Cada uma das cinco linhas corresponde ao nome de uma
pessoa (com até 20 caracteres), exiba-os ao final.*/

#include <stdio.h>

int main () {
    int i;
    char matrizChar[5][20];

    puts("Escreve o primeiro nome das 5 pessoas que voce admira!");
	for(i=0; i<5; i++){
        printf("Qual e o nome da %d pessoa:", i+1);
        scanf("%s", &matrizChar[i]);
	}

    puts("\nAs 5 pessoas que voce admira sao:");
	for(i=0; i<5; i++){
        printf("%s", matrizChar[i]);
    	puts("");
	}
    return 0;
}
