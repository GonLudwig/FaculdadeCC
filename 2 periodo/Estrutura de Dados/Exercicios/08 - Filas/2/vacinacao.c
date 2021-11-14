#include "vacinacao.h"

struct pessoa {
    int anoNasc;
    int horarioMarcado;
    char nome[100];
    struct pessoa *proximo;
    struct pessoa *anterior;
};

struct filaVacinacao {
    int qtdPessoa;
    int horariosMarcados;
    struct pessoa *inicio;
    struct pessoa *fim;
};

PACIENTE *criarPessoa(char *nome, int ano, int horario){
    PACIENTE *pessoa = (PACIENTE*) calloc(1, sizeof(PACIENTE));

    pessoa->anoNasc = ano;
    pessoa->horarioMarcado = horario;
    strcpy(pessoa->nome, nome);
    pessoa->anterior = NULL;
    pessoa->proximo = NULL;

    return pessoa;
}

FPACIENTE *criarFilaPacientes(){
    FPACIENTE *fila = (FPACIENTE*) calloc(1, sizeof(FPACIENTE));

    fila->qtdPessoa = 0;
    fila->horariosMarcados = 0;
    fila->inicio = NULL;
    fila->fim = NULL;

    return fila;
}

int adicionarPaciente(FPACIENTE *fila, char *nome, int ano){
    PACIENTE *pessoa = criarPessoa(nome, ano, fila->horariosMarcados);
    pessoa->proximo = fila->inicio;

    if(fila->inicio == NULL){
        fila->fim = pessoa;
    } else {
        fila->inicio->anterior = pessoa;
    }

    fila->inicio = pessoa;
    fila->qtdPessoa++;
    fila->horariosMarcados += 10;

    return fila->horariosMarcados;
}

void mostraHoraCerta(int horarioMarcado){
    int horas = 8;//vacinação começa as 8h
    int minutos = 0;
    while(horarioMarcado >= 60){
        horas++;
        horarioMarcado = horarioMarcado-60;
    }
    minutos = horarioMarcado;
    printf("Vacinação marcada para %d : %d h\n", horas, minutos);
}

int atenderPacientes(FPACIENTE *fila){
    PACIENTE *aux = NULL;
    PACIENTE *percorer = fila->fim;

    if(percorer == NULL){
        puts("Fila esta vazia!");
    }
    while(percorer != NULL){
        printf("Nome: %s\n", percorer->nome);
        mostraHoraCerta(percorer->horarioMarcado);
        puts("Atendendo paciente ...");
        aux = percorer;
        percorer = percorer->anterior;
        free(aux);
        fila->qtdPessoa--;
    }
}

void liberaFila(FPACIENTE **fila){
    FPACIENTE *f = *fila;

    PACIENTE *aux = NULL;
    PACIENTE *percorer = f->inicio;

    while(percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }

    free(f);
}