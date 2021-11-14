/*A Microsoft está trabalhando no desenvolvimento de seu sistema operacional, o qual
será chamado de Windows 15. Ela tem procurado alguns jovens desenvolvedores para
trabalhar no projeto do sistema. Assim sendo, nos deu uma tarefa para desenvolvermos
uma parte do software.
Eles sabem que eventualmente, quando instalado em computadores antigos, os
programas apresentam alguma lentidão. Assim sendo, nos pediu para desenvolvermos
uma fila de programas. Trata-se de uma fila que é alimentada a medida em que o usuário
desejar abrir um programa novo. Leia:
O sistema operacional oferece na área de trabalho uma série de programas que o
usuário poderá abrir. Sabe-se que o processo de iniciar um programa é demorado, e
enquanto o sistema se preocupa com outras tarefas, ele espera o usuário ir ‘juntando’
programas para abrir todos de uma vez.
Seu programa deve funcionar da seguinte forma:
•
Oferecer um menu com os programas disponíveis para serem abertos, O
usuário não informa o nome do programa, apenas informa um código do
menu para abrir o programa desejado. Os programas disponíveis são:
(Chrome, Firefox, Word, Excel, PowerPoint, Photoshop, CorelDraw,
Evernote, Spotify, Premiere, AutoCad e uTorrent)
•
O usuário deve informar qual o programa (da lista acima) deseja abrir, seu
programa deve inserir o nome do programa na fila.
•
Quando a fila tiver três programas, ele deve automaticamente parar tudo, e
exibir o nome dos programas que estão sendo iniciados, na ordem em que
foram inseridos na fila. Isso inclui ir retirando os programas da fila de
execução.
•
Oferecer no menu uma possibilidade para que o usuário execute a fila a
qualquer momento*/
#include "windows15.h"

int main(){
    FEXE *fila = criarFilaExe();
    int escolha = 1;
    int qtdProg = 0;
    char nomeProg [100];

    while (escolha != 0){
        puts("Winodws 15");
        puts("Digite 1 - Adicionar o programa para serem executados.");
        puts("Digite 2 - Executar os programas.");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o codigo do programa desejado.");
                puts("Digite 1 - Chrome");
                puts("Digite 2 - Firefox");
                puts("Digite 3 - Word");
                puts("Digite 4 - Excel");
                puts("Digite 5 - PowerPoint");
                puts("Digite 6 - Photoshop");
                puts("Digite 7 - CorelDraw");
                puts("Digite 8 - Evernote");
                puts("Digite 9 - Spotify");
                puts("Digite 10 - Premiere");
                puts("Digite 11 - AutoCad");
                puts("Digite 12 - uTorrent");
                scanf("%d", &escolha);
                if(escolha < 13 && escolha > 0){
                    adicionarExe(fila, escolha);
                } else {
                    puts("Escolha Invalida");
                }
                break;
            case 2:
                break;
            case 0:
                break;
            default:
                break;
        }

    }
    
    return 0;
}