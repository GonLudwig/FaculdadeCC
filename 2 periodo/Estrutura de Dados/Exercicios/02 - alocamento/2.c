/*02 – Crie um código-fonte capaz de alocar vetores com as seguintes características:
a) Vetor de inteiros com quantidade de posições definida pelo usuário. Preencha os
valores e exiba-os na tela.
b) Vetor de estrutura pessoa (composta por nome e data de nascimento). Preencha
o vetor de cinco pessoas e exiba os dados na tela.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int day;
    int month;
    int year;
} human;

int vetInt( int *vetor) {
    int i, num, choiceNum;

    puts("Quantas posicoes tera o vetor?");
    scanf("%d", &num);
    vetor = realloc(vetor, num*sizeof(int));

    for(i=0;i<num;i++) {
        vetor[i] = rand() % 100;
    }

    for(i=0;i<num;i++) {
        printf("[%d] - > %d\n", i, vetor[i]);
    }

    return 0;
}

int fillHuman(human *person){
    int i;

    for (i=0;i<5;i++) {
        printf("Digite o nome da %d Pessoa:\n", i+1);
        fflush(stdin);
        gets(person[i].nome);
        printf("Digite o dia de nascimento:\n");
        scanf("%d", &person[i].day);
        printf("Digite o mes de nascimento:\n");
        scanf("%d", &person[i].month);
        printf("Digite o ano de nascimento:\n");
        scanf("%d", &person[i].year);
    }
    
    return 0;
}

int viewHuman(human *person){
    int i;

    for (i=0;i<5;i++) {
        printf("O nome da %d Pessoa e: %s ", i+1, person[i].nome);
        printf("Sua data de nascimento e %d/%d/%d\n", person[i].day, person[i].month, person[i].year);
	}
    
    return 0;
}

int main() {
    struct human *person;
    int *vetor;

    vetor = calloc(1, sizeof(int));
    person = calloc(5, sizeof(human));

    vetInt(vetor);
    fillHuman(person);
    viewHuman(person);


    free(person);
    free(vetor);
    return 0;
}
