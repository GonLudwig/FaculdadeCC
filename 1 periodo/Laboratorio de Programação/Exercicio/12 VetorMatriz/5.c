/*05 – Peça ao usuário que preencha um vetor de 10 posições. Pergunte ao usuário se
deseja exibi-lo do começo ao fim ou do fim ao começo. Utilize laços while e switch case.*/

#include <stdio.h>

int main(){
    int vetNum[10], i, choice = 0;
    
    puts("Digite 10 valores");
	for(i=0; i<10; i++) {
    	printf("Digite o %d valor:", i);
    	scanf("%d", &vetNum[i]);
	}

    do {
        puts("Digite 1 para exibi-los do inicio ao fim.");
        puts("Digite 2 para exibi-los do fim ao inicio.");
        scanf("%d", &choice);
    }while(choice != 1 && choice != 2);

    switch(choice) {
        case 1:
            i = 0;
            printf("Ordem do inicio ao fim: ");
            while (i<10){
                printf("%d ", vetNum[i]);
                i++;
            }
            break;
        case 2:
            i = 9;
            printf("Ordem do fim ao inicio: ");
            while (i>=0){
                printf("%d ", vetNum[i]);
                i--;
            }
            break;
    }

}
