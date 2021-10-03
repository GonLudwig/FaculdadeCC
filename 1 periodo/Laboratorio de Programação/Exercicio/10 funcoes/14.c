/*14 – Escrever um procedimento para receber as três notas de um aluno e imprimir a
média ponderada. Considerar como peso das notas os seguintes valores: 2, 3, 5.*/
#include <stdio.h>

float calcularIdade(float nota1, float nota2, float nota3) {
    float media;
    
    media = (nota1 + nota2 + nota3) / 10;
    
    printf("Sua media e %.2f", media);
}

int main() {
    float nota1, nota2, nota3;
    
    puts("Digite as 3 notas:");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    
    calcularIdade(nota1, nota2, nota3);
    
    return 0;
}
