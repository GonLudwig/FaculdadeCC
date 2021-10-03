/*1 – A partir do protótipo realizado em sala (aula de 13/05/2021), construa seu programa
de modo a permitir realizar as 4 operações básicas: soma, multiplicação, subtração e
divisão. Permita que o usuário escolha a operação a ser realizada.
Extra : No protótipo implementado, todas as tabuadas (1 a 10) são realizadas para a
operação escolhida pelo usuário. E se o usuário quiser executar somente a multiplicação
da tabuada de 3, ou somente a soma da tabuada de 8, ..., por exemplo?*/

#include <stdio.h>

int main()
{
	int fristNum = 0, secondNum = 0, i = 0, result = 0, resultFor = 0;
	char wich;
    
	puts("Digite o primeiro numero:");
	scanf("%d", &fristNum);
	puts("Digite o segundo numero;");
	scanf("%d", &secondNum);
	puts("Qual operacao deseja utilizar?");
	puts("Soma '+', Subtracao '-', Multiplicacao '*' e Divisao '/'");
	scanf("%c", &wich);
	fflush(stdin);
    
	switch(wich){
    	case '+':
			result = fristNum + secondNum;
			for (i = 1; i <= 10; i++){
				resultFor = fristNum + i;
				printf("%d + %d = %d\n", fristNum, i, resultFor);
			}
        	break;
    	case '-':
			result = fristNum - secondNum;
			for (i = 1; i <= 10; i++){
				resultFor = fristNum - i;
				printf("%d - %d = %d\n", fristNum, i, resultFor);
			}
        	break;
    	case '*':
			result = fristNum * secondNum;
			for (i = 1; i <= 10; i++){
				resultFor = fristNum * i;
				printf("%d * %d = %d\n", fristNum, i, resultFor);
			}
        	break;
    	case '/':
			result = fristNum / secondNum;
			for (i = 1; i <= 10; i++){
				resultFor = fristNum / i;
				printf("%d / %d = %d\n", fristNum, i, resultFor);
			}
        	break;
	}

	printf("O resultado a operacao e %d %c %d = %d\n", fristNum, wich, secondNum, resultFor);

	return 0;
}
