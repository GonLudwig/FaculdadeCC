#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define QTD 36

char **geraString(int n, int m){
  char **array = (char**)malloc(n*sizeof(char*));
  int i, j;

    for(i=0; i< n;i++){
        array[i] = (char*)malloc(n*sizeof(char));
        for(j=0;j<m;j++){
            array[i][j]='A'+(char)(rand()%26);
        }
        if(j == m){
            array[i][j] = '\0';
        }
    }

  return array;
}

int encontrarBalde( char letra ){
    int numero = (int)letra;
    if( numero <= 57 ){
        numero -= 48;
    }
    else{
        numero -= 55;
    }
    return numero;
}

void radixSort(char **placas, int MAX, int m){
    char **balde[QTD], letra;
    int contador[QTD], b, i, j, k, aux;

    for(i=0; i<QTD; i++){
        balde[i] = (char**)malloc( MAX*sizeof(char*) );

        for(j=0; j<MAX; j++){
            balde[i][j] = (char*)malloc( m*sizeof(char) );
        }
    }

    for(i=m-1; i>=0; i--){
        for(j=0; j<QTD; j++){
            contador[j] = 0;
        }

        for(j=0; j<MAX; j++){
            letra = placas[j][i];
            b = encontrarBalde(letra);
            strcpy( balde[b][contador[b]], placas[j] );
            contador[b]++;
        }

        aux = 0;
        for(j=0; j<QTD; j++){
            if( contador[j] != 0 ){
                for(k=0; k<contador[j]; k++){
                    strcpy( placas[aux++], balde[j][k] );
                }
            }
        }
    }
}

int main(){
    int i, j, n, m;

    puts("Escola a quantidade de palavra:");
    scanf("%d", &n);
    puts("Escola a quantidade de letras deve possuir cada palavra:");
    scanf("%d", &m);

    char **string = (char**)malloc(n*sizeof(char*));
    string = geraString(n,m);

    puts("Antes de ordenar");
	for (i = 0; i < n; i++){
		printf("%s \n", string[i]);
	}

    radixSort(string, n, m);

    puts("Depois de ordenar");
	for (i = 0; i < n; i++){
		printf("%s \n", string[i]);
	}   

    for (i = 0; i < n ; i++){
		free(string[i]);
	}
	free(string);
}
