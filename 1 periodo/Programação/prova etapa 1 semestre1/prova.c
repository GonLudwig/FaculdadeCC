#include <stdio.h>

int main () {
    int pontos, distancia;

    printf("Qual e a distancia do arremeso do Robo?");
    scanf("%d", &distancia);

    if (distancia >= 0 && distancia <= 800) {
        pontos = pontos + 1; 
    } else if (distancia > 800 && distancia <= 1400) {
        pontos = pontos + 2; 
    } else if (distancia > 1400 && distancia <= 2000) {
        pontos = pontos + 3;
    } else {
        printf("Distancia fora da quadra. Ponto nao computado!\n");
    }

    printf("A pontuacao foi de :%d\n", pontos);

    printf("Glauco Pereira Starling");
    return 0;
}
