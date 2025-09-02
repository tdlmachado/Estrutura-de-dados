#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");

	float matrix[3][4];
	float medias[3] = {0, 0, 0};
	int i, j;
	
	printf("  ---- Entrada das notas ----\n");

	// Entrada dos valores das notas
	for (i=0;i<3;i++) {
		for (j=0;j<4;j++) {
			printf("Digite a nota da %d� linha na %d� coluna: ", i+1, j+1);
			scanf("%f", &matrix[i][j]);
		}
		printf("-------------------------------------\n");
	}
	
	// Calcula e armazena a m�dia em um novo vetor, com a soma de de cada linha 
	for (i=0;i<3;i++) {
		for (j=0;j<4;j++) {
			medias[i] += matrix[i][j];
		}
		medias[i] /= j;
	}
	
	// Imprime as m�dias de cada linha da matriz
	printf("\n  ---- M�dia de nota das linhas ----\n");
	for (i=0;i<3;i++) {
		printf("A m�dia da notas da %d linha �: %.2f\n", i+1, medias[i]);
	}
	getch();	
}
