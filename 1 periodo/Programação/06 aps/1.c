/*Um palíndromo é uma string que é soletrada da mesma forma da frente para trás
ou de trás para a frente. Alguns exemplos de palíndromos são "radar" "orava o avaro" e
"socorram marrocos". Escreva um programa que leia uma string e a armazene no array,
depois verifica se a string armazenada é um palíndromo e informa ao usuário. Deve-se
ignorar espaços e pontuação na string.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char limparString(char *frase) {
	
	int i, j, sizeFrase;
	
    sizeFrase = strlen(frase) - 1;

    for (i = 0, j = 0;i < sizeFrase;i++, j++) {
        if(frase[j] == ' '){
            j++;
        }
        if(frase[j] == '-'){
            j++;
        }
        if(frase[j] == '_'){
            j++;
        }
        if(frase[j] == '!'){
            j++;
        }
        if(frase[j] == '@'){
            j++;
        }
        if(frase[j] == '#'){
            j++;
        }
        if(frase[j] == '$'){
            j++;
        }
        if(frase[j] == '%'){
            j++;
        }
        if(frase[j] == '&'){
            j++;
        }
        if(frase[j] == '*'){
            j++;
        }
        if(frase[j] == '('){
            j++;
        }
        if(frase[j] == ')'){
            j++;
        }
        if(frase[j] == '{'){
            j++;
        }
        if(frase[j] == '}'){
            j++;
        }
        if(frase[j] == '['){
            j++;
        }
        if(frase[j] == ']'){
            j++;
        }
        if(frase[j] == ','){
            j++;
        }
        if(frase[j] == '.'){
            j++;
        }
        if(frase[j] == '<'){
            j++;
        }
        if(frase[j] == '>'){
            j++;
        }
        if(frase[j] == ':'){
            j++;
        }
        if(frase[j] == ';'){
            j++;
        }
        if(frase[j] == '/'){
            j++;
        }
        if(frase[j] == '?'){
            j++;
        }
        frase[i] = frase[j];
    }

}

char inverterString(char *frase) {
	int i, j, sizeNames;
	char namesTwo[strlen(frase)-1];

	sizeNames = strlen(frase) - 1;

	for (i = 0; i <= sizeNames; i++) {
    	frase[i] = tolower(frase[i]);
	}
    
	for (i = 0, j = sizeNames; i <= sizeNames; i++, j--){
    	namesTwo[i] = frase[j];
	}

    for (i = 0; i <= sizeNames; i++) {
    	frase[i] = namesTwo[i];
	}
    
}

char testPalindromo(char *frase) {
    char copiaFrase[strlen(frase)];
    int i, retorno;

    limparString(frase);
    strcpy(copiaFrase, frase);
    inverterString(frase);

    retorno = strcmp(copiaFrase, frase);
    
    if (retorno == 0) {
        puts("Esta frase e uma Palindromo!");
    } else {
        puts("Esta frase e nao uma Palindromo!");
    }
}

int main () {

    char texto[100];

    puts("Escreva um palavra e descubra se ela e um Polindromo:");
    gets(texto);

    testPalindromo(texto);

    return 0;
}
