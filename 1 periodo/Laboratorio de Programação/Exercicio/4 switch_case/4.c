/* Crie um programa para classificar as seções de um supermercado. O usuário deve
informar um código de 5 itens e você exibe a qual seção esse código corresponde.
Código Seção
1 Frios
2 Material de Limpeza
3 Padaria
4 Biscoitos e cereais
5 Higiene pessoal */

#include <stdio.h>

int main() {
    int codigo;

    printf("Informe o codigo do item para saber sua sessao:");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Seu iten esta na sessao de Frios");
            break;
        case 2:
            printf("Seu iten esta na sessao de Material de Limpeza");
            break;
        case 3:
            printf("Seu iten esta na sessao de Padaria");
            break;
        case 4:
            printf("Seu iten esta na sessao de Biscoitos e cereais");
            break;
        case 5:
            printf("Seu iten esta na sessao de Higiene pessoal");
            break;
        default:
            printf("Esse iten nao costa no nosso supermercado!");
            break;
    }
    return 0;
}