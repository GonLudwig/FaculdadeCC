/*06 – Crie uma função capaz de receber um inteiro que indica uma determinada
quantidade de segundos. Exiba essa informação organizada em dias, horas, minutos e
segundos.*/
#include <stdio.h>

int contDays (int numbers) {
    int days = 0, hours = 0, minutes = 0, seconds = numbers;

    while (seconds >= 86400) {
        seconds -= 86400;
        days++;
    }
    while (seconds >= 3600) {
        seconds -= 3600;
        hours++;
    }
    while (seconds >= 60) {
        seconds -= 60;
        minutes++;
    }

    printf("%dDias %dHoras %dMinutos e %dSegundos.", days, hours, minutes, seconds);

    return 0;
}

int main () {
    int seconds;

    puts("Digite uma quantidade em segundos:");
    scanf("%d", &seconds);

    contDays(seconds);

    return 0;
}