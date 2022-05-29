#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char **geraString(int n, int m){
  char **array = (char**)malloc(n*sizeof(char*));
  int i, j;

  for(i=0; i< n;i++){
    array[i] = (char*)malloc(n*sizeof(char));
    for(j=0;j<m;j++){
      array[i][j]='a'+(char)(rand()%26);
    }
  }

  return array;
}

int main(){
    int i, j, n, m;

    puts("Escola a quantidade de palavra:");
    scanf("%d", &n);
    puts("Escola a quantidade de letras deve possuir cada palavra:");
    scanf("%d", &m);

    char **string = (char**)malloc(n*sizeof(char*));
    string = geraString(n,m);

	for (i = 0; i < n; i++){
		printf("%s \n", string[i]);
	}

    for (i = 0; i < n ; i++){
		free(string[i]);
	}
	free(string);
}
