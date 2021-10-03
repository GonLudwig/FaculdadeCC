/*04 – Desde antes do lançamento da última trilogia de StarWars, ficou realmente difícil
organizar a ordem dos filmes, isso porque a ordem de lançamento dos filmes é diferente
da ordem cronológica da história. Faça um programa que permita que o usuário cadastre
os filmes contendo título, ano de lançamento e número do episódio. Ao final, exiba todas
as informações dos nove filmes cadastrados.
* Extra: Exiba os filmes ordenados pelo número do episódio.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char titulo[100];
    int anoLancamento;
    int numeroEpisodio;
} lucasFilm;

int preencherLucasFilm(lucasFilm *starWars){
    int i, j;

    for (i=0;i<6;i++) {
        printf("Digite o titulo do StarWars:\n");
        fflush(stdin);
        gets(starWars[i].titulo);
        printf("Digite o ano lancamento:\n"); 
        scanf("%d", &starWars[i].anoLancamento);
        printf("Digite o numero do episodio:\n");
        scanf("%d", &starWars[i].numeroEpisodio);
        for (j=0;j<6;j++){
            if (i != j && starWars[i].numeroEpisodio == starWars[j].numeroEpisodio) {
                puts("Este episodio ja foi inserido. Cadastro sera resetado.");
                i--;
                j = 6;
            }
        }
    }
    
    return 0;
}

int exibirLucasFilm(lucasFilm *starWars){
    int i, j = 1;

    for (i=0;i<10;i++) {
        if (starWars[i].numeroEpisodio == j){
            printf("O episodio %d\n", starWars[i].numeroEpisodio);
            printf("O titulo do StarWars e: %s\n", starWars[i].titulo);
            printf("O ano lancamento foi: %d\n", starWars[i].anoLancamento);
            i = -1;
            j++;
        }
	}
    
    return 0;
}

int main() {
    struct lucasFilm *starWars;

    starWars = calloc(6, sizeof(lucasFilm));

    puts("Lembrando que so existe 6 Filmes do STAR WARS.");
    preencherLucasFilm(starWars);
    exibirLucasFilm(starWars);

    free(starWars);

    return 0;
}
