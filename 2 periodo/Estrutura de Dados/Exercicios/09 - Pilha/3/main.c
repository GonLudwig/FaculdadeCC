/*03 – A RDCMO(Rádio da Cidade de Massachusetts do Oeste) tem sempre nos contratado
para prestar serviços. Seu radialista vai sair de férias e a rádio pediu a ele que enviasse a
lista de músicas para serem tocadas nas madrugadas.
A medida em que ele se lembra das músicas, ele as anota numa pilha. Crie um
programa que permita que o radialista informe o nome da música e a duração da mesma
em minutos.
Seu programa deve sempre exibir o tempo total que está armazenado na pilha.
Uma vez por dia a rádio resolve executar parte da pilha de músicas. O usuário informa a
quantidade de tempo a ser tocado, e seu programa exibe as músicas (desempilhando-as)
e recalculando o tempo empilhado.
Se em algum momento não houverem músicas suficientes para serem tocadas,
exiba essa informação ao usuário e toque as músicas que puder. Durante a execução,
não é possível inserir mais músicas na pilha.*/
#include"musica.h"

int main(){
    PMUSICA *pMusica;
    int escolha = 1;
    int duracaoMusica;
    char musica[50];

    pMusica = pilhaMusica();

    while (escolha != 0){
        puts("RDCMO (Rádio da Cidade de Massachusetts do Oeste)!");
        puts("Digite 1 - Adicionar musica.");
        puts("Digite 2 - tocar musicas.");
        puts("Digite 0 - Sair.");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Qual nome da musica.");
                __fpurge(stdin);
                fgets(musica, 50, stdin);
                puts("Qual duracao da musica.");
                scanf("%d", &duracaoMusica);
                adicionarMusica(pMusica, duracaoMusica, musica);
                break;
            case 2:
                puts("Digite tempo para tocar as musicas.");
                scanf("%d", &duracaoMusica);
                tocarMusica(pMusica, duracaoMusica);
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Escolha invalida!");
                break;
        }
    }
    
    liberarConta(&pMusica);
    return 0;
}