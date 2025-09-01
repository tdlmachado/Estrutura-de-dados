#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>


int main() {
	setlocale(LC_ALL, "portuguese");

	int mat[2][4];
	float mediaPar;
	int i,j,cont,contPar;
	
	for (i=0;i<2;i++) {
		for (j=0;j<4;j++) {
			mat[i][j] = rand() % 20;
			
			//Valores entre 10 e 15
			if (mat[i][j] >= 10 && mat[i][j] <= 15) {
				cont++;
			}
			
			//Media dos valores pares
			if(mat[i][j]%2 == 0){
				mediaPar += mat[i][j];
				contPar++;
			}
		}
	}
	mediaPar /= contPar;
	printf("-- Matriz 2x4 -- \n");
	for (i=0;i<2;i++) {
		for (j=0;j<4;j++) {
			printf("%d |", mat[i][j]);
		}
		printf("\n");
	}
	printf("A quantidade de numeros entre 10 e 15 é: %d", cont);
	printf("\nA media dos valores pares é: %f", mediaPar);
}
