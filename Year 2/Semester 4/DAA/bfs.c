//Write a program to print all the nodes reachable from a given starting node in a digraph using BFS method and determine the time required.
#include<stdio.h>
#include<time.h>

int count=0;
int v,e;
int visited[20], g[20][20];
int q[20], front=0, rear=-1;

void bfs(int w)
{
    count++;
    visited[w]=count; //Mark vertex w as visited 
    q[++rear] = w;
    while(front<=rear)
    {
        printf("%d(%d)\t",q[front],visited[q[front]]);
        for(int j=1; j<=v; j++)
        {
            if(visited[j]==0 && g[q[front]][j]==1) //Add all adjacent vertices of queue[front] to queue 
            {
                count++; visited[j]=count; rear++; 
                q[rear]=j;
            } 
        }
        front++;
    }
}

void create_graph()
{
    int ch, v1, v2;
    printf("Number of vertices: "); scanf("%d", &v);
    printf("Number of edges: ");    scanf("%d", &e);
    printf("Enter value: ");
    for(int i=0; i<e; ++i)
    {
        printf("\nEdge %d: ", i);   scanf("%d%d", &v1, &v2);
        g[v1][v2] = 1;  //Directed
    }
}

int main()
{
    create_graph();
    int st;
    printf("Enter start node: ");   scanf("%d", &st);
    printf("Nodes reachable from %d: ", st);
    clock_t t = clock();
    bfs(st);
    t = clock()-t;
    printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}

