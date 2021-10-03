#include "post.h"

int main () {
    POST *fotoDaPraia;
    char legenda[300];
    int escolha = 1;

    fotoDaPraia = criarPost();

    puts("Qual legenda deseja adicionar na foto ?");
    fflush(stdin);
    gets(legenda);
    addLegenda(fotoDaPraia, legenda);

    while(escolha != 0 ) {
        puts("Digite o numero para a opcao desejada.");
        puts("1 - Curti a foto!");
        puts("2 - Comentar a foto!");
        puts("3 - Compartilhar a foto!");
        puts("0 - Sair!");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                curtiFoto(fotoDaPraia);
                break;
            case 2:
                comentarFoto(fotoDaPraia);
                break;
            case 3:
                compartilharFoto(fotoDaPraia);
                break;
            case 0:
                break;
            default:
                puts("Digite um valor de escolha valido!");
                break;
        }
    }

    exibirFoto(fotoDaPraia);

    liberarFoto(fotoDaPraia);
}
