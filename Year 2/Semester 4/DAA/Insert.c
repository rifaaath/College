//Write a program to sort a given set of elements using the Insertion sort method and
//determine the time required to sort the elements.
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

    clock_t t = clock();
    for(int i=1; i<n; ++i)
    {
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    t = clock() - t;
    printf("After sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);
    printf("Time required: %f", (double)t/CLOCKS_PER_SEC);
}