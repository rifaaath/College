//Write a program to implement Sequential search and determine the time required to search an element.
#include<stdio.h>
#include<time.h>

int main()
{
    int a[20], n, key, flag=0;
    printf("Enter n: ");    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i)  scanf("%d", &a[i]);

    printf("Enter key: ");   scanf("%d", &key);
    clock_t t = clock();
    for(int i=0; i<n; ++i)
    {
        if(a[i]==key)
        {
            flag = 1;
            printf("Found at index %d", i);
            break;
        }
    }
    t = clock() - t;
    if(!flag)   printf("Element not found");
    printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}