#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i,vet1[6],vet2[6];
	int matriz[6][2];

	printf("  ---- Entrada dos elementos ----\n");

	// Entrada de Dados do primeiro vetor
	for (int i=0;i<6;i++) {
		printf("Digite o %dº elemento do 1º vetor: ", i+1);
		scanf("%d", &vet1[i]);
	}

	printf("-----------------------------------\n");
	
	// Entrada de Dados do segundo vetor
	for (int i=0;i<6;i++) {
		printf("Digite o %dº elemento do 2º vetor: ", i+1);
		scanf("%d", &vet2[i]);
	}

	// Realoca os Valores para a 1 e 2 coluna respectivamente
	for (int i=0; i<6; i++){
		matriz[i][0]=vet1[i];
		matriz[i][1]=vet2[i];
	}
	
	// Imprime a matriz com os valores realocados para as colunas
	printf("\n --- Matriz 6x2 digitada --- \n");
	for (int i=0; i<6; i++){
		printf("\t | %d | %d | \n", matriz[i][0], matriz[i][1]);
	}
	
	getch();
}
