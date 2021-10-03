/*08 – Crie uma função que recebe o somatório de notas de um aluno e retorna qual o
conceito adquirido por ele. Obedeça à seguinte tabela:
Nota → Conceito
0 a 49,9 → D
50 a 69,9 → C
70 a 89,9 → B
90 a 100 → A*/

#include <stdio.h>

int resultNota(float nota, int qtdNota) {
    float media;

    media = nota / qtdNota;

    if (media < 50) {
        printf("Sua media foi %.1f\n", media);
        printf("Voce foi Reprovado sua nota e D");
    } else if (media < 70) {
        printf("Sua media foi %.1f\n", media);
        printf("Voce foi Reprovado sua nota e C");
    } else if (media < 90) {
        printf("Sua media foi %.1f\n", media);
        printf("Voce foi Aprovado sua nota e B");
    } else {
        printf("Sua media foi %.1f\n", media);
        printf("Voce foi Aprovado sua nota e A");
    }
    return 0;
}

int main () {
    float nota, notas = 0;
    int qtsNotas, i;

    puts("Quantas notas deseja verificar:");
    scanf("%d", &qtsNotas);

    for (i = 0;i < qtsNotas;i++) {
        printf("Digite as nota deste semestre:");
        scanf("%f", &nota);

        notas += nota;
    }

    resultNota(notas, qtsNotas);

    return 0;
}
