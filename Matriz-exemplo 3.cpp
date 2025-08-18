#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	
	// Imprime os valores da matriz A
	printf("--- Matriz A ---\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j] = rand() % 90;
			printf("%2d\t", a[i][j]);	
		}
		printf("\n");
	}
	
	// Imprime os valores da matriz B
	printf("\n--- Matriz B ---\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[i][j] = rand() % 90;
			printf("%2d\t", b[i][j]);	
		}
		printf("\n");

	}
	
	// Calcula o menor valor entre as matrizes 
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
        if (a[i][j] < b[i][j]) {
            c[i][j] = a[i][j];
        } else {
            c[i][j] = b[i][j];
    		}
		}
	}
	
	// Imprime o menor valor entre as matrizes 
	printf("\n--- Matriz C (Menor valor entre A e B) ---\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", c[i][j]);	
		}
		printf("\n");

	}
}

