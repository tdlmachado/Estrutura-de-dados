#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, diferenca, menor=100, maior=0, vetor[5];

	for(i=0;i<5;i++){
		printf("Digite o %d° valor do vetor:", i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i]>maior){
			maior = vetor[i];
		}if(vetor[i]<menor){
			menor = vetor[i];
		}
	}
	
	diferenca = maior - menor;
	printf("\n");	
	
	printf("A diferença entre o menor e o maior valor é: %d\n",diferenca);	
	getch();
}


