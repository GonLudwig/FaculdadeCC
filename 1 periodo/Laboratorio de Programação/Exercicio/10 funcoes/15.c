/*15 – Em uma indústria metalúrgica o custo de produção de uma peça automotiva
corresponde a um custo fixo mensal de R$5.000,00 acrescido de um custo variável de
R$55,00 por unidade produzida mais 25% de impostos sobre o custo variável. Considerar
que o preço de venda dessa peça é de R$102,00, faça:
a) a função para calcular o custo da produção de x peças.
b) a função para retornar a receita referente a venda de x peças.
c) a função para calcular o lucro na venda de x peças.*/

#include <stdio.h>

float custoPecas(int pecas) {
	float custo;
    
	custo = ((pecas * 55) * 1.25) + 5000;
	printf("%.2f\n", custo);
	return custo;
}

float receitaPecas(int pecas) {
	float receita;
    
	receita = pecas * 102;
	printf("%.2f\n", receita);
	return receita;
}

float lucroPecas (int pecas) {
	float lucro;
    
	lucro = receitaPecas(pecas) - custoPecas(pecas);
	printf("%.2f", lucro);
	return lucro;
}

int main () {
	int pecas, escolha;
    
	puts("Calculo da pecas");
    puts("1 - calcular o custo da produção de x peças.");
    puts("2 - retornar a receita referente a venda de x peças.");
    puts("3 - calcular o lucro na venda de x peças.");
    scanf("%d", &escolha);
    puts("Digite o numero de pecas:");
    scanf("%d", &pecas);

    switch (escolha) {
        case 1:
            custoPecas(pecas);
            break;
        case 2:
            receitaPecas(pecas);
            break;
        case 3:
            lucroPecas(pecas);
            break;
        default:
            puts("Escolha nao definida!");
            break;
    }

    return 0;
}
