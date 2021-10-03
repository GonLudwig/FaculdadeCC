/* Luiz Augusto decidiu comprar um carro, cansou-se de andar de ônibus.
Entretanto ele não possui muito dinheiro, portanto optou por modelos seminovos ou usados.
Luiz Augusto foi em uma concessionária e verificou as opções de veículos,
mas como são muitas, teve dificuldade de escolher. Observe as opções de veículos: */

#include <stdio.h>

int main() {
    float valor;

    printf("Qual valor você tem disponivel para compra do veiculo:");
    scanf("%f", &valor);

    printf("Voce pode comprar esses carros\n");
    if (valor >= 6750) {
        printf("Chevrolet Chevette R$ 6.750,00\n");
        if (valor >= 7900) {
            printf("Volkswagen Fusca R$ 7.900,00\n");
            if (valor >= 9550) {
                printf("Fiat Tempra R$ 9.550,00\n");
                if (valor >= 12000) {
                    printf("Fiat Uno R$ 12.000,00\n");
                    if (valor >= 18990) {
                        printf("Chevrolet Astra R$ 18.990,00\n");
                        if (valor >= 28000) {
                            printf("Cherry QQ R$ 28.000,00\n");
                            if (valor >= 30990) {
                                printf("Renault Kwid R$ 30.990,00\n");
                                if (valor >= 35000) {
                                    printf("Fiat Mobi R$ 35.000,00\n");
                                    if (valor >= 38750) {
                                        printf("Chevrolet Onix R$ 38.750,00\n");
                                        if (valor >= 39000) {
                                            printf("Volkswagen Gol R$ 39.000,00\n");
                                            if (valor >= 46690) {
                                                printf("Peugeot 208 R$ 46.690,00\n");
                                                if (valor >= 53000) {
                                                    printf("Ford Fiesta R$ 53.000,00\n");
                                                    if (valor >= 62000) {
                                                        printf("Volkswagen Polo R$ 62.000,00,00\n");
                                                        if (valor >= 89999.99) {
                                                            printf("Ford Focus R$ 89.999,990\n");
                                                            if (valor >= 102000) {
                                                                printf("Fiat Toro R$ 102.000,00\n");
                                                                if (valor >= 139900) {
                                                                    printf("Chevrolet s10 R$ 139.900,00\n");
                                                                    if (valor >= 145000) {
                                                                        printf("Ford RangerR$ 145.000,00\n");
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}