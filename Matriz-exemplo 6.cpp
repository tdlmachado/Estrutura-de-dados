#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int mat[3][3];
	int linha[3]={0,0,0};
	int i, j, smt;
	
	printf(" -------------------------------------");
    printf("\n -- Digite os Valores dos Elementos -- \n");
    printf(" -------------------------------------\n");  
	// Entrada dos valores da matriz
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			linha[i] += mat[i][j];
		}
		printf("\n");
	}
	system("cls");
	
	//Imprime a matriz
	printf(" ---------------------");
    printf("\n -- Matriz Digitada -- \n");
    printf(" ---------------------\n");  
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		printf("  |%d|\t", mat[i][j]);
		}
	printf("\n");
	}
	
	// Imprime as somas
	printf("\n-----------------------------\n");
	smt = linha[0]+linha[1]+linha[2];
	printf("A soma da 1º linha é: %d\n", linha[0]);
	printf("A soma da 2º linha é: %d\n", linha[1]);
	printf("A soma da 3º linha é: %d\n", linha[2]);
	printf("A soma total das linhas é: %d", smt); 

    return 0;
}
