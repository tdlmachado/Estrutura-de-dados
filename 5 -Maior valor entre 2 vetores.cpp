#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");
    int a[6], b[6], c[6];
    int i;

    printf("------- DIGITE OS VALORES -------\n");
    printf("\n\tPrimeiro Vetor\n");

    // Leitura do primeiro vetor
    for (i = 0; i < 6; i++) {
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    system("cls"); // limpa o console

    printf("------- DIGITE OS VALORES -------\n");
    printf("\n\tSegundo Vetor\n");

    // Leitura do segundo vetor
    for (i = 0; i < 6; i++) {
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    system("cls"); // limpa o console

    printf("------- RESULTADO FINAL -------\n");
    
    // Mostra o primeiro vetor
    for (i = 0; i < 6; i++) {
        printf("\nPrimeiro vetor posição %d: %d", i + 1, a[i]);
    }
   printf("\n--------------------------------");

    // Mostra o segundo vetor
    for (i = 0; i < 6; i++) {
        printf("\nSegundo vetor posição %d: %d", i + 1, b[i]);
    }
  
   printf("\n--------------------------------");

    // Calcula o maior valor entre os dois vetores
    for (i = 0; i < 6; i++) {
        if (a[i] > b[i]) {
            c[i] = a[i];
        } else {
            c[i] = b[i];
        }
        // Mostra os maiores valores
        printf("\nO maior valor entre os dois vetores na posição %d é: %d", i + 1, c[i]);
    }
}
