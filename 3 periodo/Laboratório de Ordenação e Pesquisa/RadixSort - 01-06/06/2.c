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