/*02 – Faça um programa que preencha um vetor de 10 posições. Solicite ao usuário dois
valores inteiros A e B, sendo A < B. Em seguida exiba:
a) Os valores contidos nas posições A e B.
b) Os valores contidos nas posições maiores que A e menores que B
c) Os valores contidos nas posições menores que A e maiores que B
d) Os valores contidos em posições diferentes de A e B*/

#include <stdio.h>

int questions(int *vet, int fristNum, int secondNum){
	int i;
    
	for (i=0; i<2;){
		if(fristNum > 10) {
        	printf("O %d e maior que %d, digite um numero menor que %d:", fristNum, vet[9], vet[9]);
        	scanf("%d", &fristNum);
			i--;
    	} else {
			i++;
		}
    	if (secondNum > fristNum) {
        	printf("O %d e maior que %d, digite um numero menor que %d:", secondNum, fristNum, fristNum);
        	scanf("%d", &secondNum);
			i--;
    	} else {
			i++;
		}
	}

	printf("O valor %d esta na posicao %d\n", vet[fristNum], fristNum);
	printf("O valor %d esta na posicao %d\n", vet[secondNum], secondNum);

	printf("Os numero da posicao %d para cima: ", fristNum);
	for (i=fristNum+1; i<10; i++){
		printf("%d ", vet[i]);
	}
	puts("");
	printf("Os numero da posicao %d para baixo: ", secondNum);
	for (i=secondNum-1; i>=0; i--){
		printf("%d ", vet[i]);
	}
	puts("");
	printf("Os numero entre a posicao %d e a %d sao: ", fristNum, secondNum);
	for (i=secondNum+1; i<fristNum; i++){
		printf("%d ", vet[i]);
	}
	puts("");
	printf("Todos os numeros que não estao na posicao %d e %d: ", fristNum, secondNum);
	for (i=0; i<10; i++){
		if(i!=fristNum && i!=secondNum){
			printf("%d ", vet[i]);
		}
	}

    
	return 0;
}

int main () {
	int vetNum[10], i, highNum, lowNum;
    
	puts("Digite 10 valores");
	for(i=0; i<10; i++) {
    	printf("Digite o %d valor:", i);
    	scanf("%d", &vetNum[i]);
	}
	puts("Agora digite dois valores sendo o primeiro maior que o segundo e menores que 10");
	printf("Digite o maior valor:");
	scanf("%d", &highNum);
	printf("Digite o menor valor:");
	scanf("%d", &lowNum);
    
	questions(vetNum, highNum, lowNum);
    
}
    
