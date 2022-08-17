#include<stdio.h>

int fac(int n)
{
    if(n<=1) return 1;
    return n * fac(n-1);
}

void main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("%d", fac(num));
}