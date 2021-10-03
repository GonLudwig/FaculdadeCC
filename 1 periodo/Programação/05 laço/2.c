/*2 – Tomando por base o protótipo do jogo “cara ou coroa” com o uso da função rand(),
realizado em sala, também na aula de 13/05/2021, desenvolva agora um jogo de
adivinhação. Para esse exercício você deve gerar um caractere (letra ou número)
aleatório, mas dentro de um range e guardar esse caractere. Enquanto o usuário não
acertar o caractere, o jogo deve acumular a quantidade de tentativas, ao término mostrar
o relatório dizendo com quantas tentativas o usuário acertou o caractere.*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    int num = 0, random = 0, errors = 0;

    puts("Escolhe um numero entre 0 e 10");
    scanf("%d", &num);

    random = rand() % 11;

    while (random != num) {
        errors++;
        puts("Voce nao acertou o numero. Tente Novamente!");
    }

    printf("Voce acertou! O numero era %d\nVoce gastou %d tentativas.", random, errors);

    return 0;
}
