#include<stdio.h>

void main()
{
    int a[30], n, l, ll;
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    for(int i=0, l=ll=a[0]; i<n; ++i)
    {
        if(a[i]>l)
        {
            ll=l;
            l=a[i];
        }
    }
    printf("SecondLargest: %d", ll);
}

