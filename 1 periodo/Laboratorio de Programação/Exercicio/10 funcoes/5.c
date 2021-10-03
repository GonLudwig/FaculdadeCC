/*05 – Crie um programa que solicite ao usuário três números inteiros. Crie e use duas
funções para recebê-los por parâmetro. Uma delas deve retornar o MDC e outra o MMC.
Exiba o resultado no main.*/
#include <stdio.h>

int testMdc(int num1, int num2, int num3) {
    int mdc, i;
    
    while(i!=num1+1) {

        if (num1%i==0 && num2%i==0 && num3%i==0){
            mdc = i;
        }
        i++;
    }

    //return mdc;
    printf("O mdc dos numeros e %d\n", mdc);
}

int testMmc(int num1, int num2, int num3) {
    int mmc, i;

    i = num1;
    while(i > 1) {

        if (num1%i==0 && num2%i==0 && num3%i==0){
            mmc = i;
        }
        i--;
    }

    //return mmc;
    printf("O mmc dos numeros e %d", mmc);
}

int main () {
    int num1, num2, num3, mdc, mmc;

    puts("Digite Tres numeros para calcular o mdc e o mmc");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //mdc = testMdc(num1, num2, num3);
    //mmc = testMmc(num1, num2, num3);
   	//printf("%d", mdc);
    //printf("%d", mmc);
    testMmc(num1, num2, num3);
    testMdc(num1, num2, num3);
    return 0;
}

// Esses comentarios e por que eu tentei usar como retorno e não esta funciando no meu pc.
// Se conseguir indentificar o que eu fez de errado gostaria que me manda-se o motivo. Obrigado
