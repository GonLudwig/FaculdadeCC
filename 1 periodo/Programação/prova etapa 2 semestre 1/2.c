/*2) (10,00) Escreva um programa para preencher um vetor de 5 posições com números
inteiros. Cada posição do vetor precisa ser preenchida após o usuário digitar um nome, pois
a posição será preenchida com a quantidade de caracteres do nome. Dessa forma, o
programa deverá calcular o número de letras de cada nome e colocar a quantidade de letras
do primeiro nome na primeira posição do vetor, a quantidade de letras do segundo nome na
segunda posição do vetor... a quantidade de letras do quinto nome na quinta posição do
vetor. Ao término o programa deverá passar o vetor para ser impresso numa função.*/

#include <stdio.h>

int countWord(char *word, int *vetNum, int num) {
    int count = 0;

    while (word[count] != '\0') {
        count++;
    }
    
    vetNum[num] = count;
    
    return 0;
}

int printVetCount(int *vetNum){
    int i;

    for (i=0; i<5; i++) {
        printf("O nome %d tem %d letras\n", i+1, vetNum[i]);
    }
}

int main () {
    int numWord[5], i;
    char newWord[20];


    for (i=0; i<5; i++) {
        puts("Digite uma palavra:");
        gets(newWord);
        countWord(newWord, numWord, i);
    }

    printVetCount(numWord);

}
