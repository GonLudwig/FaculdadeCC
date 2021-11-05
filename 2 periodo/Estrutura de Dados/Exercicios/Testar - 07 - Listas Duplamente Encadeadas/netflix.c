/*02 – Após as últimas atualizações de software da Netflix, alguns bugs acabaram sendo
percebidos pelos usuários e fomos contratados para desenvolver uma tarefa.
Seu programa deve lidar com uma lista de episódios de uma série qualquer. Cada
episódio tem um número (1º, 2º 3º…) e um título.
Espera-se que seu programa ofereça as seguintes funcionalidades:
a) Cadastrar um episódio.
O usuário deverá informar apenas o título do episódio, o número será
calculado pelo próprio programa. Isso é, o primeiro episódio a ser cadastrado é o episódio
1, o segundo é o 2, o terceiro é o 3… A inserção é sempre no final da lista.
b) Remover um episódio
Seu programa remove o último episódio cadastrado na lista
c) Exibir Série
Seu programa exibe o número do episódio e o título. Além disso deve
oferecer para o usuário a possibilidade de ir ao próximo ou para o episódio anterior.
Se estiver exibindo o primeiro episódio, não deve oferecer a opção de
ir para o episódio anterior. Se estiver exibindo o último episódio, não deve oferecer opção
de ir para o próximo episódio.
A exibição sempre deve ser iniciada pelo primeiro episódio.*/
#include "tadNetflix.h"

int main() {
    int escolha = 1;
    char titulo[50];
    tipoLista *lista = criarSerie();

    while (escolha != 0) {
        puts("Bem Vindo ao novo sistema do NetFlix!");
        puts("Digite 1 - Adicionar Episodio.");
        puts("Digite 2 - Excluir Ultimo Episodio.");
        puts("Digite 3 - Exibir Serie.");
        puts("Digite 0 - Sair.");
        scanf("%d", &escolha);
        switch (escolha){
        case 1:
            puts("Digite o titulo do episodio.");
            __fpurge(stdin);
            gets(titulo);
            adicionarEpisodio(lista, titulo);
            break;
        case 2:
            excluirUltimoEpisodio(lista);
            break;
        case 3:
            exibirSerie(lista);
            break;
        case 0:
            puts("Adeus ate a proxima!");
            break;       
        default:
            puts("Escolha Invalida!");
            break;
        }
    }
    
    liberarLista(&lista);
    return 0;
}