/*08 – Deseja-se saber quantos acertos um determinado aluno teve em uma prova.
Portanto, usa-se dois vetores de caracteres de 10 posições cada. O primeiro deles
corresponde ao gabarito, em cada posição pode haver uma letra (a,b,c,d,e) que
corresponde a resposta correta de cada questão (gabarito).
O segundo vetor, preenchido de modo parecido, contém as respostas do aluno.
Ao final, seu programa deve exibir:
a) quais questões foram acertadas e erradas
b) qual o percentual de acerto e de erro.*/

#include <stdio.h>
#include <ctype.h>

char gabaritoProva(char vet[]){
    char gabarito[10] = {'a', 'b', 'c', 'd', 'd', 'c', 'b', 'a', 'c', 'd'};
    int i, acerto = 0;

    for (i=0; i<10; i++){
        vet[i] = tolower(vet[i]);
    }

    for (i=0; i<10; i++){
        if (gabarito[i] == vet[i]){
            acerto++;
            printf("A questao %d :Acertou!!!\n", i);
        } else {
            printf("A questao %d :Errou!!!\n", i);
        }
    }

    printf("Voce Acertou: %d%%", acerto*10);
    printf("Voce Errou: %d%%", (10-acerto) * 10);
}

int main () {
    char provaAluno[10], questao;
    int i;

    puts("Digete as questoes que voce marcou nas devidas questoes.");
    for (i=0; i<10; i++){
        printf("Digite sua resposta da questao %d:", i+1);
        scanf("%c", &questao);
        provaAluno[i] = questao;
    }

    gabaritoProva(provaAluno);
    
    return 0;
}
