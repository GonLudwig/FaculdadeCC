/* Cristina costumava ser ótima aluna, porém no último ano por motivos pessoais deixou de esforçar devidamente.
Seu professor de matemática divide os 100 pontos da disciplina em 5 provas de 20 pontos cada.
Receba de Cristina quantos pontos ela alcançou nas quatro provas e exiba a situação dela.
Lembre-se, caso a nota total for menor que 50 pontos, ela está reprovada.
Se sua nota estiver entre 50 e 69,9, ela estará de recuperação.
Se sua nota for maior que 70 ela será aprovada. */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota5, media;

    printf("Quanto você tirou na primeira prova?");
    scanf("%f", &nota1);
    printf("Quanto você tirou na segunda prova?");
    scanf("%f", &nota2);
    printf("Quanto você tirou na terceira prova?");
    scanf("%f", &nota3);
    printf("Quanto você tirou na quarta prova?");
    scanf("%f", &nota4);
    printf("Quanto você tirou na quinta prova?");
    scanf("%f", &nota5);
    
    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    if (media >= 70) {
        printf("Voce esta aprovado!");
    } else if (media < 50) {
        printf("Voce esta reprovado!");
    } else {
        printf("Voce esta de recuperacao");
    }
    return 0;
}