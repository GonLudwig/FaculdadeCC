/*Para os próximos exercícios desta lista, resolva todos utilizando os laços while, do
while e for.
08 – Peça para o usuário informar um número qualquer (que pode ser negativo). Exiba a
soma de todos os números entre zero e o número informado.*/

#include <stdio.h>

int main () {
    int num = 0, i = 0, sumFor = 0, iTwo = 0, sumWhile = 0, iThree = 0, sumDowhile = 0;

    puts("Digite o primeiro numero");
    scanf("%d", &num);
	
    if (num > 0){

        for(i = 0;i < num; i++) {
            sumFor += i;
        }
        puts("");
        while(iTwo < num - 1) {
            iTwo++;
            sumWhile += iTwo;
        }
        puts("");
        do {
            iThree++;
            sumDowhile += iThree;
        } while(iThree < num - 1);

    } else {

        iTwo = num;
        iThree = num;

        for(i = num + 1;i < 0; i++) {
            sumFor += i;
        }
        puts("");
        while(iTwo < -1) {
            iTwo++;
            sumWhile += iTwo;
        }
        puts("");
        do {
            iThree++;
            sumDowhile += iThree;
        } while(iThree < -1);

    }


    printf("A soma dos numeros deu %d\n", sumFor);
    printf("A soma dos numeros deu %d\n", sumWhile);
    printf("A soma dos numeros deu %d\n", sumDowhile);
    return 0;
}