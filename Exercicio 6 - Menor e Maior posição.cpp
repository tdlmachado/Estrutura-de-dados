#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, j, l, m, maior, linhaMaior, colunaMaior, menor, linhaMenor, colunaMenor;

	printf("-----------------------\n");
	printf("-- Tamanho da Matriz --\n");
	printf("-----------------------\n");
	// Entrada da quantidade de linhas
	printf("Quantas linhas desejas? \n");
	scanf("%d", &i);
	
	// Entrada da quantidade de colunas
	printf("Quantas colunas desejas? \n");
	scanf("%d", &j);
	int matriz[i][j];
	
	printf("\n--------------------------");
	printf("\n-- Elementos da matriz  --\n");
	printf("--------------------------\n");
	// Entrada dos valores da matriz
	for (int l=0;l<i;l++) {
		for (int m=0;m<j;m++){
			printf("Digite o valor: ");
			scanf("%d", &matriz[l][m]);
		}
	}
	
	// Verifica quais os valores de maior e menor onde l = linha e m = coluna
	for (l=0;l<i;l++) {
		for (m=0;m<j;m++){
			if (l == 0 && m == 0) {	  // se for o valor da primeira posição 
				maior = matriz[l][m];
				menor = matriz[l][m];
				linhaMaior = colunaMaior = l;
				linhaMenor = colunaMenor = m;
			} else { // Caso não seja o primeiro
				if (matriz[l][m] > maior) {
					maior = matriz[l][m];
					linhaMaior = l;
					colunaMaior = m;
				}
				if (matriz[l][m] < menor) {
					menor = matriz[l][m];
					linhaMenor = l;
					colunaMenor = m;
				}	
			}
		}
	}	
	printf("\n---------------------\n");
	printf("-- Matriz Digitada --\n");
	printf("---------------------\n");
	// Imprime a matriz digitada
	for (l=0;l<i;l++) {
		for (m=0;m<j;m++){
			printf("    |%d |", matriz[l][m]);
		}
		printf("\n");
	}
	printf("\n--------------------------------------\n");
	printf("O maior número foi %d na posição [%d][%d]\n", maior, linhaMaior, colunaMaior);
	printf("O menor número foi %d na posição [%d][%d]\n", menor, linhaMenor, colunaMenor);
	
	getch();
}
