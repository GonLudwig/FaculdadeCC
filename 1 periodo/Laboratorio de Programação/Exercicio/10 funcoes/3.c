/*03 – Crie uma determinada função que deve receber 4 números inteiros por parâmetro,
calcular e retornar a média aritmética dos números. No main, exiba o resultado.*/
#include <stdio.h>

float avarage(float number1,float number2,float number3,float number4) {
    float avarage;

    avarage = (number1 + number2 + number3 + number4) / 4;

    return avarage;
}

int main() {

    float number1, number2, number3, number4, media;

    puts("Digite suas 4 notas:");
    scanf("%f", &number1);
    scanf("%f", &number2);
    scanf("%f", &number3);
    scanf("%f", &number4);

    media = avarage(number1, number2, number3, number4);

    printf("Media aritimetica e %.2f", media);

    return 0;
}
