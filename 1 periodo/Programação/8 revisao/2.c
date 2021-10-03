/*2) (2,0) As moléculas de DNA podem ser representadas por cadeias de caracteres que
usam um alfabeto de 4 letras: A (Adenina), C (Citosina), T (Timina) e G (Guanina). Crie
uma função e um programa que utilize essa função, que procure ocorrências de uma
subcadeia de DNA dentro de uma outra cadeia de DNA. Você deverá procurar somente
ocorrências diretas. Por exemplo, se:
cadeia = TCATATGCAAATAGCTGCATACCGA
subcadeia = CATA
Então a subcadeia ocorre na forma direta na posição 2 e na posição 18 da cadeia
principal.*/

#include <stdio.h>
#include <string.h>

char dna(char *vet, char *subvet) {
    int numVet, i;
    char test[4];

    numVet = strlen(vet);

    for (i=0; i<numVet; i++){
        test[0] = vet[i];
        test[1] = vet[1+i];
        test[2] = vet[2+i];
        test[3] = vet[3+i];
        if (strcmp(test, subvet) == 0){
            printf("A subcadeia de DNA se apresanta na  posicao %d\n", i+1);

        }
    }
    

    return 0;
}

int main () {
    char cadeia[25] = {'T','C','A','T','A','T','G','C','A','A','A','T','A','G','C','T','G','C','A','T','A','C','C','G','A'};
    char subcadeia[4]= {'C','A','T','A'};

    dna(cadeia, subcadeia);
    
    return 0;
}
