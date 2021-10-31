/*Repita a pesquisa da primeira questão, mas considere também a existência de uma
estrutura do tipo pilha, desse modo, quando o usuário fizer uma pesquisa, o topo da
pilha deverá ser consultado para verificar se o site encontra-se lá.
a) Caso o site esteja no topo da pilha, imprima uma mensagem: “Site no topo da
pilha” e em seguida remova-o de lá;
b) Caso o site não esteja no topo, busque-o na lista (questão 1) e se o encontrar na
lista insira-o na pilha.*/
#include "tadPilha.h"

int main (){
    LSITES *lista = criarListaSites();
    int escolha = 1;
    char url[200];

    while (escolha != 0){
        puts("Digite 1 - Adicionar URL na lista.");
        puts("Digite 2 - Exibir lista.");;
        puts("Digite 0 - Sair.");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite a URL que deseja adicionar!");
                fflush(stdin);
                gets(url);
                adicionarLista(lista, url);
                break;
            case 2:
                if (lista == NULL){
                    puts("Lista esta vazia, voce deve adicionar numeros a lista");
                } else {
                    exibirUrl(lista);
                }
                break;
            case 0:
                puts("Obrigado por utilizar o programa!!!");
                break;
            default:
                puts("Escolha invalida, tente uma escolha valida!");
                break;
        }
    }
    liberarLista(&lista);
    return 0;
}