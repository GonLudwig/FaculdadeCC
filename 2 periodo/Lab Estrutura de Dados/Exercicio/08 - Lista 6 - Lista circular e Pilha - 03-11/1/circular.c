/* Considere uma coleção de nomes de sites da internet com seus respectivos links. Crie
uma estrutura para armazená-los em uma lista circular. Implemente funções para
que, dado o nome do site seja feita uma busca retornando seu link correspondente na
lista. A busca deve ocorrer nos dois sentidos e deve-se mostrar em qual deles o link
será encontrado mais rápido.*/
#include "tadCircular.h"

int main (){
    LSITES *lista = criarListaSites();
    int escolha = 1;
    char url[200];

    while (escolha != 0){
        puts("Digite 1 - Adicionar URL na lista.");
        puts("Digite 2 - Exibir lista.");
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