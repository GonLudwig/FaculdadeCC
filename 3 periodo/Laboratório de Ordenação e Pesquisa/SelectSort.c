#include <stdio.h>

// SelectSort    
int main()
{
    int i, j, min_idx, temp;
    int n = 10;
    int vetor[10] = { 1, 5, 3, 6, 7, 8, 4, 23, 10, 9};
  
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
          if (vetor[j] < vetor[min_idx]){
            min_idx = j;
            temp = vetor[min_idx];
            vetor[min_idx] = vetor[i];
            vetor[i] = temp;
          }
        }
    }

    for (i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}