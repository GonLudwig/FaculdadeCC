/*02 – Juan Gabriel é um senhor que possui o hábito da leitura. Sempre que vê um livro
novo quer comprá-lo. O problema é que nem sempre ele termina de ler um livro antes de
adquirir outro, e sempre que ela compra um livro novo passa a lê-lo, deixando o anterior
aguardando que ela termine o novo para retomá-lo.
Crie um programa para organizar a pilha de livros do senhor Juan Gabriel.
Considere as seguintes regras.
• Comprar um livro significa empilhá-lo.
• Quando um livro for completamente lido, ele é removido da pilha e Juan Gabriel
doa o livro para outra pessoa.
•
Juan Gabriel sempre está lendo o livro que está no topo da pilha, e seu programa
deve exibir essa informação o tempo todo.
•
Se Juan Gabriel não tiver nenhum livro para ler, seu programa deverá exibir que
não há livros sendo lidos.
• Seu programa deve possibilitar incluir livros na pilha e removê-los.
• Deve haver uma opção para sair.
• Essa não deve ser uma pilha duplamente encadeada. Decida se armazenará o
endereço do livro de cima ou do de baixo, mas nunca de ambos.*/

#include"livro.h"

int main(){
    PLIVRO *pLivro;
    int escolha = 1;
    int livros;
    char livro[50];

    pLivro = pilhaLivro();

    while (escolha != 0){
        if(livros == 0){
            puts("Não possui livro na pilha");
        } else {
            puts("Juan esta lendo livro.");
        }
        puts("Digite 1 - Adicionar livro.");
        puts("Digite 2 - Retirar livro.");
        puts("Digite 0 - Sair.");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Qual nome do livro.");
                __fpurge(stdin);
                fgets(livro, 100, stdin);
                livros = adicionarLivro(pLivro, livro);
                break;
            case 2:
                if(livros == 0){
                    puts("Não possui livro na pilha");
                } else{
                    livros = desepilharLivro(pLivro);
                }
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Escolha invalida!");
                break;
        }
    }
    
    liberarPilha(&pLivro);
    return 0;
}