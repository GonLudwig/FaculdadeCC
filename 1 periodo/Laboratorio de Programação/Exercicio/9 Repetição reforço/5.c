/*Para os próximos exercícios desta lista, resolva todos utilizando os laços while, do
while e for.
05 – Peça para o usuário informar um número, exiba todos os números entre zero e o
número informado*/

#include <stdio.h>

int main () {
    int num = 0, i = 0, iTwo= 0, iThree = 0;

    puts("Digite um numero:");
    scanf("%d", &num);

    for(i = 1;i < num; i++) {
        printf("%d ", i);
    }
    puts("");
    while(iTwo < num - 1) {
        iTwo++;
        printf("%d ", iTwo);
    }
    puts("");
    do {
        iThree++;
        printf("%d ", iThree);
    } while(iThree < num - 1);
    
    return 0;
}
