#include <stdio.h>

int buscarBinariaRecursiva(int *vector, int inicio, int fim, int procura) {
    int i = (inicio + fim) / 2;

    if (inicio > fim) {
        return -1;
    }

    if (vector[i] == procura) {
        return i;
    }

    if (vector[i] < procura) {
        return buscarBinariaRecursiva(vector, i + 1, fim, procura);
    } else {
        return buscarBinariaRecursiva(vector, inicio, i - 1, procura);
    }
}    