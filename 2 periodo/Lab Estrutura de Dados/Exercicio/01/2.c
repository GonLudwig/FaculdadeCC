/*2.Defina uma estrutura para representar o registro abaixo. Declare esta estrutura em
seu programa e crie funções para cadastrar, imprimir e alterar a estrutura.*/
#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char nome[50];
    float salario;
    int idade;
    char sexo[30];
} registroPessoa;

void cadastrarPessoa(registroPessoa *pessoa, int id){
    
    puts("Digite o nome da Pessoa:");
    fflush(stdin);
    gets(pessoa[id].nome);
    puts("Digite o salario:");
    scanf("%f", &pessoa[id].salario);
    puts("Digite a idade:");
    scanf("%d", &pessoa[id].idade);
    puts("Digite o sexo:");
    fflush(stdin);
    gets(pessoa[id].sexo);
}

void editarPessoa(registroPessoa *pessoa, int id){
    
    puts("Digite o nome da Pessoa:");
    fflush(stdin);
    gets(pessoa[id].nome);
    puts("Digite o salario:");
    scanf("%f", &pessoa[id].salario);
    puts("Digite a idade:");
    scanf("%d", &pessoa[id].idade);
    puts("Digite o sexo:");
    fflush(stdin);
    gets(pessoa[id].sexo);
}

void exibirPessoa(registroPessoa *pessoa, int id){
    
    printf("Esse o registro %d\n", id);
    printf("O nome da Pessoa: %s\n", pessoa[id].nome);
    printf("Salario: %.2f\n", pessoa[id].salario);
    printf("Idade: %d\n", pessoa[id].idade);
    printf("Sexo: %s\n", pessoa[id].sexo);
}

int main(){
    int choice, id=0, num;

    struct registroPessoa *pessoa;

    pessoa = calloc(1, sizeof(registroPessoa));

    do{
        puts("Digite 1 - Cadastrar pessoa");
        puts("Digite 2 - Alterar cadastro");
        puts("Digite 3 - Exibir cadastro");
        puts("Digite 0 - Para sair!");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                id++;
                pessoa =  realloc(pessoa, id * sizeof(registroPessoa));
                cadastrarPessoa(pessoa, id);
                break;
            case 2:
                puts("Qual registro voce deseja editar?");
                scanf("%d", &num);
                if(num > id){
                    printf("Não consta registro com numero %d ainda.", num);
                } else {
                    editarPessoa(pessoa, num);
                }
                break;
            case 3:
                puts("Qual registro voce deseja exibir:");
                scanf("%d", &num);
                if(num > id){
                    printf("Não consta registro com numero %d ainda.", num);
                } else {
                    exibirPessoa(pessoa, num);
                }
                break;
            case 0:
            	puts("Muito Obrigado pela Escolha. Se gostou?! Deixa seu like!");
            	break;
            default:
                puts("Escolha indefinida, tente novamente!");
                break;
        }

    } while(choice != 0);


    free(pessoa);
}