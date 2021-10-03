/*07 – Crie estruturas, defina tipos, preencha e exiba os dados para os seguintes itens:
a) Carros
b) Aviões
c) Répteis
d) Eletrodomésticos*/
#include<stdio.h>

typedef struct{
    char nome[10];
    char cor[10];
    int peso;
} carro;

typedef struct{
    char nome[10];
    char cor[10];
    int peso;
} aviao;

typedef struct{
    char nome[10];
    char cor[10];
    int peso;
} repteis;

typedef struct{
    char nome[10];
    char cor[10];
    int peso;
} eletrodomestico;

void inputCarro(carro *car) {
    puts("Digite os dados do carro:");
    printf("Qual e o nome:");
    fflush(stdin);
    gets(car->nome);
    printf("Qual e a cor:");
    fflush(stdin);
    gets(car->cor);
    printf("Qual e o peso:");
    scanf("%d", &car->peso);
}

void viewCarro(carro car) {
    puts("Dados do carro:");
    printf("Nome: %s\n", car.nome);
    printf("Cor: %s\n", car.cor);
    printf("Peso: %d\n", car.peso);
}

void inputAviao(aviao *car) {
    puts("Digite os dados do aviao:");
    printf("Qual e o nome:");
    fflush(stdin);
    gets(car->nome);
    printf("Qual e a cor:");
    fflush(stdin);
    gets(car->cor);
    printf("Qual e o peso:");
    scanf("%d", &car->peso);
}

void viewAviao(aviao car) {
    puts("Dados do aviao:");
    printf("Nome: %s\n", car.nome);
    printf("Cor: %s\n", car.cor);
    printf("Peso: %d\n", car.peso);
}

void inputRepteis(repteis *car) {
    puts("Digite os dados do reptil");
    printf("Qual e o nome:");
    fflush(stdin);
    gets(car->nome);
    printf("Qual e a cor:");
    fflush(stdin);
    gets(car->cor);
    printf("Qual e o peso:");
    scanf("%d", &car->peso);
}

void viewRepteis(repteis car) {
    puts("Dados do reptil");
    printf("Nome: %s\n", car.nome);
    printf("Cor: %s\n", car.cor);
    printf("Peso: %d\n", car.peso);
}

void inputEletrodomestico(eletrodomestico *car) {
    puts("Digite os dados do eletrodomestico");
    printf("Qual e o nome:");
    fflush(stdin);
    gets(car->nome);
    printf("Qual e a cor:");
    fflush(stdin);
    gets(car->cor);
    printf("Qual e o peso:");
    scanf("%d", &car->peso);
}

void viewEletrodomestico(eletrodomestico car) {
    puts("Dados do eletrodomestico");
    printf("Nome: %s\n", car.nome);
    printf("Cor: %s\n", car.cor);
    printf("Peso: %d\n", car.peso);
}

int main() {

    carro carMyGirl;
    aviao avMyGirl;
    repteis reMyGirl;
    eletrodomestico eleMyGirl;

    inputCarro(&carMyGirl);
    inputAviao(&avMyGirl);
    inputRepteis(&reMyGirl);
    inputEletrodomestico(&eleMyGirl);


    viewCarro(carMyGirl);
    viewAviao(avMyGirl);
    viewRepteis(reMyGirl);
    viewEletrodomestico(eleMyGirl);
    
    return 0;
}
