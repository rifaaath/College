#include<stdio.h>

void main()
{
    int n, m, avg=0, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    m=n;
    printf("Enter the values: ");
    while(n--)
    {
        scanf("%d", &temp);
        avg+=temp;
    }
    avg/=m;
    printf("Average: %d", avg);
}
