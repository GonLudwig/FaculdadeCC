/*05 – Crie uma estrutura para tratar de dados de pessoas. Crie também um vetor de cinco
pessoas, exiba aquela entre as cinco que está com o menor índice de massa corporal.*/
#include<stdio.h>

struct humano {
    char nome[10];
    float masaCorporal;
};

void inputPessoas(struct humano *p) {
	int i;
	
    for(i=0; i<5; i++) {
        printf("Qual nome da pessoa:");
        scanf("%s", &p[i].nome);
        printf("Qual massa corporadal:");
        scanf("%f", &p[i].masaCorporal);
    }
}

void bestMassa(struct humano *p) {
    int i, pessoa;
    float corporal = p[0].masaCorporal;

    for(i=0; i<5; i++) {
        if(p[i].masaCorporal < corporal){
            corporal = p[i].masaCorporal;
            pessoa = i;
        }
    }

    printf("A pessoa com menor massa corporal e o %s com %.2f de massa corporal", p[pessoa].nome, corporal);
}

int main() {
    struct humano vetPessoa[5];

    inputPessoas(vetPessoa);
    bestMassa(vetPessoa);

}
