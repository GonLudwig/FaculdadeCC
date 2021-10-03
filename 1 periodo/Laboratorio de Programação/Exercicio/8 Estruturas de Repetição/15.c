/*Crie um programa capaz de exibir 10 números ímpares após um determinado
número informado pelo usuário.*/

#include<stdio.h>

int main () {
    int num, i;

    puts("Informe numero:");
    do {
        scanf("%d", &num);
        
        if (num%2) {
            num += 2;
        } else {
            num += 1;
        }

        for (i = num; i < (num + 20); i +=2){
            printf("%d ", i);
        }

    } while (num != 0);
       
    return 0;
}
