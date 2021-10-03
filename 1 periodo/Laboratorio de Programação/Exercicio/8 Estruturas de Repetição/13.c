/*Solicite do usuário vários números de modo que a cada vez que ele digitar, pergunte
se ele deseja digitar mais, ou deseja ver o resultado. Quando ele desejar ver o resultado,
exiba a média aritmética entre eles.*/

#include<stdio.h>

int main () {
    int num, divisionNum, sumNum, arithmetic;

    puts("Digite numeros para desconbrir sua media aritimetica");
    do {
        scanf("%d", &num);
        puts("Se voce que saber a media aritimetica digite - 0");
        puts("Caso queria continuar digitando numeros para a media, digite o valor desejado:");
        divisionNum++;
        sumNum += num;
    } while (num != 0);

    arithmetic = sumNum / (divisionNum - 1);

    printf("A media aritimetica entre os numero e:%d", arithmetic);
    return 0;
}
