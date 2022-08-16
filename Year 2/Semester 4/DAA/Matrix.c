//Write a program to implement Strassen’s matrix multiplication and determine the time
//required.
#include<stdio.h>
#include<time.h>

int main()
{
    int A[2][2], B[2][2], C[2][2];
    
    printf("Enter matrix A(2x2): ");
    for(int i=0; i<2; ++i)
        for(int j=0; j<2; ++j)
            scanf("%d", &A[i][j]);
    int a = A[0][0], b=A[0][1], c=A[1][0], d=A[1][1];
    
    printf("Enter matrix B(2x2): ");
    for(int i=0; i<2; ++i)
        for(int j=0; j<2; ++j)
            scanf("%d", &B[i][j]);
    int e = B[0][0], f=B[0][1], g=B[1][0], h=B[1][1];
    printf("Given matrix A:\n");
    for(int i=0; i<2; ++i)
    {
        for(int j=0; j<2; ++j)
            printf("%d\t", A[i][j]);
        printf("\n");
    }

    printf("Matrix B:\n");
    for(int i=0; i<2; ++i)
    {
        for(int j=0; j<2; ++j)
            printf("%d\t", B[i][j]);
        printf("\n");
    }
    //Refer site to remember 
    //https://www.geeksforgeeks.org/easy-way-remember-strassens-matrix-equation/

    clock_t t = clock();
    int p1 = a*(f-h);
    int p2 = h*(a+b);
    int p3 = e*(c+d);
    int p4 = d*(g-e);
    int p5 = (a+d)*(e+h);
    int p6 = (b-d)*(g+h);
    int p7 = (a-c)*(e+f);

    C[0][0] = p4+p5+p6-p2;
    C[0][1] = p1+p2;
    C[1][0] = p3+p4;
    C[1][1] = p1-p3+p5-p7;

    t = clock() - t;

    printf("After multiplication: \n");
    for(int i=0; i<2; ++i)
    {
        for(int j=0; j<2; ++j)
            printf("%d\t", C[i][j]);
        printf("\n");
    }
    printf("\nTime Required: %f", (double)t/CLOCKS_PER_SEC);
}