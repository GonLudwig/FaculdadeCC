/*Uma empresa contratou 10 funcionários temporários. De acordo com o valor das
vendas mensais, os funcionários adquirem pontos que determinam seus salários
ao final de cada mês. Sabe-se que esses funcionários trabalharam nos meses de
novembro de 2019 a janeiro de 2020. Utilizando os conceitos de TAD, alocação de
memória e Listas, desenvolva um programa que:
a) Cadastre os nomes dos funcionários e suas respectivas vendas mensais;
b) Calcule e mostre a pontuação geral de cada funcionário nos três meses. Sabese que cada R$ 100,00 equivalem a 1 ponto;
c) Calcule e exiba a pontuação geral de novembro, dezembro e janeiro;
d) Determine e mostre a maior pontuação atingida nos três meses, mostrando o
nome do funcionário. Desconsidere empates;
e) Determine e mostre o valor total vendido.*/
#include"funcionarios.h"

int main (){
    char nome[100];
    float vNov, vDez, vJan;
    int i;
    int totalPontos;
    LISTAFUNC *lista = criarlista();

    puts("Cadastro das Vendas");
    for(i=0;i<3;i++) {
        puts("Nome do colaborador:");
        fflush(stdin);
        gets(nome);
        puts("Vendas do mes de Novembro");
        scanf("%f", &vNov);
        puts("Vendas do mes de Dezembro");
        scanf("%f", &vDez);
        puts("Vendas do mes de Janeiro");
        scanf("%f", &vJan);
        inserirLista(lista, nome, vNov, vDez, vJan); // A
    }

    pontosTotalVendedor(lista); //b

    puts("Digite o numero do vendedor que deseja saber sua pontuacao geral:");
    scanf("%d", &i);
    while (i > 10 || i < 1) {
        puts("Digie um valor valido, entre 1 e 10");
        scanf("%d", &i);
    }

    totalPontos = pontosTotal(lista, i); // C

    printf("O total de pontos nos 3 messes foi de %d\n", totalPontos);

    maiorVendedor(lista); // D

    totalPontos = totalVenda(lista); // E

    printf("O total de vendas foi de %d\n", totalPontos);



    return 0;
}