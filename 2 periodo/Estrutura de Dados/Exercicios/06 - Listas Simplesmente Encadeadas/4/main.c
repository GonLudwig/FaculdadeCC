/*04 – Permita que o usuário insira itens em uma lista de compras. Seu programa deve
possibilitar que o usuário faça a inserção e visualização da lista completa. Além disso, seu
programa deve possibilitar a remoção do primeiro item da lista.*/
#include"compras.h"

int main(){
    LCOMPRAS *lista =criarlista();
    int escolha = 1;
    char item[100];

    while (escolha != 0){
        puts("Digite 1 - Adicionar item na lista.");
        puts("Digite 2 - Exibir lista");
        puts("Digite 0 - Para sair!");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome do item:");
                fflush(stdin);
                gets(item);
                adicionarProduto(lista, item);
                break;
            case 2:
                verCompras(lista);
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