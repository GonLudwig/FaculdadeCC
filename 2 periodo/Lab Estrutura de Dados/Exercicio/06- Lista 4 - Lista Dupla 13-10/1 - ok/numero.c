/*Escreva um programa que realiza o cadastro de vários números inteiros em um lista
duplamente encadeada. Além das funções básicas da lista, implemente uma função
que a partir da lista original retorne (por referência) duas listas, sendo uma com os
números ímpares e a outra com os números pares contidos na lista original.*/
#include"tadNumeros.h"

int main() {
    ListaNum *lista = criarLista();
    ListaNum *listaI;
    ListaNum *listaP;
    int num;
    int escolha = 1;

    while (escolha != 0){
        puts("Digite 1 - Adicionar numero na lista.");
        puts("Digite 2 - Adicinoar numeros a lista impar e par. E exibi-los");
        puts("Digite 0 - Sair.");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Digite o numero que deseja adicionar!");
                scanf("%d", &num);
                adicionarFimLista(lista, num);
                break;
            case 2:
                if (lista == NULL){
                    puts("Lista esta vazia, voce deve adicionar numeros a lista");
                } else {
                    puts("Numeros sendo adicionados a lista impar!!!");
                    listaI = listaImpar(lista);
                    puts("Numeros sendo adicionados a lista par!!!");
                    listaP = listaPar(lista);
                    printf("Numeros Impares");
                    exibirLista(listaI);
                    printf("Numeros Pares");
                    exibirLista(listaP);
                    liberarLista(&listaI);
                    liberarLista(&listaP);
                }
                break;
            case 0:
                puts("Obrigado por utilizar o programa!!!");
                liberarLista(&lista);
                break;
            default:
                puts("Escolha invalida, tente uma escolha valida!");
                break;
        }
    }
    

    return 0;
}