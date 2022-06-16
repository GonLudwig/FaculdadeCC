#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int busca_binaria(int *vetor, int inicio, int fim, int x){ 
	int i,meio;
    
    if(fim>=inicio){
		meio=inicio+(fim-inicio)/2;
		
		if(vetor[meio]==x){
			return meio;
		}
		
		if( x > vetor[meio] ){
			return busca_binaria(vetor, meio+1,fim, x);
		}
		else{
			return busca_binaria(vetor,inicio, meio-1, x);		
		}
	}
    
    return -1;
}

void insertionSort(int *vetor,int tam){
	int i,j,aux=0;
	
	for(i=0;i<=tam;i++){
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
		vetor[i]=rand()%(tam*50);
	}
}

int main(){
	int tam=10,i=0;
	int *vetor,*aux,*temp,x,result,j=0;
	
	vetor=(int*)calloc(tam,sizeof(int));
	aux=(int*)calloc(tam,sizeof(int));
	temp=(int*)calloc(tam,sizeof(int));
	
	preencher(vetor,tam);
	
	//c�pia do vetor original
	for(i=0;i<tam;i++){
		aux[i]=vetor[i];
	}
	
	//ordena o vetor original
	insertionSort(vetor,tam);
	

	//exibe o vetor original ordenado
	for(i=0;i<tam;i++){
		printf("%d ",vetor[i]);
	}
	
	printf("\n\n");
	
	//exibe a c�pia do vetor desordenado
	for(i=0;i<tam;i++){
		printf("%d ",aux[i]);
	}
	
	
		
	printf("\n\n");
	
	
	for(i=0;i<tam;i++){
		result=busca_binaria(vetor,0,tam,aux[i]);

		temp[result]=aux[i];
	}
	
	for(i=0;i<tam;i++){
		printf("%d ",temp[i]);
	}
	
	
	return 0;
}
