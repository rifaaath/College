#include<stdio.h>


int board[6][6], n=3;

int safe(int r, int c)
{
    for(int i=0; i<c; ++i)
        if(board[r][i]) return 0;
    
    for(int i=r, j=c; i>=0 && j>=0; --i, --j)
        if(board[i][j]) return 0;
    
    for(int i=r, j=c; i<=n &&j>=0; ++i, --j)
        if(board[i][j]) return 0;
    return 1;
}

int backtrack(int c)
{
    if(c>=n)     return 1;
    for(int i=0; i<n; ++i)
    {
        if(safe(i,c))
        {
            board[i][c] = 1;
            if(backtrack(c+1))  return 1;
            board[i][c] = 0;
        }
    }
    return 0;
}

int main()
{
    backtrack(0);
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {   
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }

}
