#include <Stdlib.h>
#include <conio.h>
#include <Stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int num[10]= {3,4,6,2,1,6,8,2,9,5};
	int i,x,y, sp=0, sv=0;
	x=2;
	y=3;
	num[x] = num [x*y];
	num[num[x]] = num[x+y];
	num[y+1] = x+y;
	num[y-x] = num[num[y]];
	num[y] = num[y]+num[x];
	num[x-2] = num[y]+x;
	printf("O valores do teste mesa são:\n\n");
	printf("Posição | valor\n");
		
	//resultado do teste mesa	
	for(i=0; i<=9; i++){
		printf("   %d\t  %d\n", i, num[i]);
		// aqui ele valida a soma dos valores de posição par no vetor
		if(i%2 == 0)
		{
			sp=sp+num[i]; 
		}
		// aqui ele valida a soma dos valores pares do vetor
		if(num[i] % 2 == 0)
		{
			sv=sv+num[i];
		}	
	}
	//resultado mostra soma dos numeros/posições pares
	printf("\nA soma dos valores nas posições pares é %d, e a soma dos valores pares é %d ", sp,sv);
}
