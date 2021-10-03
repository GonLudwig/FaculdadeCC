#include "megasena.h"

struct loteria {
    int num;
};

struct listaLoteria {
    int soteiroMes[4][12];
    struct loteria megaSena[48];
};


ListLoteria *criarMegaSena(){
    ListLoteria *mega = (ListLoteria*) calloc(1, sizeof(ListLoteria));
    
    return mega;
}

void sortearNumeros(ListLoteria *mega){
    int i, j;
    int k = 0;

    for(i=0;i<4;i++){
        for (j=0;j<12;j++){
        	int sorteiro = rand() %100;
            mega->megaSena[k].num = sorteiro;
            mega->soteiroMes[i][j] = sorteiro;
            k++;
        }
        
    }
}

void exibirSemanaMes(ListLoteria *mega, int semana){
    int i;

    printf("Os numero sortedos na semana %d do mes\n", semana);
    puts("Foram os numeros:");
    printf(" 1 Seguencia da semana:");
    for (i=0;i<6;i++) {
        printf(" %d ", mega->soteiroMes[semana-1][i]);
    }
    printf("\n 2 Seguencia da semana:");
    for (i=6;i<12;i++) {
        printf(" %d ", mega->soteiroMes[semana-1][i]);
    }
    puts("");
}

void exibirMes(ListLoteria *mega){
    int i, j;

    for(i=0;i<4;i++){
        printf("Os numero sortedos na semana %d do mes\n", i+1);
        puts("Foram os numeros:");
        printf(" 1 Seguencia da semana:");
        for (j=0;j<6;j++) {
            printf(" %d ", mega->soteiroMes[i][j]);
        }
        printf(" 2 Seguencia da semana:");
        for (j=6;j<12;j++) {
            printf(" %d ", mega->soteiroMes[i][j]);
        }
        puts(""); 
    }
}

void liberarMega(ListLoteria *mega){
    free(mega);
}
