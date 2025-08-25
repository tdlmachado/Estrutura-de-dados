#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3];
	int i, j, cont=0;
	srand(time(NULL)); 	// Randomiza novos números a cada inicialização

    printf(" ----------------------");
    printf("\n -- Matriz Imprimida -- \n");
    printf(" ----------------------\n");   
	// Lê o valor da matriz
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			matriz[i][j] = rand() % 20;
			if (matriz[i][j] >= 15 && matriz[i][j] <= 20) {
				cont++;
			}
		}
	}

	//Imprimi a matriz
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			printf("  |%d|\t", matriz[i][j]);
		}
		printf("\n");
	}


	printf("\n-----------------------------\n");
	printf("A quantidade de números maiores que 15 e menores que 20 é: %d\n", cont);

    return 0;
}
