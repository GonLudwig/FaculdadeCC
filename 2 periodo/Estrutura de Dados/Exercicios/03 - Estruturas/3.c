/*03 – Observe as seguintes estruturas de dados:
Note que a estrutura Álbum contém o nome do artista, o gênero (samba, pop, rock…) e,
por fim, um vetor de 25 músicas. A estrutura Música por sua vez possui o nome da
música, o tempo de duração e o nome dos compositores. Crie um programa com um
menu com as seguintes funcionalidades:
a) Cadastrar álbum
O usuário deve inserir as informações do álbum e das músicas.
Nem todo álbum deve ter 25 músicas. Isso é, o vetor pode ter várias
posições vazias.
Crie um vetor de álbum no começo do programa, possibilitando que o suário
cadastre até 5 álbuns.
b) Detalhar álbum
Exibir todas as informações dos álbuns cadastrados
Exibir o tempo total de duração de cada álbum cadastrado
Exibir o nome de todas as músicas de todos os álbuns cadastrados*/
#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char nome[200];
    int duracao;
    char compositores[500];
} musica;

typedef struct {
    char artista[200];
    char genero[100];
    musica faixa[25];
    int nMusica;
    int totalDuracao;
} album;

int cadastradasAlbum(album *universal, int num) {
    int choice = 1, i = 0;

    printf("Album %d\n", num+1);
    puts("Qual nome do artista:");
    fflush(stdin);
    gets(universal[num].artista);
    puts("Qual genero musical:");
    fflush(stdin);
    gets(universal[num].genero);
    do {
        puts("Digite 1 - Cadastrar musica.");
        puts("Digite 0 - Finalizar o cadastro.");
        scanf("%d", &choice);
        if (choice == 1){
            printf("Qual o nome da musica %d:\n", i+1);
            fflush(stdin);
            gets(universal[num].faixa[i].nome);
            puts("Qual a duracao da musica:");
            scanf("%d", &universal[num].faixa[i].duracao);
            universal[num].totalDuracao += universal[num].faixa[i].duracao;
            puts("Qual e o nome do compositor:");
            fflush(stdin);
            gets(universal[num].faixa[i].compositores);
            i++;
            if(i == 25){
                puts("Limite de musicas por album!");
            }
        }
    } while (choice != 0 && i < 25);

    universal[num].nMusica = i-1;
}

void detalharAlbum(album *universal) {
	int i, j;
	
    for(i=0;i<5;i++) {
        printf("\nAlbum %d\n", i+1);
        printf("Artista: %s\n", universal[i].artista);
        printf("Genero: %s\n", universal[i].genero);
        printf("Duracao do Album: %d\n", universal[i].totalDuracao);
        for(j=0;j<=universal[i].nMusica;j++){
            printf("\nNome da musica: %s\n", universal[i].faixa[j].nome);
            printf("Duracao da musica: %d\n", universal[i].faixa[j].duracao);
            printf("Nome do compositor: %s\n", universal[i].faixa[j].compositores);
            puts("Aperte qual quer tecla para exibir a proxima musica!");
            system("pause");
        }
        puts("Aperte qual quer tecla para exibir o proximo album!");
        system("pause");
    }
}

int main(){
    album *universal;

    universal = calloc(5, sizeof(album));
    int i;

    for(i=0;i<5;i++){
        universal[i].totalDuracao = 0;
    }

    for(i=0;i<5;i++) {
        cadastradasAlbum(universal, i);
    }

    detalharAlbum(universal);
}
