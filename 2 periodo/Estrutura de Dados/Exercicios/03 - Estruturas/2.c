/*02 – Aloque dinamicamente um vetor de uma estrutura denominada conta. Cada conta
deve conter:
Código – Int
Fornecedor – Char
Valor – Float
Mês – int (de 1 a 12)
Ano – Int
Permita que o usuário preencha quantas contas quiser. Se acontecer de o usuário
preencher mais contas que o tamanho do vetor, aloque mais posições.
Ao final, exiba:
a) Total das contas cadastradas
b) Total das contas para cada mês.
c) Quantidade de contas cadastradas*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char fornecedor[60];
    float valor;
    int mes;
    int ano;
} conta;

int preencherConta(conta *pessoa, int num, float *vMes, float *vTotal){
    int qtdMes;

    puts("Digite o codigo da conta:");
    scanf("%d", &pessoa[num].codigo);
    puts("Dige o nome da conta:");
    fflush(stdin);
    gets(pessoa[num].fornecedor);
    puts("Digite o valor da conta:");
    scanf("%f", &pessoa[num].valor);
    do {
        puts("Digite o mes de pagamento da conta:");
        scanf("%d", &pessoa[num].mes);
        qtdMes = pessoa[num].mes;
        if(pessoa[num].mes < 1 || pessoa[num].mes > 12) {
            puts("Informe um numero de mes valido!");
        }
    }while(pessoa[num].mes < 1 || pessoa[num].mes > 12);

    
    vMes[qtdMes] += pessoa[num].valor;

    *vTotal += pessoa[num].valor;

    do {
        puts("Digite o ano do deposito:");
        scanf("%d", &pessoa[num].ano);
        if(pessoa[num].ano != 2021){
            puts("Programa so aceita inserir dados do ano vigente. 2021");
        }
    } while(pessoa[num].ano != 2021);


    return num;
}

void contasMes(float *cadastro, int num){
    printf("Valor total cadastrado %.2f nas contas no mes de %d\n", cadastro[num], num);
}

void contaTotal(float *num){
    printf("Valor total nas contas cadastradas foi %.2f\n", *num);
}
int main(){
    int id = 0,i;
    int choice = 1, choiceMes;
    float valorMes[13];
    float *valorTotal;
    conta *pessoa;

    pessoa = calloc(1, sizeof(conta));

    for(i=0;i<13;i++){
        valorMes[i]=0;
    }

    preencherConta(pessoa, id, valorMes, &valorTotal);

    while (choice != 0){
        puts("Digite 1 - Cadastras uma Conta.");
        puts("Digite 2 - Valor total nas contas cadastradas.");
        puts("Digite 3 - Valor Total nas contas para cada mês.");
        puts("Digite 4 - Quantidade de contas cadastradas.");
        puts("Digite 0 - Finalizar o programa.");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                id++;
                pessoa = realloc(pessoa, id*sizeof(conta));
                id = preencherConta(pessoa, id, valorMes, &valorTotal);
                break;
            case 2:
                contaTotal(&valorTotal);
                break;
            case 3:
                do {
                    puts("Qual mes deseja visualizar?");
                    scanf("%d", &choiceMes);
                    if(choiceMes < 1 || choiceMes > 12){
                        puts("Por favor digite um mes valido!");
                    }
                }while(choiceMes < 1 || choiceMes > 12);
                contasMes(valorMes, choiceMes);
                break;
            case 4:
                printf("Quantidade total de cadastro(s) foi %d\n", id+1);
                break;
            case 0:
                puts("Muito obrigado pela preferencia !\n");
                break;
            default:
                puts("Escolha não definida. Escolha um valor valido!\n");
                break;
        }
    }


    free(valorTotal);
    free(pessoa);

    return 0;
}
