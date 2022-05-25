#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void preencheVetor(char *vetor,int tam){
  int i;
  
  for(i=0;i<tam;i++){
    vetor[i]='a'+(char)(rand()%26);
  }
}

int main(){
  char **string;
  int 
}

int *geraString(int qtd, int letras){
  char **array = (char**)malloc(qtd*sizeof(char*));
  int i, j;

  for(i=0; i<qtd;i++){
    array[i] = (char*)malloc(qtd*sizeof(char));
    for(j=0;j<letras;j++){
      vetor[i][j]='a'+(char)(rand()%26);
      if(j == letra-1){
        vetor[i][j] = '\0';
      }
    }
  }
}