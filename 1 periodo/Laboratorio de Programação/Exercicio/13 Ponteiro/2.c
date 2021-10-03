/*02 – Crie no main de um programa uma variável inteira.
a) Passe-a por parâmetro para uma função (funcaoA) e troque seu valor (dentro da função)
b) Exiba o valor da variável na função e no main (após a troca)
c) Passe a variável por referência para a função (funcaoB) e troque seu valor (dentro da
função)
d) Exiba seu valor na função e no main (após a troca)
e) Escreva em forma de comentário ao final do programa se ambas as funções trocaram o
valor da variável original*/
#include <stdio.h>

int funcaoA(int num){
	num = 10;
	printf("Numero dentro da funcaoA e: %d\n", num);
}

int funcaoB(int *num){
	*num = 20;
	printf("Numero dentro da funcaoB e: %d\n", *num);
}

int main() {
	int numero = 1;

	printf("Valor de numero:%d\n", numero);
	funcaoA(numero);
	printf("Valor de numero apos funcaoA: %d\n", numero);
	funcaoB(&numero);
	printf("Valor de numero apos funcaoB: %d\n", numero);
	// como mostrado no programa somente a funcaoB alterou o valor da variavel
    
	return 0;
}
