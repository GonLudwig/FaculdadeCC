/*Implemente um TAD com independência de representações para uma lista
simplesmente encadeada L1 representando uma sequência de números da MegaSena 
sorteados em um mês de modo que o 1º número sorteado seja o primeiro
item da lista e o 48º número sorteado seja o último item da lista. Implemente
funções para: 
◦ Mostrar os números sorteados em uma determinada semana do mês;
◦ Mostrar os números sorteados no mês;
◦ Necessárias para o correto funcionamento do programa*/
#include "megasena.h"

int main(){
    int escolha;
    
    puts("MEGA SENAA!!!");

    ListLoteria *mega = criarMegaSena();

    sortearNumeros(mega);


    puts("Deseja exibir os numeros de qual semana ?");
    puts("Semana 1, 2, 3 ou 4?");
    scanf("%d", &escolha);
    while(escolha > 4 || escolha < 1){
        puts("Escolha errada, o mes so pussui 4 semana.");
        puts("Escolha outro numero da semana existente no mes");
        scanf("%d", &escolha);
    }
    exibirSemanaMes(mega, escolha);

    exibirMes(mega);
    liberarMega(mega);

    return 0;
}