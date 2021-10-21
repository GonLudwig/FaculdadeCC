/*02 – Crie uma lista de exercícios. Cada exercício deve conter um texto e um valor (uma
pontuação). Exiba todos os exercícios na ordem em que foram inseridos.*/

#include"exercicio.h"

int main(){
    LEXERC *lista = criarlista();
    int pontos, escolha = 1;
    char nomeExerc [500];

    while (escolha != 0){
        puts("Digite 1 - Adicionar exercicio na lista.");
        puts("Digite 2 - Exibir exercicios");
        puts("Digite 0 - Para sair!");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome do exercicio:");
                fflush(stdin);
                gets(nomeExerc);
                puts("Digite a quantidade de pontos do exercicio:");
                scanf("%d", &pontos);
                adicionarExercicio(lista, nomeExerc, pontos);
                break;
            case 2:
                exibirExercicios(lista);
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
