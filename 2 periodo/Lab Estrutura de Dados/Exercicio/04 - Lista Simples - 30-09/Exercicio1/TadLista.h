#define MAX 10
#define ERROR -1

struct nomes {
    char caracter;
};

typedef struct listaCaracter LISTA;

struct listaCaracter {
    int qtd;
    struct nomes dados[MAX];
};

LISTA* criarLista();

void liberarLista(LISTA* lista);

int tamanhoLista(LISTA* lista);

int inserirCaracter(LISTA* lista, char car);

char listainvertida(LISTA* lista, int i);