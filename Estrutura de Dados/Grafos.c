#include <stdio.h>
#include <stdlib.h>

// Definição de valores booleanos
#define true 1 
#define false 0

// Tipo para peso das arestas
typedef int TIPOPESO;

// Tipo booleano customizado
typedef int booll;

// Estrutura para representar uma adjacência (aresta)
typedef struct adjacencia {
    int vertice;            // índice do vértice de destino
    TIPOPESO peso;          // peso da aresta
    struct adjacencia *prox; // ponteiro para a próxima adjacência (lista ligada)
} ADJACENCIA;

// Estrutura que representa um vértice
typedef struct vertice {
    ADJACENCIA *cab; // cabeça da lista de adjacências do vértice
} VERTICE;

// Estrutura do grafo
typedef struct grafo {
    int vertices;   // número de vértices
    int arestas;    // número de arestas
    VERTICE *adj;   // vetor de vértices (cada vértice tem lista de adjacência)
} GRAFO;

// Função para criar um grafo com 'v' vértices
GRAFO *criaGrafo(int v){
    GRAFO *g = (GRAFO *) malloc(sizeof(GRAFO)); // aloca memória para o grafo
    g->vertices = v;      // define número de vértices
    g->arestas = 0;       // inicialmente não há arestas
    g->adj = (VERTICE *) malloc(v * sizeof(VERTICE)); // aloca vetor de vértices
    
    // Inicializa cada lista de adjacência como vazia
    for(int i = 0; i < v; i++){
        g->adj[i].cab = NULL;
    }

    return g; // retorna o ponteiro para o grafo criado
}

// Função para criar uma nova adjacência (aresta)
ADJACENCIA *criaAdj(int v, int peso){
    ADJACENCIA *temp = (ADJACENCIA*) malloc(sizeof(ADJACENCIA)); // aloca memória
    temp->vertice = v;     // define o vértice de destino
    temp->peso = peso;     // define o peso da aresta
    temp->prox = NULL;     // próximo da lista inicialmente nulo
    return temp;           // retorna a nova adjacência
}

// Função para criar uma aresta de vi -> vf com peso p
booll criaAresta(GRAFO *gr, int vi, int vf, TIPOPESO p){
    if (!gr) return false;                     // verifica se o grafo existe
    if ((vf < 0) || (vf >= gr->vertices)) return false; // verifica limites do vértice destino
    if ((vi < 0) || (vi >= gr->vertices)) return false; // verifica limites do vértice origem
    
    // Cria uma nova adjacência e adiciona no início da lista de adjacência
    ADJACENCIA *novo = criaAdj(vf, p);
    novo->prox = gr->adj[vi].cab; // aponta para o primeiro elemento atual da lista
    gr->adj[vi].cab = novo;       // atualiza a cabeça da lista
    gr->arestas++;                // incrementa contador de arestas
    return true;                  // sucesso
}

// Função para imprimir o grafo
void imprime(GRAFO *gr){
    printf("Vertices: %d. Arestas %d.\n", gr->vertices, gr->arestas);
    
    // Percorre cada vértice
    for(int i = 0; i < gr->vertices; i++){
        printf("v%d: ", i);
        ADJACENCIA *ad = gr->adj[i].cab; // percorre a lista de adjacência
        while(ad){
            printf("v%d(%d) ", ad->vertice, ad->peso); // imprime vértice de destino e peso
            ad = ad->prox; // vai para próxima adjacência
        }
        printf("\n");
    }   
}

// Função principal: cria grafo, adiciona arestas e imprime
int main(void){
    GRAFO *gr = criaGrafo(5); // cria grafo com 5 vértices
    
    // Adiciona arestas (origem, destino, peso)
    criaAresta(gr, 0, 1, 2);
    criaAresta(gr, 1, 2, 4);
    criaAresta(gr, 2, 0, 12);
    criaAresta(gr, 2, 4, 40);
    criaAresta(gr, 3, 1, 3);
    criaAresta(gr, 4, 3, 8);
    
    // Imprime o grafo
    imprime(gr);

    return 0; // finaliza o programa
}

