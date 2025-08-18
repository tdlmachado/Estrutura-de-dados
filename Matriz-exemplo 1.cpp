#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int matriz[4][3]={
	{2,3,8},
	{1,7,4},
	{0,3,6},
	{4,1,5}};
	int i,j,x=0,y=1;
	
	
	printf("--- Matriz original ---\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--- Matriz modificada ---\n");
	matriz[x][y] = matriz[x][y]+1;
	matriz[x+y][y+y] = matriz[3][2];
	matriz[y][x] = matriz[x][y];
	matriz[2][1] = matriz[1][2];
	
	// Imprime os valores após a mudança
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

