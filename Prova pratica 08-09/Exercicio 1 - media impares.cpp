#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int matriz[3][3] = {{6,6,3},{8,8,1},{3,3,4}};;
    int medias[3] = {0, 0, 0};
    int i, j, cont, impares;

    for (i=0;i<3;i++) {
    	impares = 0; 
    	cont = 0;  
        for (j=0;j<3;j++) {
            if (matriz[i][j] % 2 != 0) {
                impares += matriz[i][j];
                cont++;
            }
        }
        medias[i] = impares /cont;
	}
		
	// Matriz imprimida 
   for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("\t%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (i=0;i<3;i++) {
        printf("A média dos valores impares da %d linha é: %d\n", i+1, medias[i]);
    }
    getch();    
}

