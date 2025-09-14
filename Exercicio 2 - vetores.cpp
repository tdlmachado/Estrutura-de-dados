#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3] = {{6,6,3},{8,8,1},{2,3,1}};
    int n=3;
    int i,j,cont,soma=0,soma2=0,soma3=0; 

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("\t%d ", matriz[i][j]);
        }
        printf("\n");
    }
	
	// soma dos valores da diagonal secundária
    for (i=0;i<n;i++){
        for (j=0;j<n;j++) {
            if (i + j == n - 1) {
                soma += matriz[i][j];
                cont++;
            }
        }
    }
    
    // Soma dos valores da terceira coluna 
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if(j==2){
    			soma2 += matriz[i][j];
			}
		}
	}
	
	//soma dos valores pares na segunda coluna   	
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if(j==1){
    			if(matriz[i][j]%2 == 0){
    				soma3 += matriz[i][j];
				}
			}
		}
	}
	
    printf("\nA soma da diagonal secundária é: %d", soma/cont);
    printf("\nA soma da terceira coluna é: %d", soma2);
    printf("\nA soma dos valores pares da segunda coluna é: %d", soma3);

	getch();
}
