//Write a program to find the Topological sequence of vertices for the given graph and determine the time required
#include<stdio.h>
#include<time.h>

int sorted[20],count=0,c=0,limit=0;
int v,e,p=0;
int visited[20], g[20][20];

void sort()
{
    int i,j,n = v;
    while(n!=0)
    {
        for(i=1; i<=v; ++i)
        {
            if(visited[i]==0)
            {
                c++;
                for(j=1; j<=v; j++)
                    if (g[j][i] == 1) break;
                if(j==v+1)
                {
                    sorted[p++] = i;
                    n--;
                    visited[i] = ++count;
                    for(int k=1; k<=v; ++k)
                        g[i][k] = 0; //Remove all outgoing edges of i
                    
                    break;
                }
            }
            if(c>limit) //Cycle found
                return;
        }
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
    limit=(v*(v+1))/2;
    clock_t t = clock();
    sort();
    t = clock()-t;
    if(c>limit) printf("Graph is cyclic. Topological sort cannot be applied\n");
    else
    {
        printf("Topologically sorted order:\n");
        for(int i=0; i<v; ++i)
            printf("%d ", sorted[i]);
    }
    printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}

