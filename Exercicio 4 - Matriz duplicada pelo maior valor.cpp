#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int matrix[3][2];
	int maior[3];
	
	// Carrega a matriz | Verifica qual o maior valor entre os dados carregados e transfere este valor para a variável maior
	for (int i=0;i<3; i++){
		for (int j=0;j<2;j++) {
			matrix[i][j] = rand() % 20; // Randomiza os valores carregados 
			}
		if (matrix[i][0] > matrix[i][1]) {
			maior[i] = matrix[i][0];
		} else {
			maior[i] = matrix[i][1];
		}	
	}
	printf("---------------------\n");
	printf("-- Matriz Original --\n");
	printf("---------------------\n");
	// Imprime a matriz original antes da duplicação
	for (int i=0;i<3; i++){
		for (int j=0;j<2;j++) {
			printf("    |%d |", matrix[i][j]);
		}
		printf("\n");
	}
	
	// Efetua o Calculo de duplicação na matriz
	for (int i=0;i<3; i++){
		for (int j=0;j<2;j++) {
			matrix[i][j] *= maior[i];
		}
	}
	printf("\n-------------------------\n");
	printf("-- Matriz Multiplicada --\n");
	printf("-------------------------\n");
	// Imprime a matriz multiplicada
	for (int i=0;i<3; i++){
		for (int j=0;j<2;j++) {
			printf("    |%d |", matrix[i][j]);
		}
		printf("\n");
	}
	getch();
}
