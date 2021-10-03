#include"jogo.h"

int main(){
    char jogador[100];
    int ganhador = 0;
    int escolha;
    int repetida = 0;
	
	VELHA *jogoVelha;
    PESSOA *p1;
    PESSOA *p2;

    printf("Qual e o nome do jogador1:");
    gets(jogador);
    p1 = criarPessoa(jogador);

    printf("Qual e o nome do jogador2:");
    gets(jogador);
    p2 = criarPessoa(jogador);
    
    jogoVelha = iniciarJogo();

    while (ganhador == 0) {

        exibirVelha(jogoVelha, p1, p2);

        puts("Jogador1 escolha uma posicao:");
        scanf("%d", &escolha);
        repetida = preencherVelhaJogador1(jogoVelha, escolha);
        while (repetida == 0) {
            puts("Numero preenchido ja foi escolhido.");
            puts("Digite um numero diferente!");
            scanf("%d", &escolha);
            repetida = preencherVelhaJogador1(jogoVelha, escolha);
        }

        ganhador = vencedor(jogoVelha, p1, p2);

        if (ganhador == 0) {
            puts("Jogador2 escolha uma posicao:");
            scanf("%d", &escolha);
            repetida = preencherVelhaJogador2(jogoVelha, escolha);
            while (repetida == 0) {
                puts("Numero preenchido ja foi escolhido.");
                puts("Digite um numero diferente!");
                scanf("%d", &escolha);
                repetida = preencherVelhaJogador2(jogoVelha, escolha);
            }

            ganhador = vencedor(jogoVelha, p1, p2);
        } 
    }


    liberarJogo(jogoVelha);
    liberarPessoa(p1);
    liberarPessoa(p2);
}