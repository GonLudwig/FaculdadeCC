/*03 – Permita que o usuário cadastre e exiba as informações de um vetor de 4 posições da
estrutura Empresa (nomeFantasia, razaoSocial e CNPJ)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nomeFantasia[100];
    char razaoSocial[100];
    int cnpj;
} empresa;

int preencherEmpresa(empresa *padaria){
    int i;

    for (i=0;i<4;i++) {
        printf("Digite o nome fantasia da %d empresa:\n", i+1);
        fflush(stdin);
        gets(padaria[i].nomeFantasia);
        printf("Digite a razao social:\n");
        fflush(stdin);
        gets(padaria[i].razaoSocial);
        printf("Digite o CNPJ:\n");
        scanf("%d", &padaria[i].cnpj);
    }
    
    return 0;
}

int exibirEmpresa(empresa *padaria){
    int i;

    for (i=0;i<4;i++) {
        printf("O nome fantasia da %d empresa e: %s\n", i+1, padaria[i].nomeFantasia);
        printf("A razao social da empresa e: %s\n", padaria[i].razaoSocial);
        printf("O CNPJ e: %d\n", padaria[i].cnpj);
	}
    
    return 0;
}

int main() {
    struct empresa *padaria;

    padaria = calloc(4, sizeof(empresa));

    preencherEmpresa(padaria);
    exibirEmpresa(padaria);

    free(padaria);

    return 0;
}