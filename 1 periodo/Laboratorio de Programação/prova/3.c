#include <stdio.h>

int main () {
    int idade;
    char sexo;

    printf("Qual e o seu Sexo ?");
    scanf("%c", &sexo);
    printf("Qual e a sua idade?");
    scanf("%d", &idade);
 
    switch (sexo) {
        case 'f':
        case 'F':
            idade = 60 - idade;
            printf("Falta %d anos para voce se aposentar", idade);
            break;
        case 'm':
        case 'M':
            idade = 65 - idade;
            printf("Falta %d anos para voce se aposentar", idade);
            break;
        default:
            printf("Genero nao definido!");
            break;
    }
    return 0;
}