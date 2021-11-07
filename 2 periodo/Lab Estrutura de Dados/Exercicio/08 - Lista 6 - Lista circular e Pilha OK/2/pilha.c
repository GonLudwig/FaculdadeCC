/*Repita a pesquisa da primeira questão, mas considere também a existência de uma
estrutura do tipo pilha, desse modo, quando o usuário fizer uma pesquisa, o topo da
pilha deverá ser consultado para verificar se o site encontra-se lá.
a) Caso o site esteja no topo da pilha, imprima uma mensagem: “Site no topo da
pilha” e em seguida remova-o de lá;
b) Caso o site não esteja no topo, busque-o na lista (questão 1) e se o encontrar na
lista insira-o na pilha.*/
#include "tadPilha.h"

int main() {
    int escolha = 1;
    char url[200];
    PSITES *pSites = criarPilhaSites();
    LSITES *lSites = criarListaSites();

    while (escolha != 0){
        puts("Digite 1 - Adicionar URL na lista.");
        puts("Digite 2 - Verificar URL pilha.");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite a URL");
                __fpurge(stdin);
                fgets(url, 200, stdin);
                adicionarLista(lSites, url);
                break;
            case 2:
                puts("Digite a URL que deseja procurar na pilha");
                __fpurge(stdin);
                fgets(url, 200, stdin);
                verificarPilha(lSites, pSites, url);
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Valor digitado invalido, tente um valor valido!");
                break;
        }
    }

    liberarLista(&lSites);
    liberarPilha(&pSites);

    return 0;
}