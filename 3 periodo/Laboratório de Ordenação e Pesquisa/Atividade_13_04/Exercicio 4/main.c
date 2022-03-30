#include"4_5.h"

int main(){
    LESTADOCOVID *lista;
    int escolha = 1;
    int casos, mortes, regiao;
    char nomeEstado[2];
    int tamanho = 2;

    lista = criarListaEstado();

    while(escolha != 0){
        puts("Digite 1 - Adicionar os dados de covid do estado.");
        puts("Digite 2 - Ordenar por casos confirmados.");
        puts("Digite 3 - Ordenar por total de mortes.");
        puts("Digite 4 - Ordenar estado de forma alfabetica.");
        puts("Digite 5 - Ordenar estado e regiado de forma alfabetica.");
        puts("Digite 6 - Imprir a lista.");
        puts("Digite 0 - Para sair.");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o numero de casos:");
                scanf("%d", &casos);
                puts("Digite o numero de mortes:");
                scanf("%d", &mortes);
                puts("Digite as duas silgas do estado:");
                fgets(nomeEstado, tamanho, stdin);
                puts("Digite o numero para referencia da regiao:");
                puts("Digite 1 - Norte");
                puts("Digite 2 - Nordeste");
                puts("Digite 3 - Centro-Oeste");
                puts("Digite 4 - Sudeste");
                puts("Digite 5 - Sul");
                scanf("%d", &regiao);
                adicionarEstado(lista, casos, mortes, nomeEstado, regiao);
                break;
            case 2:
                ordenarCasosConfirmados(lista);
                break;
            case 3:
                ordenarTotalMortes(lista);
                break;
            case 4:
                ordenarPorEstado(lista);
                break;
            case 5:
                ordenarPorEstadoRegiao(lista);
                break;
            case 6:
                imprimirLista(lista);
                break;
            case 0:
                puts("Obrigado por utilizar o sistema");
                break;
            default:
                puts("Por favor escolha uma opcao valida");
                break;
        }
    }

    liberarLista(&lista);
    return 0;
}