#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i;

	int vetorA[6], vetorB[6], vetorC[6];
	
	// Inicializa os valores da vetor C em 0
	for (int y=0;y<6;y++) {
		vetorC[y] = 0;
	}
	
	printf("\n--------------------------");
	printf("\n-- Elementos da matriz  --\n");
	printf("--------------------------\n");	
	
	// Lê o valor do vetor A
	for (i=0;i<6;i++) {
		printf("Elemento [%d] do vetor A: ", i);
		scanf("%d", &vetorA[i]);
	}
	
	printf("--------------------------\n");	
	
	// Lê o valor do vetor B
	for (i=0;i<6;i++) {
		printf("Elemento [%d] do vetor B: ", i);
		scanf("%d", &vetorB[i]);
	}
	
	// Vetor C
	for (i=0;i<6;i++) {
		if (i % 2 == 0) {
			vetorC[i] = vetorA[i];
		} else {
			vetorC[i] = vetorB[i];	
		}
	}

	printf("\n------------------------\n");
	printf("-- Matriz Falsa Digitada --\n");
	printf("-------------------------\n");	
	// Mostra a matriz
	for (i=0;i<6;i++) {
		printf("  |%d| |%d| |%d|", vetorA[i], vetorB[i], vetorC[i]);
		printf("\n");
	}
	getch();
}

