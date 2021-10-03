/* Durante a corrida anual de carneiros de Massachusetts do Oeste em MG, a
prefeitura disponibiliza um cardápio de lanches servidos aos visitantes.
Crie um programa que peça para o usuário informar um código de três lanches
diferentes. Ao final, exiba o valor total a ser pago. Se o usuário informar um código
inválido, avise-o.
Código Lanche Valor
1001 Bolo de Chocolate com Maionese R$ 3,50
1002 Nescau com água e salsinha R$ 1,50
1003 Toddy com água e cebolinha R$ 1,50
1004 Pão de cachorro quente com feijão R$ 1,25
1005 Sorvete com macarronada R$ 6,80
1006 Churrasquinho com açúcar mascavo R$ 2,99 */ 

#include <stdio.h>

int main() {
    int lanche;
    float valor;

    printf("1001 Bolo de Chocolate com Maionese R$ 3,50\n");
    printf("1002 Nescau com água e salsinha R$ 1,50\n");
    printf("1003 Toddy com água e cebolinha R$ 1,50\n");
    printf("1004 Pão de cachorro quente com feijão R$ 1,25\n");
    printf("1005 Sorvete com macarronada R$ 6,80\n");
    printf("1006 Churrasquinho com açúcar mascavo R$ 2,99\n");
    printf("Informe o codigo do seu Primeiro lanche:");
    scanf("%d", &lanche);

    switch (lanche) {
        case 1001:
            printf("Bolo de Chocolate com Maionese R$ 3,5\n");
            valor = valor + 3.5;
            break;
        case 1002:
            printf("Nescau com água e salsinha R$ 1,50\n");
            valor = valor + 1.5;
            break;
        case 1003:
            printf("Toddy com água e cebolinha R$ 1,50\n");
            valor = valor + 1.5;
            break;
        case 1004:
            printf("Pão de cachorro quente com feijão R$ 1,25\n");
            valor = valor + 1.25;
            break;
        case 1005:
            printf("Sorvete com macarronada R$ 6,80\n");
            valor = valor + 6.8;
            break;
        case 1006:
            printf("Churrasquinho com açúcar mascavo R$ 2,99\n");
            valor = valor + 2.99;
            break;
        default:
            printf("Codigo invalido!\n");
            break;
    }

    printf("Informe o codigo do seu Segundo lanche:");
    scanf("%d", &lanche);
    
    switch (lanche) {
        case 1001:
            printf("Bolo de Chocolate com Maionese R$ 3,5\n");
            valor = valor + 3.5;
            break;
        case 1002:
            printf("Nescau com água e salsinha R$ 1,50\n");
            valor = valor + 1.5;
            break;
        case 1003:
            printf("Toddy com água e cebolinha R$ 1,50\n");
            valor = valor + 1.5;
            break;
        case 1004:
            printf("Pão de cachorro quente com feijão R$ 1,25\n");
            valor = valor + 1.25;
            break;
        case 1005:
            printf("Sorvete com macarronada R$ 6,80\n");
            valor = valor + 6.8;
            break;
        case 1006:
            printf("Churrasquinho com açúcar mascavo R$ 2,99\n");
            valor = valor + 2.99;
            break;
        default:
            printf("Codigo invalido!\n");
            break;
    }

    printf("Informe o codigo do seu Terceiro lanche:");
    scanf("%d", &lanche);

    switch (lanche) {
        case 1001:
            printf("Bolo de Chocolate com Maionese R$ 3,5\n");
            valor = valor + 3.5;
            break;
        case 1002:
            printf("Nescau com água e salsinha R$ 1,50\n");
            valor = valor + 1.5;
            break;
        case 1003:
            printf("Toddy com água e cebolinha R$ 1,50\n");
            valor = valor + 1.5;
            break;
        case 1004:
            printf("Pão de cachorro quente com feijão R$ 1,25\n");
            valor = valor + 1.25;
            break;
        case 1005:
            printf("Sorvete com macarronada R$ 6,80\n");
            valor = valor + 6.8;
            break;
        case 1006:
            printf("Churrasquinho com açúcar mascavo R$ 2,99\n");
            valor = valor + 2.99;
            break;
        default:
            printf("Codigo invalido!\n");
            break;
    }

    printf("Seu total foi de %.2f", valor);

    return 0;
}
