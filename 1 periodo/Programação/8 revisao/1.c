/*1) (2,0) Escreva uma função para um programa que intercala os valores de dois vetores
inteiros crescentes de mesmo tamanho em um terceiro vetor, em ordem crescente.
Exemplo:
v1 = {1, 3, 5, 5, 7, 9, 10}
v2 = {2, 2, 4, 6, 8, 8, 10}
v3 = {1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 8, 9, 10, 10}*/

#include <stdio.h>

int crescente (int *vet) {
    int i, j, k=0, maior = 0, len = 0;

    while (vet[len] != '\0'){
        len++;
    }
    len--;

    int testVet[len];

    for(i=0; i < len; i++){
    	if (vet[i] > maior) {
        	maior = vet[i];
    	}
	}
	
    for (i=0; i<=maior; i++) {
        for (j=0; j<len; j++) {
            if (i == vet[j]){
                testVet[k] = vet[j];
                k++;
            }
        }
    }
    
    for(i=0; i<k; i++) {
        vet[i] = testVet[i];
    }
}

int conCat(int *vetOne, int *vetTwo, int *vetThree){
    int len1 = 0, len2 = 0, len = 0, i;

    while (vetOne[len1] != '\0'){
        len1++;
        len++;
    }

    while (vetTwo[len2] != '\0'){
        len2++;
        len++;
    }

    for(i=0; i<len1; i++){
        vetThree[i] = vetOne[i];
    }

    for(i=0; i<len2; i++){
        vetThree[len1] = vetTwo[i];
        len1++;
    }
}

int main () {
    int v1[7] = {1, 3, 5, 5, 7, 9, 10};
	int v2[7] = {2, 2, 4, 6, 8, 8, 10};
    int v3[14], i;
    
    conCat(v1, v2, v3);
    
    crescente(v3);

    for(i=0; i<14; i++) {
        printf("%d ", v3[i]);
    }

    return 0;
}
