/*01 – Crie uma lista de filmes contendo informações do nome do filme, diretor e duração.
Permita que os usuários insiram vários filmes e exiba aquele que tem a maior duração.*/
#include "filmes.h"

int main(){
    LFILME *lista = criarlista();
    int escolha = 1, duracao;
    char filme[100], diretor[100];

    
    while (escolha != 0){
        puts("Digite 1 - Adicionar filme na lista.");
        puts("Digite 2 - Exibir filme com maior duracao.");
        puts("Digite 0 - Para sair!");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome do filme:");
                fflush(stdin);
                gets(filme);
                puts("Digite nome o diretor:");
                fflush(stdin);
                gets(diretor);
                puts("Digite a duracao do filme em minutos");
                scanf("%d", &duracao);
                adicionarFilme(lista, filme, diretor, duracao);
                break;
            case 2:
                exibirMaiorDuracao(lista);
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
}