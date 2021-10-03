/*05 – Crie um programa que leia o gênero e a idade de uma pessoa, se for do sexo
‘masculino’ e tiver idade igual a dezoito anos, informe que será necessário alistar-se no
exército. Do contrário não exiba nada. */

#include <stdio.h>
#include <string.h>

int main () {
    int idade;
    char genero[9], masculino[9] = "masculino";

    puts("Qual seu genero?");
    puts("masculino ou feminino?");
    fflush(stdin);
    gets(genero);
    puts("Quantos anos voce tem?");
    scanf("%d", &idade);

    if (strcmp(genero, masculino) == 0 && idade == 18) {
        puts("Compareca a um local de alistamento");
    } else {
        puts("obrigado seus dados foram salvos.");
    }
    return 0;
    //Por algum motivo não sei qual o fflush não resolvi meu problema no buffer.
}
