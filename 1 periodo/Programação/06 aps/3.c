/* Uma pequena companhia aérea acabou de comprar um computador para o seu
novo sistema automático de reservas. O presidente pediu a você que programasse o novo
sistema em C. Você deve escrever um programa para atribuir assentos a cada voo do
único avião da companhia (capacidade: 10 assentos). Seu programa deve exibir o
seguinte menu de alternativas:
Favor digitar 1 para "fumante"
Favor digitar 2 para "não fumante"
Se a pessoa digitar 1, seu programa deve fazer a reserva de um assento no setor dos
fumantes (assentos 1-5). Se a pessoa digitar 2, seu programa deve reservar um assento
no setor de não-fumantes (assentos 6-10). Seu programa deve então imprimir um cartão
de embarque indicando o número do assento do passageiro e se ele se encontra no setor
de fumantes ou de não-fumantes do avião.
Use um array de uma dimensão para representar o esquema dos assentos do avião.
Inicialize todos os elementos do array com 0 para indicar que todos os assentos estão
livres. A medida que cada assento for reservado, iguale os elementos correspondentes a
1 para indicar que o assento não está mais disponível.
Seu programa nunca deve, obviamente, reservar um assento que já tenha sido
distribuído. Quando o setor de fumantes estiver lotado, seu programa deve perguntar se a
pessoa aceita um lugar no setor de não-fumantes (e vice-versa). Em caso positivo, faça a
reserva apropriada do assento. Em caso negativo, imprima a mensagem:
"Próximo voo sai em 3 horas."*/

#include <stdio.h>

int flying(int *vet, int num){
	int i, choice, smokiChair=0, noSmokiChar=5;

	for (i=0; i<5; i++){
        if (vet[i] == 1){
            smokiChair++;
        }
    }
    printf("%d\n", smokiChair);
    for (i=5; i<10; i++){
        if (vet[i] == 1){
            noSmokiChar++;
        }
    }
    printf("%d\n", noSmokiChar);
    
    if (smokiChair == 5 && noSmokiChar != 10) {
        puts("Não possui vagas nos asentos de fumates.");
        puts("Se voce desejar o assento na area dos não-fumantes? Se sim digite: 1");
        scanf("%d", &choice);
        if (choice == 1) {
            num = 2;
        }
    } else if (smokiChair != 5 && noSmokiChar == 10) {
        puts("Não possui vagas nos asentos de nao-fumates.");
        puts("Se voce desejar o assento na area dos fumantes? Se sim digite: 1");
        scanf("%d", &choice);
        if (choice == 1) {
            num = 1;
        }
    } else (smokiChair == 5 && noSmokiChar == 10){
        num = 3;
    }
    
	switch (num) {
    	case 1:
            vet[smokiChair] = 1;
            printf("Voce comprou a passagem para fumantes, e sua proltrona e a %d \n", smokiChair+1);
            smokiChair++;
        	break;
    	case 2:
        	vet[noSmokiChar] = 1;
            printf("Voce comprou a passagem para fumantes, e sua proltrona e a %d \n", smokiChair+1);
            noSmokiChar++;
        	break;
    	default:
        	puts("Nao ha vagas para estes voo, o proximo vai sair a 3 horas!");
        	break;
	}
    
    return smokiChair + noSmokiChar;
}

int main() {
	int chairFly[10] = {0,0,0,0,0,0,0,0,0,0};
	int choice, fullChair;
    
	while (fullChair != 15) {
    	puts("Ola, bom dia!");
    	puts("Em qual poltrona deseja sentar:");
    	puts("Favor digitar 1 para ""fumante"" ");
    	puts("Favor digitar 2 para ""não fumante"" ");
    	scanf("%d", &choice);
   	 
    	fullChair = flying(chairFly, choice);
        printf("%d", fullChair);
        
        puts("");
    	puts("Agradecemos a preferencia. Tenha um boa viajem!");
	}
}
