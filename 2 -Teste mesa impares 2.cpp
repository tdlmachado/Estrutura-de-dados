#include <Stdlib.h>
#include <conio.h>
#include <Stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int num[10];
	int i,x,y, sp=0, sv=0;
	x=1;
	y=2;
	num[x] = y*y;
	num[y] = x;
	num[x+y] = num[x];
	num[6] = num[1]+num[3];
	num[num[x]] = num[6]-num[y];
	num[x+y] = x*y;
	num[3+4] = num[6]*2;
	num[x-1] = x+y;
	num[num[x]+1] = num[x]+num[y];
	num[num[6]+1] = num[6+1];
	num[4*2] = num[9]-num[7]+x;
	
	//resultado do teste mesa
	printf("O valores do teste mesa s�o:\n\n");
	printf("Posi��o | valor\n");
		
	for(i=0; i<=9; i++){
		printf("   %d\t  %d\n", i, num[i]);
		
		// aqui ele valida a soma dos valores de posi��o par
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
	//resultado numeros/posi��es pares
	printf("\nA soma dos valores nas posi��es pares � %d, e a soma dos valores pares � %d ", sp,sv);
}
