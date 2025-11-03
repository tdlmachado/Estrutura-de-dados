#include <stdio.h>
#include <stdlib.h>

#define true 1 
#define false 0

//* Definição de tipos para peso(aresta) e booleano
typedef int TIPOPESO;
typedef int booll;

//todo Estrutura para representar uma adjacência (aresta) 
typedef struct adjacencia {
    int vertice;            //* índice do vértice de destino 
    TIPOPESO peso;          //* peso da aresta 
    struct adjacencia *prox; //* próximo elemento da lista encadeada 
} ADJACENCIA;

//todo Estrutura que representa um vértice (apenas a cabeça da lista) 
typedef struct vertice {
    ADJACENCIA *cab; //* ponteiro para a cabeça da lista de adjacência 
} VERTICE;

//todo Estrutura do grafo com número de vértices, arestas e vetor de vértices 
typedef struct grafo {
    int vertices;   //* número de vértices 
    int arestas;    //* número de arestas 
    VERTICE *adj;   //* vetor de vértices (cada um com sua lista de adjacência) 
} GRAFO;

//todo Cria um grafo com 'v' vértices.
//*   Aloca a estrutura GRAFO e o vetor de VERTICE, inicializando listas vazias. 
GRAFO *criaGrafo(int v){
    GRAFO *g = (GRAFO *) malloc(sizeof(GRAFO)); //* aloca memória para o grafo 
    g->vertices = v;      //* define número de vértices 
    g->arestas = 0;       //* inicialmente não há arestas
    g->adj = (VERTICE *) malloc(v * sizeof(VERTICE)); //* aloca vetor de vértices 
    
    //? Inicializa cada lista de adjacência como vazia (NULL) 
    for(int i = 0; i < v; i++){
        g->adj[i].cab = NULL;
    }

    return g; //* retorna o ponteiro para o grafo criado 
}

//todo Cria uma nova adjacência (nó da lista) para o vértice 'v' com peso 'peso' 
ADJACENCIA *criaAdj(int v, int peso){
    ADJACENCIA *temp = (ADJACENCIA*) malloc(sizeof(ADJACENCIA)); //* aloca nó 
    temp->vertice = v;     //* define vértice de destino 
    temp->peso = peso;     //* define o peso da aresta 
    temp->prox = NULL;     //* próximo inicialmente NULL 
    return temp;           //* retorna a nova adjacência 
}

//todo Insere uma aresta do vértice vi para vf com peso p.
//* A inserção é feita no início da lista de adjacência de vi. 
booll criaAresta(GRAFO *gr, int vi, int vf, TIPOPESO p){
    if (!gr) return false;                     //* verifica se o grafo existe 
    if ((vf < 0) || (vf >= gr->vertices)) return false; //* valida destino 
    if ((vi < 0) || (vi >= gr->vertices)) return false; //* valida origem 
    
    //* cria novo nó e insere no início da lista de adjacência
    ADJACENCIA *novo = criaAdj(vf, p);
    novo->prox = gr->adj[vi].cab; //* aponta para o primeiro elemento atual 
    gr->adj[vi].cab = novo;       //* atualiza cabeça da lista 
    gr->arestas++;                //* incrementa contador de arestas 
    return true;                  //* sucesso 
}

//todo Imprime o grafo: número de vértices, arestas e as listas de adjacência 
void imprime(GRAFO *gr){
    printf("Vertices: %d. Arestas %d.\n", gr->vertices, gr->arestas);
    
    //? percorre cada vértice e imprime sua lista de adjacência 
    for(int i = 0; i < gr->vertices; i++){
        printf("v%d: ", i);
        ADJACENCIA *ad = gr->adj[i].cab; //* percorre a lista encadeada 
        while(ad){
            printf("v%d(%d) ", ad->vertice, ad->peso); //* imprime destino e peso 
            ad = ad->prox; //* avança na lista 
        }
        printf("\n");
    }   
}

//todo Função principal: cria um grafo, adiciona arestas de exemplo e imprime 
int main(void){
    GRAFO *gr = criaGrafo(5); //* cria grafo com 5 vértices 
    
    //? adiciona arestas (origem, destino, peso) 
    criaAresta(gr, 0, 1, 2);
    criaAresta(gr, 1, 2, 4);
    criaAresta(gr, 2, 0, 12);
    criaAresta(gr, 2, 4, 40);
    criaAresta(gr, 3, 1, 3);
    criaAresta(gr, 4, 3, 8);
    
    //? imprime o grafo 
    imprime(gr);

    return 0; //* finaliza o programa 
}

