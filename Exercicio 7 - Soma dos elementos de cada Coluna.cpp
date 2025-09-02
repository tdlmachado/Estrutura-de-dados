#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, j, l, m;

	printf("-----------------------\n");
	printf("-- Tamanho da Matriz --\n");
	printf("-----------------------\n");
	// Pede a quantidade de linhas
	printf("Quantas linhas desejas? \n");
	scanf("%d", &i);
	// Pede a quantidade de colunas
	printf("Quantas colunas desejas? \n");
	scanf("%d", &j);
	
	int matriz[i][j];
	int coluna[j];
	
	// Inicializa todos os valores da coluna em 0
	for (int y=0;y<j;y++) {
		coluna[y] = 0;
	}
	
	printf("\n--------------------------");
	printf("\n-- Elementos da matriz  --\n");
	printf("--------------------------\n");	
	// Lê o valor da matriz
	for (l=0;l<i;l++) {
		for (m=0;m<j;m++) {
			printf("Elemento[%d][%d]: ", l, m);
			scanf("%d", &matriz[l][m]);
			coluna[m] += matriz[l][m];
		}
	}

	printf("\n---------------------\n");
	printf("-- Matriz Digitada --\n");
	printf("---------------------\n");	
	// Mostra a matriz
	for (l=0;l<i;l++) {
		for (m=0;m<j;m++){
			printf("    |%d|", matriz[l][m]);
		}
		printf("\n");
	}
	
	printf("------------------------\n");
	for (int x=0; x<m; x++) {
		printf("A soma dos elementos da %dº coluna é: %d\n", x+1, coluna[x]);
	}
	getch();
}
