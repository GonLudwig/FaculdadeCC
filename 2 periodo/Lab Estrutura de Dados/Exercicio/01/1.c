/*1. Considere a criação de uma estrutura que possa abstrair as características
essenciais de uma locadora de veículos. Defina essa estrutura de modo a conter
pelo menos os membros: placa, valor da diária e situação do veículo. Em seguida
crie no mínimo 3 funções capazes de manipular essa estrutura. As funções devem
tratar seus parâmetros como cópias, isto é, não devem ser implementado o uso de
ponteiros.
Você pode criar funções para alugar um veículo, calcular o valor total a ser pago
conforme uma quantidade de dias a ficar com um veículo alugado, devolver um
veículo...*/
#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char placa[6];
    float valor;
    char situacao[100];
} veiculo;

void cadastrarVeiculo(veiculo v){
    
    puts("Digite numero da placa do carro:");
    fflush(stdin);
    gets(v[0].placa);
    puts("Digite o valor:");
    scanf("%f", &v[0].valor);
    puts("Digite a situacao do carro:");
    fflush(stdin);
    gets(v[0].situacao);

}

void editarVeiculo(veiculo v){

    puts("Digite numero da placa do carro:");
    fflush(stdin);
    gets(v[0].placa);
    puts("Digite o valor:");
    scanf("%f", &v[0].valor);
    puts("Digite a situacao:");
    fflush(stdin);
    gets(v[0].situacao);
}

void exibirVeiculo(veiculo v){
    
    printf("O placa do carro: %s\n", v[0].placa);
    printf("valor: %.2f\n", v[0].valor);
    printf("situacao: %s\n", v[0].situacao);
}

int main(){
    // Como foi solicitado eu fez 3 funções que tratava seu parametro como copia.
    //Não me fez muito sentindo por que não consigo rodar o programa e nem fazer alteração na stuck sem enviar a struck sem referencia.

    int choice;

    struct veiculo carro[1];

    do{
        puts("Digite 1 - Cadastrar carro");
        puts("Digite 2 - Alterar cadastro");
        puts("Digite 3 - Exibir cadastro");
        puts("Digite 0 - Para sair!");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                cadastrarVeiculo(carro);
                break;
            case 2:
                editarVeiculo(carro);
                break;
            case 3:
                exibirVeiculo(carro);
                break;
            case 0:
            	puts("Muito Obrigado pela Escolha. Se gostou?! Deixa seu like!");
            	break;
            default:
                puts("Escolha indefinida, tente novamente!");
                break;
        }

    } while(choice != 0);

    return 0;
}
