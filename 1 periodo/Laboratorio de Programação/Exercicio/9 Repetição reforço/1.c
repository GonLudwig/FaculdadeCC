/* 01 – Peça ao usuário que informe um número N, leia outros N números e calcule a média
aritmética entre eles. Isso é, N, corresponde a quantidade de outros números a serem
lidos*/

#include <stdio.h>

int main() {
    int qtd, i, num, sunNum;
    float arith;
    
    puts("Digite a quantidade de numeros que ira compor a media aritmetica");
    scanf("%d", &qtd);
    
    for (i = 1; i <= qtd; i++){
        printf("Digite o %d numero", i);
        scanf("%d", &num);
        sunNum += num;
    }
    
    arith = sunNum / qtd;
    
    printf("A media aritmetica foi de %.2f", arith);
    
    return 0;
}