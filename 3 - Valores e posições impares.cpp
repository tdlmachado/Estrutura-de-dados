#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int a[4], i;
	float s=0, s2=0;
	//entrada dos valores no vetor
	for (i=0; i<=3; i++){
		printf("Entre com o Valor do vetor na posição %d\n", i);
		scanf("%d", &a[i]);		
	}
	//calculo dos valores nas posições impares
	for (i=0; i<=3; i++){
		if(i%2!=0){ 
			s+=a[i];
		}
	}
	//calculo dos valores impares
	for (i=0; i<=3; i++){
		if(a[i]%2!=0){
			s2+=a[i];
		}
	}
	//Mostra os resultados
	printf("\n\t---- RESULTADOS ----\n");
	printf("Soma dos valores nas posições ímpares: %.2f", s);	
	printf("\nSoma dos valores ímpares: %.2f", s2);	
}
