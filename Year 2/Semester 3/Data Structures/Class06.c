#include<stdio.h>

void main()
{
    int n, fac=1;
    printf("Enter value for n: ");
    scanf("%d", &n);
    do fac*=n--;
    while(n);
    printf("Factorial: %d", fac);
}
