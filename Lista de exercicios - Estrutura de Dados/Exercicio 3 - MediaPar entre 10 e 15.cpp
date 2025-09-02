#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int mat [2][4];
	float mediaPar;
	int i,j,cont,contPar;
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			mat[i][j] = rand() % 20; // Inicializa a matriz com valores randomizados.
			
			// Verifica se os elementos estão no intevalo caso esteja adiciona mais um ao contador
			if(mat[i][j] >= 10 && mat[i][j] <= 15){
				cont++;
			}
			
			// Utiliza mod para localizar os números pares na matriz, e soma este número na média e acresenta mais um ao contador par
			if(mat[i][j] % 2 == 0){
				mediaPar += mat[i][j];
				contPar++;
			}
		}
	}
	
	// Realiza o cálculo para obter a média dos valores pares da matriz
	mediaPar /= contPar;
	
	printf("\t------- Matriz 2x4 -------\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("\t%d |", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n-------------------------------------------\n");
	printf("A quantidade de Números entre 10 e 15 é: %d", cont);
	printf("\nA media dos valores pares é: %.2f", mediaPar);
	printf("\n-------------------------------------------\n");

	
	getch();
}
