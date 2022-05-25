#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void preencheVetor(char *vetor,int tam){
  int i;
  
  for(i=0;i<tam;i++){
    vetor[i]='a'+(char)(rand()%26);
  }
}

int preencherStrings(){
    int i, j;
    int tamVetor = 5;
    int tamStrin = 5;
    char vetor[tamVetor][tamStrin];
    char aux[tamStrin];

    for (i = 0; i < tamVetor; i++){
        preencheVetor(aux,tamStrin);
        strcpy(vetor[i], aux);
    }
    

    for (i = 0; i < tamVetor; i++){
        for (j = 0; j < tamStrin; j++){
        printf("%c",vetor[i][j]);
        }
        printf("\n");
    }
}

// Juca

#define MAX 30
#define QTD 36

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

void radixSort(char** placas){
  char balde[QTD], letra;
  int contador[QTD], b, i, j, k, aux;

  for(i=0; i<QTD; i++){
    balde[i] = (char)malloc( MAX*sizeof(char*) );

    for(j=0; j<MAX; j++){
      balde[i][j] = (char*)malloc( 8*sizeof(char) );
    }
  }

  for(i=6; i>=0; i--){
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