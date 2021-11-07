/*Escreva um programa que simule o controle de uma pista de decolagem de aviões em
um aeroporto. Considere que os aviões possuem um nome e um número inteiro como
identificador. Adicione outras características conforme achar necessário. Neste
programa, o usuário deve ser capaz de realizar as seguintes tarefas:
a) Listar o número de aviões aguardando na fila de decolagem;
b) Autorizar a decolagem do primeiro avião da fila;
c) Adicionar um avião à fila de espera;
d) Listar todos os aviões na fila de espera;
e) Listar as características do primeiro avião da fila.*/
#include "tadAviao.h"

int main(){
    FVOO *fila = criarFilaDecolagem();
    int escolha = 1;
    char destino[100];
    int numIdent;

    while (escolha != 0){
        puts("Digite 1 - Adicionar aviao na fila.");
        puts("Digite 2 - Exibir filha.");
        puts("Digite 3 - Autorizar decolagem.");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o destino");
                __fpurge(stdin);
                fgets(destino, 100, stdin);
                puts("Digite o numero de identificacao do aviao");
                scanf("%d", &numIdent);
                adicionarFila(fila, destino, numIdent);
                break;
            case 2:
                exibirFila(fila); // A e D foram colocadas juntas
                break;
            case 3:
                autorizarDecolagem(fila); // B e E foram colocadas juntas
                break;
            case 0:
                puts("Obrigado pela preferencia. Os processos restantes seram executados");
                break;
            default:
                puts("Escolha invalida, digite um valor valido!");
                break;
        }
    }
    
    liberarFila(&fila);
    return 0;
}