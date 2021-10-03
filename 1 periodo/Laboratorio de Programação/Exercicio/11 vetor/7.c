/*07 – Gustavo possui um mercadinho, e vende um total de 5 produtos diferentes. Porém,
por possuir muita dificuldade com matemática, deseja saber quanto vale seu estoque.
Para isso ele sabe apenas quais são os 5 produtos, quanto custa cada um deles, qual o
valor de venda desses produtos e qual a quantidade de produtos. Vamos fazer um
programa para ajudá-lo. Solicitaremos todas essas informações e exibiremos ao final as
informações detalhadas.
Lembre-se, ele deve informar para cada um dos 5 produtos diferentes:
• Nome do produto
• Preço de custo da unidade
• Preço de venda da unidade
• Quantidade em estoque
Ao final, você deverá exibir organizado por produto, o valor do estoque, o valor caso ele
venda tudo, e a soma dessas duas informações para todo o estoque de produtos.
Veja a tabela de exemplo:*/

#include <stdio.h>
#include <string.h>

float precoCusto(float *custo, int *qtsEstoque, float *vetprecoCusto) {
	int i;
    for (i=0; i<5; i++) {
        vetprecoCusto[i] = custo[i] * qtsEstoque[i];
    }
}

float valorVenda(float *precoVenda, int *qtsEstoque, float *verValorVenda) {
	int i;
    for (i=0; i<5; i++) {
        verValorVenda[i] = precoVenda[i] * qtsEstoque[i];
    }
}

int main () {
    char produtos[5][15], produto[15];
    float custo[5], precoVenda[5], vetprecoCusto[5], verValorVenda[5], valores;
    int qtsEstoque[5], quantidade, i, j;
    
    puts("Qual o nome dos produtos:");
    for (i=0; i<5; i++) {
        printf("Nome Produto %d:", i+1);
        gets(produto);
        for (j=0; j<15; j++){
            produtos[i][j] = produto[j];
        }
    }
    
    puts("Qual e o custo do protudo:");
    for (i=0; i<5; i++) {
        printf("Custo do Produto %d:", i+1);
        scanf("%f", &valores);
        custo[i] = valores;
    }
    
    puts("Qual e o preco de venda:");
    for (i=0; i<5; i++) {
        printf("Preco de venda do Produto %d:", i+1);
        scanf("%f", &valores);
        precoVenda[i] = valores;
    }
    
    puts("Qual e a quantidade do produto:");
    for (i=0; i<5; i++) {
        printf("Quantidade do Produto %d:", i+1);
        scanf("%d", &quantidade);
        qtsEstoque[i] = quantidade;
    }

    precoCusto(custo, qtsEstoque, vetprecoCusto);
    valorVenda(precoVenda, qtsEstoque, verValorVenda);

    for (i=0; i<5; i++) {
        printf("Produto: %s/ Custo:%.2f/ Preco de Venda:%.2f/ Quantidade de Produto:%d/ Preco de Custo:%.2f/ Preco de Venda:%.2f\n",
        produtos[i], custo[i], precoVenda[i], qtsEstoque[i], vetprecoCusto[i], verValorVenda[i]);
    }
    
    return 0;
}
