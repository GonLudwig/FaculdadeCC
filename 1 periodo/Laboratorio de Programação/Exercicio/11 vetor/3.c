/*03 – Crie um programa que solicite ao usuário o preenchimento de um vetor de 10
posições com valores inteiros. Exiba:
a) Qual posição contém o maior número. E qual número é.
b) Qual posição contém o menor número. E qual número é.
c) Em quais posições estão contidos:
- Números pares
- Números ímpares*/
#include <stdio.h>

int impares (int vetor[]) {
	int impares[10];
	int i, j = 0;
    
	for (i = 0; i < 10; i++){
    	if (vetor[i]%2){
        	impares[j] = i;
        	j++;
    	}
	}
    
	printf("A posicao dos numeros impares sao:");
    for (i = 0;i < j; i++) {
        printf("%d ", impares[i]);
    }
	puts("");
	return 0;
}

int pares (int vetor[]) {
	int pares[10];
	int i, j = 0;
    
	for (i=0; i < 10; i++){
    	if (vetor[i]%2 == 0){
        	pares[j] = i;
        	j++;
    	}
	}
    
	printf("A posicao dos numeros pares sao:");
    for (i = 0;i < j; i++) {
        printf("%d ", pares[i]);
    }
	puts("");

	return 0;
}

int maiorNum (int vetor[]) {
	int maior = vetor[0], i, posicao;
    
	for(i=1; i < 10; i++){
    	if (vetor[i] > maior) {
        	maior = vetor[i];
			posicao = i;
    	}
	}

	printf("O maior numero e %d e esta na posicao %d\n", maior, posicao);

	return 0;
}

int menorNum (int vetor[]) {
	int menor = vetor[0], i, posicao;
    
	for(i=1; i<10; i++){
    	if (vetor[i] < menor) {
        	menor = vetor[i];
			posicao = i;
    	}
	}

	printf("O menor numero e %d e esta na posicao %d\n", menor, posicao);

	return 0;
}


int main() {
	int vetor[10];
	int i, num;

	puts("Digite 10 numeros:");

	for (i = 0; i < 10; i++) {
    	scanf("%d", &num);
    	vetor[i] = num;
	}
    
	impares(vetor);
	pares(vetor);
	maiorNum(vetor);
	menorNum(vetor);
    
    
	return 0;
}
