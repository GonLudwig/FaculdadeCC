/* Crie   um   programa   capaz   de   solicitar   do   usuário   três   números   inteiros(primeiroNumero,
segundoNumero e terceiroNumero). Solicite dele também uma opção,correspondente as seguintes funcionalidades:
Opção a – Exibir a soma dos três números
Opção b – Exibir o maior e o menor número entre eles 
Opção c – Exibi-los ordenados de modo decrescente */

#include <stdio.h>

int main () {
    char escolha;
    int primeiroNum, segundoNum, terceiroNum;

    printf("Digite o primeiro numero:");
    scanf("%d", &primeiroNum);
    printf("Digite o segundo numero:");
    scanf("%d", &segundoNum);
    printf("Digite o terceiro numero:");
    scanf("%d", &terceiroNum);
    printf("Escolha umas das opcoes:\nOpcao a – Exibir a soma dos tres números\nOpcao b – Exibir o maior e o menor numero entre eles\nOpcao c – Exibi-los ordenados de modo decrescente\n");
    scanf("%c", &escolha); 
    // eu não consequi limpar o buffer mas deixei da forma certa que deveria ser feito.
    // Ja tentei o __fpurge(stdin); fflush(stdin); setbuf(stdin,NULL);
    

    if (escolha == 'a' || escolha == 'A') {
        int soma;
        soma = primeiroNum + segundoNum + terceiroNum;
        printf("A soma dos tres numeros e: %d", soma);
    }

    if (escolha == 'b' || escolha == 'B') {
        int maior, menor;
        maior = primeiroNum;
        menor = primeiroNum;

        if (segundoNum > primeiroNum) {
            maior = segundoNum;
        } if (terceiroNum > segundoNum) {
            maior = terceiroNum;
        }
        
        if (segundoNum < primeiroNum) {
            menor = segundoNum;
        } if (terceiroNum < segundoNum) {
            menor = terceiroNum;
        }
        printf("Maior numero e %d e o menor e %d", maior, menor);
    }
   
    if (escolha == 'c' || escolha == 'C') {
        int maior, menor, medio;
        maior = primeiroNum;
        medio = primeiroNum;
        menor = primeiroNum;

        if (segundoNum > primeiroNum && segundoNum > terceiroNum) {
            maior = segundoNum;
        } if (terceiroNum > segundoNum && terceiroNum > primeiroNum) {
            maior = terceiroNum;
        }
        
        if (segundoNum < primeiroNum && segundoNum < terceiroNum) {
            menor = segundoNum;
        } if (terceiroNum < segundoNum && terceiroNum < primeiroNum) {
            menor = terceiroNum;
        }

        if (segundoNum < maior && segundoNum > menor) {
            medio = segundoNum;
        } if (terceiroNum < maior && terceiroNum > menor) {
            medio = terceiroNum;
        }

        printf("Ordem decrescente e %d %d %d", maior, medio, menor);
    }

    return 0;
}
