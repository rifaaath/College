//Write a program to implement Bellman ford algorithm for the Single -Source -Shortest-Paths problem and determine the time required.
#include<stdio.h>
#include<time.h>

int v, e;
struct edges
{
    int s, d, w;    //source dest weight
}edge[20];


void create_graph()
{
    int ch, v1, v2, w;
    printf("Number of vertices: "); scanf("%d", &v);
    printf("Number of edges: ");    scanf("%d", &e);
    printf("Enter value: (SOURCE DEST WEIGHT) ");
    for(int i=0; i<e; ++i)
    {
        printf("\nEdge %d: ", i);   scanf("%d%d%d", &v1, &v2, &w);
        edge[i].s = v1;
        edge[i].d = v2;
        edge[i].w = w;
    }
}

void bellman(int source)
{
    int dist[40];
    for(int i=0; i<v; ++i)  
        dist[i] = 999;
    dist[source] = 0;

    //Relax all edge
    for (int i = 0; i < v - 1; i++) 
    {
        for (int j = 0; j < e; j++) 
        {
            int x = edge[j].s, y=edge[j].d, wt=edge[j].w;
            if (dist[x] != 999 && dist[x] + wt < dist[y])
                dist[y] = dist[x] + wt;
        }
        printf("\n%d %d\n", dist[edge[i].s],dist[edge[i].d]);
    }

    //Checking for -ve cycles
    for (int i = 0; i < e; i++) 
    {
        int x = edge[i].s, y=edge[i].d, wt=edge[i].w;
        if ((dist[x] + wt) < dist[y])
        {
            printf("Graph contains negative weight cycle\n");
            return;
        }
    }
 
    printf("Vertex Distance from Source\n");
    for (int i = 1; i <= v; i++)
        printf("\n%d \t\t %d\n", i, dist[i]);
}

int main()
{
    int s;
    create_graph();
    printf("Enter source: ");   scanf("%d", &s);
    clock_t t = clock();
    bellman(s);
    t = clock() - t;
    printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}