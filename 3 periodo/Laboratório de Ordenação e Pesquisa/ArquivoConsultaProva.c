// BubbleSort
int main (){ 

	int vetor[10] = {1 ,54 ,65 ,72 ,5 ,34 ,27 ,41 ,57 , 2};

	int count = 10;
	
	int i, j, aux;

	for (i = 1; i < count; i++){
		for (j = 0; j < count - i; j++){
			if (vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}

	for (i = 0; i < count; i++){
		printf("- %d", vetor[i]);
	}
	
	return 0;
}

// Heap Max
int main (){
	int i, j, aux;
	int vetor[10] = {12, 34, 65, 23, 387, 76, 56, 67, 98, 36};
	int n = 9;
	while(n >= 0){
		for(i = n; i > 0; i--){
			int direita = (i-2)/2;
			int esquerda = (i-1)/2;

			if(i%2 == 0){
				if(vetor[i] > vetor[direita]){
					aux = vetor[i];
					vetor[i] = vetor[direita];
					vetor[direita] = aux; 
				}
			}

			if(i%2 == 1){
				if(vetor[i] > vetor[esquerda]){
					aux = vetor[i];
					vetor[i] = vetor[esquerda];
					vetor[esquerda] = aux;
				}
			}
		}
		aux = vetor[0];
		vetor[0] = vetor[n];
		vetor[n] = aux;
		n = n - 1;
	}
	
	n = 9;
	
	for(i=0; i <= n; i++){
		printf(" - %d", vetor[i]);
	}
    printf("\n");
	return 0;
}

// InsertSort
int main (){

	int vetor[10] = { 6, 5, 3, 1, 7, 8, 4, 23, 10, 9};
	int n = 10;
	int i, aux, j;
    for (i = 1; i < n; i++) {
        aux = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > aux) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = aux;
    }

    for (i = 0; i < n; i++){
    	printf("%d\n", vetor[i]);
    }

}

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

// Shell Sort
int main(){
	
	int vetor[10] = {5, 1, 8, 3, 10, 7, 9, 2};
	int i , j , aux;
    int h = 1;
    while(h < 8) {
        h = 3*h+1;
    }
    while ( h > 1) {
        h /= 3;
        for(i = h; i < 8; i++) {
            aux = vetor[i];
            j = i - h;
            while (j >= 0 && aux < vetor[j]) {
                vetor [j + h] = vetor[j];
                j -= h;
            }
            vetor [j + h] = aux;
        }
    }
        
	return 0;
}


//MergeSort
/* C program for Merge Sort */
  
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    /* create temp arrays */
    int L[n1], R[n2];
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
  
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
  
/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    printf("Given array is \n");
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

void numerosAletorios (int *vetor, int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        vetor[i] = rand() % quantidade;
    }
}