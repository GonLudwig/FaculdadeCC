/* Crie um programa capaz de solicitar do usuário três números inteiros
(primeiroNumero, segundoNumero e terceiroNumero). Solicite dele também uma opção,
correspondente as seguintes funcionalidades:
Opção a – Exibir a soma dos três números
Opção b – Exibir o maior e o menor número entre eles
Opção c – Exibi-los ordenados de modo decrescente */

#include <stdio.h>

int main () {
    char escolha;
    int primeiroNum, segundoNum, terceiroNum, soma, maior1, menor1, maior2, menor2, medio2;

    printf("Digite o primeiro numero:");
    scanf("%d", &primeiroNum);
    printf("Digite o segundo numero:");
    scanf("%d", &segundoNum);
    printf("Digite o terceiro numero:");
    scanf("%d", &terceiroNum);
    printf("Escolha umas das opcoes:\nOpcao a - Exibir a soma dos tres numeros\n");
    printf("Opcao b - Exibir o maior e o menor numero entre eles\n");
    printf("Opcao c - Exibi-los ordenados de modo decrescente\n");
    scanf("%s", &escolha); 
    /* eu nao consequi limpar o buffer mas deixei da forma certa que deveria ser feito.
    Ja tentei o __fpurge(stdin); fflush(stdin); setbuf(stdin,NULL); */
    

    switch (escolha) {

        case 'a':
        case 'A':
            soma = primeiroNum + segundoNum + terceiroNum;
            printf("A soma dos tres numeros e: %d", soma);
            break;

        case 'b':
        case 'B':
            maior1 = primeiroNum;
            menor1 = primeiroNum;

            if (segundoNum > primeiroNum) {
                maior1 = segundoNum;
            } if (terceiroNum > segundoNum) {
                maior1 = terceiroNum;
            }
            
            if (segundoNum < primeiroNum) {
                menor1 = segundoNum;
            } if (terceiroNum < segundoNum) {
                menor1 = terceiroNum;
            }
            printf("Maior numero e %d e o menor e %d", maior1, menor1);
            break;
   
        case 'c':
        case 'C':
            maior2 = primeiroNum;
            medio2 = primeiroNum;
            menor2 = primeiroNum;

            if (segundoNum > primeiroNum && segundoNum > terceiroNum) {
                maior2 = segundoNum;
            } if (terceiroNum > segundoNum && terceiroNum > primeiroNum) {
                maior2 = terceiroNum;
            }
            
            if (segundoNum < primeiroNum && segundoNum < terceiroNum) {
                menor2 = segundoNum;
            } if (terceiroNum < segundoNum && terceiroNum < primeiroNum) {
                menor2 = terceiroNum;
            }

            if (segundoNum < maior2 && segundoNum > menor2) {
                medio2 = segundoNum;
            } if (terceiroNum < maior2 && terceiroNum > menor2) {
                medio2 = terceiroNum;
            }

            printf("Ordem decrescente e %d %d %d", maior2, medio2, menor2);
            break;
        default:
            printf("Escolha nao definida!");
            break;
    }
    return 0;
}