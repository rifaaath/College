#include<stdio.h>

void main()
{
    int a[30], n, *p, sum=0;
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i)
    {
         scanf("%d", p+i);
         sum+=*(p+i);
    }
    printf("The sum is %d", sum);
}
