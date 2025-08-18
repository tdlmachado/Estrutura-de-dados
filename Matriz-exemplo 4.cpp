#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int mat[4][4];
	int i,j;
	
	printf("   ----- Matriz(0 e 1) ----- \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i == j){
				mat[i][j] = 1;
			}else{
				mat[i][j] = 0;
			}
			printf("   %d\t", mat[i][j]);	
		}
		printf("\n");
	}
}

