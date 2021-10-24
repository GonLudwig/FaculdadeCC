/*06 – Crie um programa que possibilite ao usuário a inserção de contatos em uma lista
(contendo nome, telefone e e-mail). Possibilite ao usuário editar as informações de um
contato. Ele deve informar qual contato deseja editar e seu programa deve fazê-lo
reinserir as informações novas do contato. Seu programa deve possibilitar a exibição da
lista completa*/
#include"contato.h"

int main(){
    LCONTATO *lista = criarlista();
    int escolha = 1;
    char nPessoa[100];
    char nEmail[100];
    char nTelefone[20];

    while (escolha != 0){
        puts("Digite 1 - Adicionar contato na lista.");
        puts("Digite 2 - Exibir lista");
        puts("Digite 0 - Para sair!");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o nome da pessoa:");
                fflush(stdin);
                gets(nPessoa);
                puts("Digite o E-mail:");
                fflush(stdin);
                gets(nEmail);
                puts("Digite o telefone:");
                fflush(stdin);
                gets(nTelefone);
                adicionarContato(lista, nPessoa, nEmail, nTelefone);
                break;
            case 2:
                verAgenda(lista);
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Escolha invalida, tente novamente!");
                break;
        }
    }
    
    liberarLista(&lista);    

    return 0;
}
