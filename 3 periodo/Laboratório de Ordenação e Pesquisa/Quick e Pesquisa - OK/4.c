#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int buscaBinaria(int *vetor, int inicio, int fim, int procura){ 
	int i;
	int meio;
    
	if(fim>=inicio){
		meio=inicio+(fim-inicio)/2;

		if(vetor[meio]==procura){
			return meio;
		}

		if( procura > vetor[meio] ){
			return busca_binaria(vetor, meio+1,fim, procura);
		}

		return busca_binaria(vetor,inicio, meio-1, procura);
	}
    
    return -1;
}

void insertionSort(int *vetor,int tam){
	int i;
	int j;
	int aux=0;
  
	for(i=0;i<tam;i++){
		j=i;
		
		while(vetor[j]<vetor[j-1]){
			aux=vetor[j];
			vetor[j]=vetor[j-1];
			vetor[j-1]=aux;
				
			j--;
		}
	}
}

void preencher(int *vetor,int tam){
	int i;

	for(i=0;i<tam;i++){
		vetor[i]=rand()%(tam*10);
	}
}

void imprimirVetor(int array[], int size) {
	int i;
  for (i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main(){
	int tam=10;
	int i=0;
	int vetor[tam];
	int aux[tam];
	int temp[tam];
	int x;
	int result;
	int j=0;

	preencher(vetor,tam);

	for(i=0;i<tam;i++){
		aux[i]=vetor[i];
	}

	insertionSort(vetor,tam);
	
	imprimirVetor(vetor, tam);

	imprimirVetor(aux, tam);
	
	for(i=0;i<tam;i++){
		result=buscaBinaria(vetor,0,tam,aux[i]);

		temp[result]=aux[i];
	}
	
	imprimirVetor(temp, tam);
	
	return 0;
}