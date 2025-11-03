#include <stdio.h>
#define true 1 
#define false 0
typedef int bool;
typedef int TIPOPESO;

typedef struct adjacencia {
    int vertice;
    TIPOPESO peso;
    struct adjacencia *prox;
} ADJACENCIA;

typedef struct vertice {
    ADJACENCIA *cab; // Cabeça da lista de adjacências
} VERTICE;

typedef struct grafo {
    int vertices;
    int arestas;
    VERTICE *adj; // Vetor de vértices
} GRAFO;

GRAFO *criaGrafo(int v){
    GRAFO *g = (GRAFO *) malloc(sizeof(GRAFO));
    if (g == NULL) {
        printf("Erro ao alocar grafo!\n");
        return NULL;
    }

    g->vertices = v;
    g->arestas = 0;
    g->adj = (VERTICE *) malloc(v * sizeof(VERTICE));
    if (g->adj == NULL) {
        printf("Erro ao alocar vertices!\n");
        free(g);
        return NULL;
    }

    // Inicializa as listas de adjacências
    for (int i = 0; i < v; i++) {
        g->adj[i].cab = NULL;
    }

    return g;
}