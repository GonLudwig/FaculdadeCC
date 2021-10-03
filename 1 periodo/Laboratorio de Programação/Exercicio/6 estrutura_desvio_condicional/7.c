/* Crie um programa que receba a altura de uma pessoa em centímetros e o peso em quilos. 
Exiba o IMC e o índice de peso do sujeito conforme a tabela abaixo:
O IMC é calculado pela seguinte fórmula:
Abaixo de 15Extremamente abaixo do peso
Entre 15 e 16Gravemente abaixo do peso
Entre 16 e 18,5Abaixo o peso ideal
Entre 18,5 e 25Faixa de peso ideal
Entre 25 e 30Sobrepeso
Entre 30 e 35Obesidade grau I
Entre 35 e 40Obesidade grau II (grave)
Acima de 40Obesidade grau III (mórbida)
IMC = peso em kg / (altura em metros * altura em metros)*/

#include <stdio.h>

int main() {
    float altura, peso, imc;

    printf("Calculo de IMC\n");
    printf("Qual e sua altura em centimetros:");
    scanf("%f", &altura);
    printf("Qual e seu peso em quilos:");
    scanf("%f", &peso);

    altura = altura / 100;
    imc = peso / (altura * altura);

    if (imc < 15) {
        printf("Extremamente abaixo do peso");
    } else if (imc >= 15 && imc < 16) {
        printf("Gravemente abaixo do peso");
    } else if (imc >= 16 && imc < 18.5) {
        printf("Abaixo o peso ideal");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Faixa de peso ideal");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso");
    } else if (imc >= 30 && imc < 35) {
        printf("Obesidade grau I");
    } else if (imc >= 35 && imc < 40) {
        printf("Obesidade grau II");
    } else {
        printf("Obesidade grau III");
    }
    return 0;
}