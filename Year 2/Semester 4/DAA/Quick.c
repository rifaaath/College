//Write a program to sort a given set of elements using Quick sort method and determine
//the time required sort the elements.
#include<stdio.h>
#include<time.h>

void sort(int a[20], int first, int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot = first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<last) i++;
            while(a[j]>a[pivot])    j--;
            if(i<j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        sort(a,first,j-1);
        sort(a,j+1, last);
    }
}
int main()
{
    int a[20], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i)  scanf("%d", &a[i]);
    printf("Before sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);

    clock_t t = clock();
    sort(a,0,n-1);
    t = clock()-t;

    printf("\nAfter sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);
    printf("\nTime required: %f", (double)t / CLOCKS_PER_SEC);
    return 1;
}