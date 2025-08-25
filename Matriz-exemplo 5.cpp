#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int mat[3][3];
    int mat2[3][3];
    int i, j, cont=0, cont2=0, soma=0, soma2=0;
    float media, media2;
	srand(time(NULL)); 

    printf(" --------------------------------");
    printf("\n -- Matriz (Diagonal primaria) -- \n");
    printf(" --------------------------------\n");    
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] = rand() % 10;
            if (i == j) {
            	// coloca colchetes nos numeros da diagonal primaria
            	printf(" [%d]\t", mat[i][j]); 
                soma += mat[i][j];
            }else{
                printf("  %d\t", mat[i][j]);
			}
        }
        cont++;
        printf("\n");
    }
	media = (float)soma / cont;

    printf("\n Soma da diagonal principal = %d", soma);    
    printf("\n Média da diagonal principal = %.2f\n", media);     
	                   
    printf("\n ----------------------------------");
    printf("\n -- Matriz (Diagonal secundária) -- \n");
    printf(" ----------------------------------\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat2[i][j] = rand() % 10;
            if (i + j == 2) { 
                // coloca colchetes nos numeros da diagonal secundária
                printf(" [%d]\t", mat2[i][j]);
				soma2 += mat2[i][j];
            } else {
                printf("  %d\t", mat2[i][j]);
            }
        }
        cont2++;
        printf("\n");
    }
    media2 = (float)soma2 / cont2;
    
    printf("\n Soma da diagonal secundária = %d", soma2);    
    printf("\n Média da diagonal secundária = %.2f", media2);
    
    return 0;
}

