#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "portuguese");
    float notas[5], diferencas[5], QTD_alunos, soma = 0, media;
    int i, cont=0;
    
    // Leitura dos alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%f", &QTD_alunos);

    // Leitura das notas
    for (i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / QTD_alunos;

    // Cálculo da diferença entre cada nota e a média
    for (i = 0; i < 5; i++) {
        diferencas[i] = notas[i] - media;
    }

	system("cls");
    // Exibição das notas
    printf("Média das notas: %.2f\n", media);
    printf("Diferença entre cada nota e a média:\n");
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d: %.2f\n", i+1, diferencas[i]);
    }
    
}
