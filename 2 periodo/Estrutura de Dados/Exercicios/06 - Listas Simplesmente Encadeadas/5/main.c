/*05 – Crie um programa que possibilite ao usuário inserir endereços numa lista. Cada
endereço deve possuir nome da rua, número, complemento e bairro. Permita ao usuário
inserir elementos na lista, exibir a lista completa e remover o último elemento da lista.*/
#include"endereco.h"

int main(){
    LENDERECO *lista = criarlista();
    int escolha = 1;
    char rua[100];
    char bairro[100];
    char complemento[500];
    int num;

    while (escolha != 0){
        puts("Digite 1 - Adicionar endereco na lista.");
        puts("Digite 2 - Exibir lista");
        puts("Digite 0 - Para sair!");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome da rua:");
                fflush(stdin);
                gets(rua);
                puts("Digite o numero da casa:");
                scanf("%d", &num);
                puts("Digite o nome do bairro:");
                fflush(stdin);
                gets(bairro);
                puts("Digite o complemento:");
                fflush(stdin);
                gets(complemento);
                adicionarCEP(lista, rua, bairro, complemento, num);
                break;
            case 2:
                verCEPs(lista);
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Escolha invalida, tente novamente!");
                break;
        }
    }
    
    liberarLista(&lista);    

    return 0;
}
