/*01 – Crie um programa que receba do usuário um valor inteiro e armazene-o em uma variável
número. Faça:
a) Exiba o endereço do número
b) Exiba o valor do número
c) Crie um apontador que aponte para o número
d) Exiba o conteúdo do apontador
e) Exiba o valor para o qual o apontador aponta
f) Exiba o endereço do apontador*/
#include <stdio.h>

int main() {
	int numero, *apontador;

	printf("Digite um Numero:");
	scanf("%d", &numero);
    
	apontador = &numero;
    
	printf("O endereço do numero e:%p\n", &numero);
	printf("O valor do numero e:%d\n", numero);
	printf("Conteundo do apontador:%d\n", *apontador);
	printf("O endereco que contem no apontador:%p\n", apontador);
	printf("O endereco do apontador:%p\n", &apontador);
    
	return 0;
}