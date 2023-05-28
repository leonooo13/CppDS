#include<iostream>
using namespace std;
typedef struct vertex
{
    int adjvex;
    char data;
}vertex;

typedef struct graph
{
   int n;
   int adj[10][10];
}graph;
void initGraph(graph *g,int n){
    int i,j;
    g->n=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            g->adj[i][j]=0;
        }
    }
}
void addEdge(graph *g,int src,int dest,int weigth)
{
    g->adj[src][dest]=weigth;
    g->adj[dest][src]=weigth;
}
int main(){
    int v=5;
    graph *g;
    initGraph(g,v);

}


