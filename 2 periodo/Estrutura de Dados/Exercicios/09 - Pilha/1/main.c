/*01 – No atual momento muitas pessoas estão passando por dificuldades financeiras. Isso
ocorre com o senhor José Alfredo Jimenez, um mexicano que se mudou para o Brasil logo
antes da pandemia de Covid 19.
Assim sendo ele escolheu não pagar todas as contas, sempre que chega uma nova
conta ela é inserida no topo de uma pilha. Quando ele recebe um valor em dinheiro, ele
vai desempilhando-as e pagando enquanto o dinheiro for suficiente.
Crie um programa para gerenciar a pilha de contas do senhor Jimenez. Faça um
menu com as seguintes opções:
•
Cadastrar uma conta
◦ O senhor José Alfredo Jimenez informa o valor da compra
◦ A conta deve ser inserida no topo da pilha
•
Mostrar o total de dívidas
◦ Seu programa deve exibir na tela o total que o senhor Jimenez ainda
deve
•
Pagar contas
◦ O senhor José Alfredo insere um valor, e seu programa desempilha as
contas enquanto o valor for suficiente. Se sobrar algum valor, fique com
ele como pagamento por seu serviço de programador.
▪ Enquanto o valor disponível for maior ou igual a conta do topo da
pilha:
• Exiba o valor da conta – Diga que ela foi paga – desempilhe-a
• Repita a análise para a conta que passou a estar no topo.*/
#include"conta.h"

int main(){
    PCONTA *pConta;
    int escolha = 1;
    float saldoConta;
    float valorConta;
    char conta[50];

    pConta = pilhaConta();

    while (escolha != 0){
        puts("Questão de contas!");
        puts("Digite 1 - Adicionar conta.");
        puts("Digite 2 - Pagar contas.");
        puts("Digite 0 - Sair.");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                puts("Qual nome da conta.");
                __fpurge(stdin);
                fgets(conta, 50, stdin);
                puts("Qual valor da conta.");
                scanf("%f", &valorConta);
                adicionarConta(pConta, valorConta, conta);
                break;
            case 2:
                puts("Digite valor recebido.");
                scanf("%f", &valorConta);
                pagarConta(pConta, valorConta);
                break;
            case 0:
                puts("Obrigado pela preferencia!");
                break;
            default:
                puts("Escolha invalida!");
                break;
        }
    }
    
    liberarConta(&pConta);
    return 0;
}