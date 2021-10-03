/*05 – Crie um programa capaz de ler do usuário um vetor de 8 números inteiros, entretanto
não permita a inserção de valores repetidos.*/

#include <stdio.h>

int main () {
    int vetor[8];
	int i, j, num;

	puts("Digite 8 numeros:");

	for (i = 0; i < 8; i++) {
        printf("Digite o numero na posicao %d", i);
    	scanf("%d", &vetor[i]);
        
        for (j=0; j<i; j++){
            if(vetor[i] == vetor[j]) {
                puts("Esse numero ja foi inserido, digite outro numero!");
                i--;
            }
        }
	}

    return 0;
}
