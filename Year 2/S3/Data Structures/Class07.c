#include<stdio.h>

void main()
{
    int a[30], n, l, s;
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    l=s=a[0];
    for(int i=0; i<n; ++i)
    {
        if(a[i]>l)
            l=a[i];
        if(a[i]<s)
            s=a[i];
    }
    printf("Largest: %d\nSmallest: %d", l, s);
}
