/*01 – Crie um programa capaz de alocar dinamicamente um vetor de 5 posições de
números inteiros. Permita que o usuário insira dados neste vetor enquanto ele quiser. Se
necessário realoque mais posições ao vetor.*/
#include <stdio.h>
#include <stdlib.h>

int preencherVetDin(int *vetor, int i){
    printf("Insira o numero %d na sequencia:", i+1);
    scanf("%d", &vetor[i]);

    return i;
}

void imprimirVetDin(int *vetor, int id){
    int i;

    printf("Sequencia:");
    for(i=0;i<=id;i++){
        printf(" - %d", vetor[i]);
    }

    printf("\n");
}

int main() {
    int id = 4, i, choice = 1;
    int *vetorDinamico;

    vetorDinamico = calloc(5, sizeof(int));

    for(i=0;i<5;i++){
        preencherVetDin(vetorDinamico, i);
    }
    while (choice != 0){
        puts("Digite 1 - Inserir mais valores.");
        puts("Digite 2 - Visualizar toda sequencia.");
        puts("Digite 0 - Finalizar o programa.");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                id++;
                vetorDinamico = realloc(vetorDinamico, id*sizeof(int));
                id = preencherVetDin(vetorDinamico, id);
                break;
            case 2:
                imprimirVetDin(vetorDinamico, id);
                break;
            case 0:
                puts("Muito obrigado pela preferencia !");
                break;
            default:
                puts("Escolha não definida. Escolha um valor valido!");
                break;
        }
    }

    free(vetorDinamico);
    return 0;
}
