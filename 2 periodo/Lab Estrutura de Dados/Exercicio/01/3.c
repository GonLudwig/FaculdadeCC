/*3. Refaça as duas atividades anteriores utilizando ponteiros.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char placa[6];
    float valor;
    char situacao[100];
} veiculo;

void cadastrarVeiculo(veiculo *v){
    
    puts("Digite numero da placa do carro:");
    fflush(stdin);
    gets(v[0].placa);
    puts("Digite o valor:");
    scanf("%f", &v[0].valor);
    puts("Digite a situacao do carro:");
    fflush(stdin);
    gets(v[0].situacao);

}

void editarVeiculo(veiculo *v){
	
	puts("Edicao do Veiculo");
    puts("Digite numero da placa do carro:");
    fflush(stdin);
    gets(v[0].placa);
    puts("Digite o valor:");
    scanf("%f", &v[0].valor);
    puts("Digite a situacao:");
    fflush(stdin);
    gets(v[0].situacao);
}

void exibirVeiculo(veiculo *v){
    
    printf("O placa do carro: %s\n", v[0].placa);
    printf("valor: %.2f\n", v[0].valor);
    printf("situacao: %s\n", v[0].situacao);
}

int main(){

    int choice;

    struct veiculo *carro[1];


    cadastrarVeiculo(carro);

    editarVeiculo(carro);

    exibirVeiculo(carro);

    free(carro);

    return 0;
}
