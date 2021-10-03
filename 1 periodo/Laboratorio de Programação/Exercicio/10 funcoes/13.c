/*13 – Escrever uma função para receber por parâmetro o tempo de duração de um
experimento expresso em segundos e imprimir na tela esse mesmo tempo em horas,
minutos e segundos.*/
#include <stdio.h>

int contHours (int numbers) {
    int hours = 0, minutes = 0, seconds = numbers;

    while (seconds >= 3600) {
        seconds -= 3600;
        hours++;
    }
    while (seconds >= 60) {
        seconds -= 60;
        minutes++;
    }

    printf("%dHoras %dMinutos e %dSegundos.", hours, minutes, seconds);

    return 0;
}

int main () {
    int seconds;

    puts("Digite uma quantidade em segundos:");
    scanf("%d", &seconds);

    contHours(seconds);

    return 0;
}