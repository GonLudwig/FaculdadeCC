/* O senhor José Alfredo Jimenez possuía uma fazenda nos arredores da Cidade do México.
Quando já idoso, ele acostumava pescar numa lagoa que lá existia.
Contudo,como já não entendia de peixes, tinha dificuldades de saber qual espécie havia pescado.
Então, como diariamente pescava 10 peixes, ele media os peixes e baseado no comprimento sabia qual a espécie.
Veja:
Um lambari possui entre 10 e 15 cm aproximadamente. 
Um bagre costuma medir entre 16 e 22 cm 
tilápia costumamedir entre 23 e 30 cm.
Faça um programa que receba o comprimento de cada um dos dez peixes. 
E exiba a espécie de cada um deles. Se ele pescar um peixe maior que 30 cm ou menor que 10cm,
 exiba que é uma espécie desconhecida. */ 

#include <stdio.h>

int main() {

    int peixe = 0, lambari = 0, bagre = 0, tilapia = 0, desconheido = 0;

    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;  
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    
    printf("Qual e o comprimento do peixe em cm?");
    scanf("%d", &peixe);
    if (peixe >= 10 && peixe <= 15){
        lambari++;
    } else if (peixe >= 16 && peixe <= 22) {
        bagre++;
    } else if (peixe >= 23 && peixe <= 30) {
        tilapia++;
    } else {
        desconheido++;
    }
    printf("Ele pescou %d - Lambari, %d - Bagre, %d - Tilapia, %d - Desconhecido\n", lambari, bagre, tilapia, desconheido);
    return 0;
}
