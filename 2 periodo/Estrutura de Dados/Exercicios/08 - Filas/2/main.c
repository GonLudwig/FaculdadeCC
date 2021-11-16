/*02 – A CSMO (Central de Saúde de Massachusetts do Oeste) nos contratou novamente
para uma tarefa. Essa pequena cidade no interior de Minas Gerais está quase finalizando
a vacinação da população com a terceira dose das vacinas contra Covid19, e sabem que
não devem possibilitar o contágio das pessoas na fila para a vacinação.
Você deve desenvolver uma fila para que as pessoas se cadastrem, a fim de irem
se vacinar apenas no horário determinado.
Seu programa deve sempre inserir as pessoas na fila, informando na hora do
cadastro o horário previsto da vacinação.
•
Cadastro
◦ O cidadão informa seu nome e ano de nascimento.
◦ O programa gera um horário, armazena o horário “junto” com as
informações do cidadão, e exibe na tela na hora do cadastro
•
Geração de horário
◦ Os horários são sempre um número inteiro que representam minutos
◦ O primeiro horário disponível é o 0 (zero), o próximo é o 10, depois 20… Ou
seja, as vacinações são agendadas sempre de 10 em 10 minutos.
◦ Como as vacinações têm um horário máximo definido, podem ser
agendadas vacinações nos seguintes horários, de 0 a 590:
▪ 0, 10, 20, 30, 40, 50, 60, 70, 80, até … 530, 540, 550, 560, 570, 580, 590
•
Função de conversão
◦ Seu programa deve possuir uma função para converter esses minutos em
um horário correto.
◦ Isso é, seu programa deverá armazenar na fila apenas esse número dos
minutos. Na hora de exibir para o usuário, você deve chamar a seguinte
função:
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
•
Atender paciente: Exibe o nome do primeiro da fila, o horário do atendimento e
remove-o da fila.*/
#include "vacinacao.h"

int main(){
    FPACIENTE *fila = criarFilaPacientes();
    int escolha = 1;
    int anoNascimento;
    int horariosMarcados;
    char nome[100];

    while (escolha != 0){
        puts("Bem-vindo ao CSMO");
        puts("Digite 1 - Acidionar paciente");
        puts("Digite 2 - Vacinar pacientes da fila");
        puts("Digite 0 - Sair");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                if(horariosMarcados > 590){
                    puts("Todos horarios ja estão marcados!");
                } else {
                puts("Digite o nome do paciente");
                __fpurge(stdin);
                fgets(nome, 100, stdin);
                puts("Digite o ano de nascimento do paciente");
                scanf("%d", &anoNascimento);
                horariosMarcados = adicionarPaciente(fila, nome, anoNascimento);
                }
                break;
            case 2:
                atenderPacientes(fila);
                break;
            case 0:
                puts("Obrigado tenha um bom dia");
                break;
            default:
                puts("Escolha invalida!");
                break;
        }
    }
    
    liberaFila(&fila);
    return 0;
}