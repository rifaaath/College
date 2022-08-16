//Write a program to find the Minimum Cost Spanning Tree of a given undirected graph using Prim’s algorithm and determine the time required.
#include<stdio.h>
#include<time.h>


int a,b,u,v,n,i,j,count=1;
int visited[10]= {0},min,mincost=0,cost[10][10];

int main() 
{
	printf("\n Enter the number of nodes:");    scanf("%d",&n);
	printf("\n Enter the adjacency matrix:\n");
	for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) 
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
	    }

	visited[1]=1;
    clock_t t = clock();
	while(count<n) 
    {
		for (i=1,min=999;i<=n;i++)
		   for (j=1;j<=n;j++)
            if(cost[i][j]<min)
		     if(visited[i]!=0) 
             {
                min=cost[i][j];
                a=u=i;
                b=v=j;
		    }

		if(visited[u]==0 || visited[v]==0) 
        {
			printf("\n%d - %d : %d",a,b,min);
            count++;
			mincost+=min;
			visited[b]=1;
		}
		cost[a][b]=cost[b][a]=999;
	}
    t = clock()-t;
	printf("\nMinimun cost=%d",mincost);
	printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}