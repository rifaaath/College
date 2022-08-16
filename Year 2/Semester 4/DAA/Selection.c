//Write a program to sort a given set of elements using Selection sort and determine the time required to sort elements.
#include<stdio.h>
#include<time.h>

int main()
{
    int a[20], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i)  scanf("%d", &a[i]);
    printf("Before sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);

    //Selection Sorting
    clock_t t = clock();
    for(int i=0; i<n; ++i)
    {
        int min = i;
        for(int j=i+1; j<n; ++j)
            if(a[min]>a[j]) min = j;
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    t = clock() - t;
    printf("\nAfter sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);
    printf("\nTime required: %f", (double)t / CLOCKS_PER_SEC);
    return 1;
}