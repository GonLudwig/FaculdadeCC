/*1. Você foi contratado para desenvolver um jogo para uns monges que estão tentando mover
7 discos de tamanhos diferentes de uma pilha (início) para outra pilha (final), usando uma
terceira pilha como auxiliar, de tal forma que nunca um disco maior pode ser colocado
sobre um disco menor.
a) Escreva um programa que calcula o movimento de n discos (de acordo com as regras
estabelecidas e políticas da pilha) e que utilize 3 pilhas para essa solução.
b) Você pode utilizar números, letras ou mesmo criar seu TAD para representar os discos.
c) O nome de cada monge fica armazenado numa fila de jogadores e deve ser escolhido
antes de cada rodada para realizar a jogada obedecendo as políticas da estrutura de
dados Fila.
d) A pontuação obtida por cada monge numa partida fica armazenada numa lista de
pontos. De tal forma que se existir m monges cadastrados na fila de jogadores deverá
existir também m pontuações na lista de pontos, uma para cada monge.
e) Considere +3 pontos na lista de pontos do monge/jogador da rodada para cada disco
que ele colocar corretamente na pilha final. Considere -3 pontos na lista de pontuação
do monge/jogador da rodada para cada disco que for retirado da pilha final. Discos
colocados e retirados das pilhas auxiliar e início não somam nem subtraem pontos.
f) Mostre a cada jogada um relatório contendo: o nome do monge, a quantidade de
movimentos realizado, a pontuação atualizada do monge, a origem e o destino do
disco na jogada atual. (A origem é de qual pilha o disco sai e o destino é para qual
pilha o disco vai).*/
#include "hanoi.h"

int main (){
    int escolha = 1;
    char nMonge[100];

    FMONGE *fMonge = criarFilaMonge();
    PTORRE *tInicial = criarTorreHanoi();
    PTORRE *tAuxiliar = criarTorreHanoi();
    PTORRE *tFinal = criarTorreHanoi();

    puts("O Teste dos Monges!!!");
    while (escolha != 0){
        puts("Digite 1 - Adicionar Monge na fila.");
        puts("Digite 2 - Iniciar o jogo");
        puts("Digite 0 - Sair.");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome do Monge");
                __fpurge(stdin);
                fgets(nMonge, 100, stdin);
                adicionarMonge(fMonge, nMonge);
                break;
            case 2:
                iniciarTorreHanoi(tInicial, tFinal, tAuxiliar);
                if(fMonge == NULL){
                    puts("Voce deve criar a lista de monge");
                    break;
                } else{
                    jogarTorreHanoi(fMonge, tInicial, tFinal, tAuxiliar);
                }
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Escolha invalida!");
                break;
        }
    }
    

    liberarFila(&fMonge);
    liberarTorre(&tInicial);
    liberarTorre(&tAuxiliar);
    liberarTorre(&tFinal);
    return 0;
}