#include <stdio.h>

int main () {
    float nota1, nota2, media;

    printf("Digite sua primeira nota neste semestre:");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota neste semestre:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media <= 4) {
        printf("Suas notas foram %.1f %.1f e sua media foi %.1f\n", nota1, nota2, media);
        printf("Você foi Reprovado sua nota e E");
    } else if (media <= 6) {
        printf("Suas notas foram %.1f/%.1f e sua media foi %.1f\n", nota1, nota2, media);
        printf("Você foi Reprovado sua nota e D");
    } else if (media <= 7.5) {
        printf("Suas notas foram %.1f/%.1f e sua media foi %.1f\n", nota1, nota2, media);
        printf("Você foi Aprovado sua nota e C");
    } else if (media <= 9) {
        printf("Suas notas foram %.1f/%.1f e sua media foi %.1f\n", nota1, nota2, media);
        printf("Você foi Aprovado sua nota e B");
    } else {
        printf("Suas notas foram %.1f/%.1f e sua media foi %.1f\n", nota1, nota2, media);
        printf("Você foi Aprovado sua nota e A");
    }
    return 0;
}