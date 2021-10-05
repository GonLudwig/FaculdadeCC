/*1. Utilizando TAD e a independência de representações, implemente uma lista
simplesmente encadeada L1 representando uma sequência de caracteres.
Construa funções para criar a lista, inserir elementos na lista e imprimir a
sequência de caracteres da lista na ordem inversa.*/
#include "TadListEnc.h"

int main(){
    int escolha = 1;
    int num;

    ListaNum *lista = criarLista();
    puts("Criar Lista!");

    while(escolha != 0){
        puts("Digite 1 - Adicionar numero a lista");
        puts("Digite 2 - Exibir a lista");
        puts("Digite 0 - Finalizar a lista");
        scanf("%d", &escolha);
        while (escolha > 2 || escolha < 0) {
            puts("Escolha Invalida! Tente Novamente.");
            puts("Digite 1 - Adicionar numero a lista");
            puts("Digite 2 - Exibir a lista");
            puts("Digite 0 - Finalizar a lista");
            scanf("%d", &escolha);
        }
        switch (escolha) {
            case 1:
                puts("Digite o numero que deseja adicionar a lista:");
                scanf("%d", &num);
                adicionarNumLista(lista, num);
                break;
            case 2:
                exibirListaInv(lista);
                break;
            default:
                puts("Obrigado pela preferencia !!!");
                break;
        }

    }

    liberarLista(&lista);
}