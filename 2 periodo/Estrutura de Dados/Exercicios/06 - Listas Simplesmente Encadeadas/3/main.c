/*03 – Permita que o usuário cadastre vários vídeos numa lista para serem assistidos mais
tarde. Possibilite que o usuário escolha um vídeo para ser assistido, contabilizando assim
uma visualização a mais para o vídeo. Quando o usuário quiser, informe qual vídeo possui
mais visualizações.*/
#include"video.h"

int main(){
    LVIDEO *lista =criarlista();
    int escolha = 1;
    char nomeVideo[500];

    while (escolha != 0){
        puts("Digite 1 - Adicionar video na lista.");
        puts("Digite 2 - Exibir video");
        puts("Digite 0 - Para sair!");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome do video:");
                fflush(stdin);
                gets(nomeVideo);
                adicionarVideo(lista, nomeVideo);
                break;
            case 2:
                verVideo(lista);
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