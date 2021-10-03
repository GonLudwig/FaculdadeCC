/*06 – Fui a um leilão e arrematei um total de 11 veículos, sendo motos e carros. Como já
possuo uma coleção de veículos, preciso adicioná-los e visualizá-los. As informações que
julgo pertinentes são:
-anoFabricacao
-anoModelo
-preco
-fabricante
-modelo
-cor
-potencia
-placa
Crie um programa capaz de permitir o cadastro dos 11 veículos. Ao final, pergunte ao
usuário qual veículo deseja visualizar e exiba todas as informações referentes ao veículo
escolhido.*/

#include <stdio.h>

struct carro {
    int anoFabricacao;
    int anoModelo;
    float preco;
    char fabricante[15];
    char modelo[10];
    char cor[10];
    int potencia;
    char placa[10];
};

void inputCarro(struct carro *car) {
    int i;
	
    for(i=0; i<11; i++) {
        printf("Informacoes do %d carro:\n", i+1);
        printf("Qual ano de Fabricacao:");
        scanf("%d", &car[i].anoFabricacao);
        printf("Qual ano do modelo:");
        scanf("%d", &car[i].anoModelo);
        printf("Qual preco:");
        scanf("%f", &car[i].preco);
        printf("Qual fabricante:");
        fflush(stdin);
        gets(car[i].fabricante);
        printf("Qual e o modelo:");
        fflush(stdin);
        gets(car[i].modelo);
        printf("Qual e a cor:");
        fflush(stdin);
        gets(car[i].cor);
        printf("Qual e a potencia:");
        scanf("%d", &car[i].potencia);
        printf("Qual e a placa:");
        fflush(stdin);
        gets(car[i].placa);
    }
}

void viewCarro(struct carro *car) {
    int choice = 1;

    while(choice >= 0 || choice < 11) {
        puts("Digite um numero entre 1 e 12 referente ao carro que deseja saber as informações:");
        puts("Caso queria sair digite qual quer outro numero.");
        scanf("%d", &choice);
        choice -= 1;
        printf("%d \n", choice);

        if (choice >= 0 || choice < 11) {
            printf("Ano de Fabricacao: %d\n", car[choice].anoFabricacao);
            printf("Ano do modelo: %d\n", car[choice].anoModelo);
            printf("Preco: %.2f\n", car[choice].preco);
            printf("Fabricante: %s\n", car[choice].fabricante);
            printf("Modelo: %s\n", car[choice].modelo);
            printf("Cor: %s\n", car[choice].cor);
            printf("Potencia: %d\n", car[choice].potencia);
            printf("Placa: %s\n", car[choice].placa);
        } else {
            puts("Ate logo!");
        }
    }
}

int main() {

    struct carro MyGirls[11];

    inputCarro(MyGirls);
    viewCarro(MyGirls);
    
    return 0;
}