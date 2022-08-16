//Write a program to sort a given set of elements using Merge sort method and
//determine the time required to sort the elements
#include<stdio.h>
#include<time.h>

int a[20], b[20];

void merge(int l, int m, int h)
{
    int l1, l2, i;
    for(l1 = l, l2 = m+1, i = l; l1<=m && l2<=h; ++i )
    {
        if(a[l1]<=a[l2])    b[i] = a[l1++];
        else    b[i] = a[l2++];
    }

    while(l1<=m)
        b[i++] = a[l1++];
    while(l2<=h)
        b[i++] = a[l2++];
    
    for(i=l;i<=h; ++i)  a[i] = b[i];
}

void sort(int l, int h)
{
    if(l<h)
    {
        int m = (l+h) /2;
        sort(l,m);
        sort(m+1, h);
        merge(l,m,h);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i)  scanf("%d", &a[i]);
    printf("Before sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);

    //Sorting
    clock_t t = clock();
    sort(0,n-1);
    t = clock()-t;

    printf("\nAfter sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);
    printf("\nTime required: %f", (double)t / CLOCKS_PER_SEC);
    return 1;
}