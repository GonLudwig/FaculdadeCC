#include"jogo.h"

int main(){
    char jogador[100];
    int escolha;
    int ganhador = 0;
    int repetida = 0;
	
	VELHA *jogoVelha = iniciarJogo();
    PESSOA *p1;
    PESSOA *p2;

    printf("Qual e o nome do jogador 1: ");
    gets(jogador);
    p1 = criarPessoa(jogador);

    printf("Qual e o nome do jogador 2: ");
    gets(jogador);
    p2 = criarPessoa(jogador);
    
    while (ganhador == 0) {

        exibirVelha(jogoVelha, p1, p2);

        puts("\nJogador1 escolha uma posicao: ");
        scanf("%d", &escolha);
        repetida = preencherVelhaJogador1(jogoVelha, escolha);
        while (repetida != 0) {
            puts("Numero preenchido ja foi escolhido. ");
            puts("Digite um numero diferente!");
            scanf("%d", &escolha);
            repetida = preencherVelhaJogador1(jogoVelha, escolha);
        }

        ganhador = vencedor(jogoVelha, p1, p2);

        if (ganhador == 0) {
            puts("Jogador2 escolha uma posicao:");
            scanf("%d", &escolha);
            repetida = preencherVelhaJogador2(jogoVelha, escolha);
            while (repetida != 0) {
                puts("Numero preenchido ja foi escolhido. ");
                puts("Digite um numero diferente!");
                scanf("%d", &escolha);
                repetida = preencherVelhaJogador2(jogoVelha, escolha);
            }

            ganhador = vencedor(jogoVelha, p1, p2);
        }
        
        
        if(ganhador == 1){
        	printf("Deseja jogar novamente?\n1- Jogar novamente  -  0- Sair\n");
			scanf("%d", &escolha);
			while(escolha != 1 && escolha != 0){
				printf("Digite uma escolha valida\n");
				printf("Deseja jogar novamente?\n1- Jogar novamente  -  0- Sair\n");
				scanf("%d", &escolha);
			}
		
			switch(escolha){
				case 1:
					jogoVelha = iniciarJogo();
					ganhador = 0;
					break;
				default:
					printf("Obrigado por jogar!");
					break;				
			}
		}
    }
    
    liberarJogo(jogoVelha);
    liberarPessoa(p1);
    liberarPessoa(p2);
}
