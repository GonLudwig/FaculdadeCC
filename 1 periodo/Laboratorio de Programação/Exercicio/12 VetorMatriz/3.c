/*03 – Peça ao usuário que preencha um vetor de 5 letras. Exiba na tela qualquer letra que
for repetida.*/

#include <stdio.h>

char checkRepeat(char *vet) {
    int repeat=0, i, j;

    for(i=0; i<5; i++) {
        repeat = 0;
        for(j=i; j<5; j++){
            if (vet[i] == vet[j] && i != j) {
                repeat++;
                i++;
                //printf("A letra %c se repetiu %d\n", vet[i], repeat);
            }
        }
        printf("A letra %c se repetiu %d\n", vet[i], repeat);
    }

    return 0;
}

int main () {
    char vetChar[5];
    int i;

    puts("Digite 5 letras:");
    for(i=0; i<5; i++) {
        printf("Digite a %d letra:", i+1);
        scanf("%s", &vetChar[i]);
    }

    checkRepeat(vetChar);
}

