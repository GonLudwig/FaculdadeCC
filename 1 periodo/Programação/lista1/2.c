#include <stdio.h>

int main () {
    char sexo;

    printf("Qual e o seu Sexo ?");
    scanf("%c", &sexo);
 
    if (sexo  == 'F' || sexo  == 'f') {
        printf("Seu sexo e F - Feminino");
    } else if (sexo == 'M' || sexo  == 'm') {
        printf("Seu sexo e M - Masculino");
    } else {
        printf("%c - Sexo indefinido", sexo);
    }
    return 0;
}
