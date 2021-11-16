/*Já que estamos prestando serviços para a PMMO (Prefeitura Municipal de
Massachusetts do Oeste MG), vamos também desenvolver um sistema para controlar um
semáforo no centro da cidade.
Na verdade, a cidade preza pelo conforto dos pedestres, mesmo que os carros
precisem esperar. O semáforo funcionará da seguinte forma:
•
Os carros são inseridos em uma fila (deve ser informado basicamente a
placa de cada carro). No seu programa, o usuário digita a placa, na vida
real, já existem câmeras para detectar a placa dos veículos.
•
Enquanto não houverem 5 veículos na fila, o semáforo deve permanecer
fechado.
•
Quando tivermos 5 veículos na fila, o semáforo será aberto. Seu programa
deve retirar um a um os veículos da fila exibindo a placa de cada um.
•
Se a fila permanecer com menos de 5 veículos, nada acontece.
Por algum motivo que a prefeitura não informou, este deve ser um semáforo sendo
controlado por uma fila simplesmente encadeada.*/
#include"semaforo.h"

int main(){
    FCARRO *fila = criarFilaCarro();
    char placa[10];
    int escolha = 1;
    int qtdCarro;

    puts("Sistema de semaforo");
    while (escolha != 0){
        puts("Digite 1 - Adicionar carro na fila");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                if(qtdCarro == 5){
                    abrirSemaforo(fila);
                }
                puts("Digite o nome da placa");
                __fpurge(stdin);
                fgets(placa, 10, stdin);
                qtdCarro = adicionarCarro(fila, placa);
                break;
            case 0:
                puts("Obrigado pela preferencia");
                break;
            default:
                puts("Escolha invalida");
                break;
        }

    }
    

    return 0;
}