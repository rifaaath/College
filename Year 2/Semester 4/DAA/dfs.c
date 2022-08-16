//Write a program to check whether a given graph is connected or not using DFS method and determine the time required.
#include<stdio.h>
#include<time.h>

int count=0;
int v,e;
int visited[20], g[20][20];

void dfs(int w)
{
    count++;
    visited[w]=count; //Mark vertex w as visited 
    printf("%d(%d)\t",w,visited[w]);
    for(int j=1; j<=v; j++)
        if(g[w][j]==1 && visited[j]==0) dfs(j);
}


void create_graph()
{
    int ch, v1, v2;
    printf("Graph type (1. Directed 2. Undirected): ");
    scanf("%d", &ch);
    printf("Number of vertices: "); scanf("%d", &v);
    printf("Number of edges: ");    scanf("%d", &e);
    printf("Enter value: ");
    for(int i=0; i<e; ++i)
    {
        printf("\nEdge %d: ", i);   scanf("%d%d", &v1, &v2);
        if(ch==1)   g[v1][v2] = 1;  //Directed
        else        g[v1][v2] = g[v2][v1] = 1;  //Undirected
    }
}

int main()
{
    int st;
    create_graph();
    printf("Enter start node: ");   scanf("%d", &st);
    clock_t t = clock();
    dfs(st);
    t = clock()-t;
    if(count == v)  printf("Connected");
    else    printf("Not connected");
    printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}

