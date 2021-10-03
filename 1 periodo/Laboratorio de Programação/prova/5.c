#include <stdio.h>

int main () {
    int anoNascimento = 1994, mesNascimento = 1, diaNascimento = 24;

    if (anoNascimento % mesNascimento == 0 || anoNascimento % diaNascimento == 0) {
        printf("Ele e multiplo do mes do nascimento ou do dia do nascimento.");
    }else {
        printf("Ele nao e multiplo do mes do nascimento ou do dia do nascimento.");
    }


    return 0;
}