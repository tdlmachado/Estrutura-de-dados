#include <stdlib.h>
#include <stdio.h>

void merge (int array[], int left, int middle, int right){
	int i,j,k;
	int n1 = middle - left + 1; 
	int n2 = right - middle;
	
	int L[n1], R[n2];
	
	for(i = 0; i < n1; i++){
		L[i] = array[left + i];
	}
	for(j = 0; j < n2; j++){
		R[j] = array[middle + 1 + j];
	}
		
	printf("\n Mesclando as partes: [");
    for (i = 0; i < n1; i++){
    	printf(" %d ", L[i]);
	}
	
    printf("] e [");
    
    for (j = 0; j < n2; j++){
    	printf(" %d ", R[j]);
	} 
    printf("]\n");
	
	
	i = 0;
	j = 0;
	k = left;
	
	while(i < n1 && j < n2 ){
		if(L[i] <= R[j]){
			array[k] = L[i];
			i++;
		}else{
			array[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right){
	if(left < right){
		int middle = left + (right - left) / 2;
		
		mergeSort(array, left, middle);
		mergeSort(array, middle + 1, right);
		
		merge(array, left, middle, right);
		
	}
}


int main() {
    int array[100];
    int a = 0;  // contador de elementos
    int num;

    printf("Digite os numeros para realizar o Merge Sort (-1 para sair):\n");

    while (1) {
        printf("Numero %d: ", a + 1);
        scanf("%d", &num);
        if (num == -1){
        	break;
		}
        array[a] = num;
        a++;
    }

    int array_size = a;  // número real de elementos inseridos

    printf("\n---- Array antes do Merge ----\n");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    printf("\n---- Analise da mesclagem ----\n");
    mergeSort(array, 0, array_size - 1);
    	
    printf("\n---- Array ordenado por Merge Sort ----\n");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
