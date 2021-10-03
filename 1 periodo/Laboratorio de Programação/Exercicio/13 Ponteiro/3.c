/*03 – Crie um programa capaz de lidar com um vetor de 5 posições. Crie funções para as seguintes
funcionalidades:
a) Preencher o vetor
b) Exibir o vetor
c) Exibir os endereços das posições do vetor
d) Somar os valores do vetor*/
#include <stdio.h>

int preencerVet(int *vet){
	int i;
	for (i=0; i<5; i++) {
    	printf("Digite o %d numero: ", i+1);
    	scanf("%d", &vet[i]);
	}
}

int exiberVet(int *vet){
	int i;
	for (i=0; i<5; i++) {
    	printf("O %d numero do vetor e %d\n", i+1, vet[i]);
	}
}

int enderecoVet(int *vet){
	int i;
	for (i=0; i<5; i++) {
    	printf("O endereco do %d numero vetor e %p\n", i+1, &vet[i]);
	}
}

int somarVet(int *vet){
	int i, soma = 0;
	for (i=0; i<5; i++) {
    	soma += vet[i];
	}
    
	printf("A soma dos numeros do vetor e %d\n", soma);
}

int main() {
	int 5variavel;
	int vetNumero[5];

	preencerVet(vetNumero);
	exiberVet(vetNumero);
	enderecoVet(vetNumero);
	somarVet(vetNumero);
    
	return 0;
}
