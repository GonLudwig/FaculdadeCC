/*Um sistema operacional é composto por diversas partes, dentre as quais existem as
que cuidam da ordem em que os programas devem ser executados. Por exemplo, em
um sistema de computação de tempo compartilhado (“time-shared”) existe a
necessidade de manter um conjunto de processos em uma fila, esperando para serem
executados. Assuma que cada processo é representado por uma estrutura composta
por um número identificador do processo, além de outros elementos necessários para
essa atividade.
Escreva um programa que seja capaz de ler uma série de solicitações para:
a) Incluir novos processos na fila de processos;
b) Retirar da fila o processo com o maior tempo de espera;
c) Imprimir o conteúdo da lista de processo em determinado momento.*/
#include "tadProcesso.h"

int main(){
    FPROSS *fila = criarFilaProcesso();
    int escolha = 1;
    char nomePro[100];
    int numIdent;

    while (escolha != 0){
        puts("Digite 1 - Adicionar programa na fila.");
        puts("Digite 2 - Exibir filha.");
        puts("Digite 3 - Executar filha.");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome do programa");
                __fpurge(stdin);
                fgets(nomePro, 100, stdin);
                puts("Digite o numero de identificacao do programa");
                scanf("%d", &numIdent);
                adicionarFila(fila, nomePro, numIdent);
                break;
            case 2:
                exibirFila(fila);
                break;
            case 3:
                executarProcesso(fila);
                break;
            case 0:
                puts("Obrigado pela preferencia. Os processos restantes seram executados");
                break;
            default:
                puts("Escolha invalida, digite um valor valido!");
                break;
        }
    }
    
    liberarFila(&fila);
    return 0;
}