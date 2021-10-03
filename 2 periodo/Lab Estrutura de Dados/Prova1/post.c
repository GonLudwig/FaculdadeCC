#include "post.h"

struct interacao {
    int curtidas;
    int compartilhamentos;
    int comentarios;
};

struct postagem {
    char legenda[300];
    struct interacao botao;
};

POST *criarPost(){
    POST *foto = (POST*) calloc(1, sizeof(POST));

    foto->botao.curtidas = 0;
    foto->botao.compartilhamentos = 0;
    foto->botao.comentarios = 0;

    return foto;
}

void addLegenda(POST *foto, char *legenda) {

    strcpy(foto->legenda, legenda);

    if(strcmp(foto->legenda, legenda)){
        puts("Legenda adicionada!");
    }
}

void curtiFoto(POST *foto){
    foto->botao.curtidas++;
    puts("Foto Curtida!");
}

void compartilharFoto(POST *foto){
    foto->botao.compartilhamentos++;
    puts("Foto foi compartilhada!");
}

void comentarFoto(POST *foto){
    foto->botao.comentarios++;
    puts("Foto foi comentada!");
}

void exibirFoto(POST *foto){

    printf("Sua foto\n %s \n", foto->legenda);
    puts("Possui!");
    printf("%d - Curtidas!\n", foto->botao.curtidas);
    printf("%d - Compartilhamentos!\n", foto->botao.compartilhamentos);
    printf("%d - Comentarios!\n", foto->botao.comentarios);
}

void liberarFoto(POST *foto){
    free(foto);
}
