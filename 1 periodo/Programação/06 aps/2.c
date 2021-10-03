/*Escreva um programa que tenha uma função para inverter um array de
caracteres. Você deverá criar uma função que recebe um array como argumento e
imprima o array de caracteres na ordem inversa. Sua função não deve ter retorno.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h> // tolower

char inverterNome(char *nome) {
	int i, j, sizeNames;
	char namesTwo[20];
  
	sizeNames = strlen(nome) - 1;
	
	for (i = 0, j = sizeNames; i <= sizeNames; i++, j--){
    	namesTwo[i] = nome[j];
	}
    
	for (i=0; i<=sizeNames; i++) {
		printf("%c", namesTwo[i]);
	}
	
	return 0;
}

int main() {
	char names[20];

	puts("Digite seu nome:");
	gets(names);
    
	inverterNome(names);
	return 0;
}
