#include<stdio.h>

void main()
{
    int a[10][10], m, n;
    printf("Enter number of rows and column: ");
    scanf("%d%d", &m, &n);

    printf("Enter %d elements: ", m*n);
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
            scanf("%d", &a[i][j]);

    printf("Entered Matrix:\n");
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("Transpose of the matrix:\n");
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
            printf("%d\t", a[j][i]);
        printf("\n");
    }
}
