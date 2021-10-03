/*Parte 2 – Estruturas
04 – Crie um programa capaz de definir uma estrutura de dados para armazenar
informações de um animal qualquer, contendo no mínimo cinco informações sobre o
animal. Peça ao usuário para preencher os dados, ao final exiba-os.*/
#include <stdio.h>

struct animal {
    float peso;
    float comprimento;
    char nome[20];
    char classe[20];
    char especie[20];
};


int main() {
    struct animal cachorro;

    puts("Qual e o peso do seu cachorro:");
    scanf("%f", &cachorro.peso);
    puts("Qual e o comprimento do seu cachorro:");
    scanf("%f", &cachorro.comprimento);
    puts("Qual e a classe do seu cachorro:");
    scanf("%s", &cachorro.classe);
    puts("Qual e a especie do seu cahcorro:");
    scanf("%s", &cachorro.especie);
    puts("Qual e o nome do seu cachorro:");
    scanf("%s", &cachorro.nome);

    printf("\nClasse: %s\n", cachorro.classe);
    printf("Especie: %s\n", cachorro.especie);
    printf("Nome: %s\n", cachorro.nome);
    printf("Peso: %f\n", cachorro.peso);
    printf("Comprimento: %f\n", cachorro.comprimento);
}
