/*03 – Faça um programa que peça ao usuário um número entre 10 e 20. Se a pessoa
digitar um número diferente, mostrar a mensagem "Número inválido" e solicitar o número
novamente. Se digitar correto mostrar o número digitado.*/

#include <stdio.h>

int main()
{
	int number;
    
    	puts("Digite um numero entre 10 e 20:");
   	 
	do {
    	scanf("%d", &number);
   	 
    	if (number > 10 && number < 20) {
        	puts("O numero digitado esta entre 10 e 20.");
    	} else {
        	puts("Numero invalido.");
        	puts("Digite novamente.");
    	}
	}while(number < 11 || number > 19);

	return 0;
}
