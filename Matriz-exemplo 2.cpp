#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int matriz[3][5]={
	{1,7,3,4,5},
	{2,6,5,1,0},
	{4,9,0,3,6}};
	int i,j;
	int vetor[3];
	
	printf("\t ----- Matriz Original -----\n");
	for(i=0;i<3;i++){
		vetor[i]=0;
		for(j=0;j<5;j++){
			vetor[i]+=matriz[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("|  %d  |",vetor[i]);
		printf("\n");
	}
}

