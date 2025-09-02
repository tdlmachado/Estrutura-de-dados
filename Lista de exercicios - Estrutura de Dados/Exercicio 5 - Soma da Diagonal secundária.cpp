#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, j, n, soma;
	
	printf("-----------------------\n");
	printf("-- Tamanho da Matriz --\n");
	printf("-----------------------\n");
	// Entrada da quantidade de linhas na matriz
	printf("Quantas linhas desejas? \n");
	scanf("%d", &i);
	
	// Entrada da quantidade de colunas na matriz
	printf("Quantas colunas desejas? \n");
	scanf("%d", &j);
	n = (i + j)/2;
	int matriz[i][j];
	
	// Entrada dos elementos da matriz
	printf("\n--------------------------");
	printf("\n-- Elementos da matriz  --\n");
	printf("--------------------------\n");
	for (int l=0;l<i;l++) {
		for (int m=0;m<j;m++){
			printf("Digite o valor:");
			scanf("%d", &matriz[l][m]);
		}
	}
	printf("\n---------------------\n");
	printf("-- Matriz Digitada --\n");
	printf("---------------------\n");

	// Verifica quais os elementos estão na diagonal secundária e imprime eles destacado
	for (int l=0;l<i;l++) {
		for (int m=0;m<j;m++){
			if (l + m == n - 1) {
				printf("   |%d|", matriz[l][m]);
				soma += matriz[l][m];
			} else {
				printf("   %d", matriz[l][m]);
			}
		}
		printf("\n");
	}
	
	printf("---------------------\n");
	// Imprime a soma dos valores da diagonal
	printf("A soma da diagonal secundária é: %d", soma);
	
	getch();
}
