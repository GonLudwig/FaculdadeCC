#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSENHAS 30 // Altere para os testes iniciais. No final ordene pelo menos metade disso.
#define MAX 30
#define QTD 36

void LerSenhas(char **senhas, char *filepath){
	FILE *fp;
	int n = 0, freq;
	char pass[8];

	fp = fopen(filepath, "r");

	while (fscanf(fp, "%s", &pass) == 1 && n < MAXSENHAS)
	{
		senhas[n] = (char*)malloc(sizeof(char));
        pass[8] = '\0';
		strcpy(senhas[n], pass);
		n++;
	}

	fclose(fp);
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

void radixSort(char** placas){
  char **balde[QTD], letra;
  int contador[QTD], b, i, j, k, aux;

  for(i=0; i<QTD; i++){
    balde[i] = (char**)malloc( MAX*sizeof(char*) );

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

int main(){
    int n;
	char **senhas;
	senhas = (char**)malloc(MAXSENHAS * sizeof(char*));

	LerSenhas(senhas, "placas.txt");

    radixSort(senhas);

	for (n = 0; n < MAXSENHAS; n++){
		printf("%s\n", senhas[n]);
	}

	for (n = 0; n < MAXSENHAS ; n++){
		free(senhas[n]);
	}
	// free(senhas);

	return 0;
}