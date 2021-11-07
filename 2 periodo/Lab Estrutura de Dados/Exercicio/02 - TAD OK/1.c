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

#include <stdio.h>
#include <stdlib.>
#include "1h.h"

struct venda_mes{
    int id;
    char nomeVendedor[100];
    int mes;
    float valorVendaMes[3];
    int pontos;
};


vendaMes* criarPlanilhaVendas() {
    vendaMes* vendedores = (vendaMes*) calloc(1, sizeof(vendaMes));
    if (vendedores == NULL){
        return 0;
    }
    return vendedores;
}

int cadastrarVendedor(char nome, int nMes, float vVendas) {
    vendedores
}