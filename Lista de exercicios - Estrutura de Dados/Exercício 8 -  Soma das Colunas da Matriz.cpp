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
	int vetorsoma[2];
	
	// Inicializa todos os valores da vetor em 0
	for (int y=0;y<j;y++) {
		vetorsoma[y] = 0;
	}
	
	printf("\n--------------------------");
	printf("\n-- Elementos da matriz  --\n");
	printf("--------------------------\n");	
	// Lê o valor da matriz
	for (l=0;l<i;l++) {
		for (m=0;m<j;m++) {
			printf("Elemento[%d][%d]: ", l, m);
			scanf("%d", &matriz[l][m]);
			if (matriz[l][m] % 2 == 0) {
				vetorsoma[0] += matriz[l][m];	
			} else {
				vetorsoma[1] += matriz[l][m];	
			}
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
	printf("A soma dos vetor pares é: %d\n", vetorsoma[0]);
	printf("A soma dos vetor ímpares é: %d\n", vetorsoma[1]);
	getch();
}

