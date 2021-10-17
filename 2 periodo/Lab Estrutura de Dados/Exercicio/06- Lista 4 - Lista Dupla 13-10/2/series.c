/*Implemente uma solução usando lista duplamente encadeada para representar o
catálogo de séries disponíveis por um serviço de streaming. A estrutura que modela a
série deve ter como membros: código da série, título, nº de temporadas, nº de
episódios, e um campo que guarda a quantidade de episódios assistidos pelo
cliente (sendo 0 a série não foi vista ainda, sendo igual ao nº de episódios a série já
foi assistida completamente). 
a) Crie uma função que permita ao usuário assistir uma série, para isso ele deve
escolher uma série no catálogo (lista) e ao escolher a função assistir série deve-se
gerar um valor inteiro randômico entre a quantidade de episódios assistidos
(inicialmente 0) e o nº de episódios daquela série (que representa 100%), esse
valor atualiza a quantidade de episódios assistidos da série que é usado como
base para a randomização. Assim, se em outro momento o usuário quiser assistir a
mesma série terá a possibilidade de “continuar assistindo” de onde parou, caso já
tenha visto a série completamente, deve-se reiniciar a contagem. 
b) Crie uma função que permita ao usuário zapear todas as séries da esquerda para a
direita. E outra função que permite o mesmo recurso da direita para a esquerda.
Ambas as funções devem informar de cada série: o nome, o nº de temporadas e o
percentual de episódios assistidos da série. Para calcular o percentual aplique a
regra de três simples, tendo como 100% o número total de episódios da série. Ex:
uma série com 43 episódios dos quais o usuário assistiu 23 episódios retornaria um
percentual de episódios assistidos igual a 53,49%, pois: 
43 está para 100% e 
23 está para X logo,
43X = 2.300
X = 2.300 / 43 = 53,49 (arredondado para cima)*/

#include "tadSeries.h"

int main () {
    int escolha = 1;

    Catalogo *catalo = criarCatalogo();

    puts("Olá, Bem-vindo a StarlingFlix!");
    puts("Digite 1 - Adicionar seire ao catalogo.");
    puts("Digite 2 - Exibir/Escolher serie.");
    puts("Digite 0 - Sair.");
    while (escolha != 0){
        scanf("%d", &escolha);
        0
    }
    
}