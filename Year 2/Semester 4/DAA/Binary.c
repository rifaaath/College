//Write a program to implement Recursive Binary search and determine the time
//required to search an element.
#include<stdio.h>
#include<time.h>

int bin(int a[], int l, int h, int key)
{
    if(l<=h)
    {
        int m = (l+h)/2;
        if(a[m] == key)   return m;
        else if(key < a[m])   return bin(a,l,m-1, key);
        else return bin(a,m+1,h, key);
    }
    return -1;
}

int main()
{
    int a[20], n, key;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements (sorted): ", n);
    for(int i=0; i<n; ++i)  scanf("%d", &a[i]);
    printf("Enter key to search: ");
    scanf("%d", &key);

    clock_t t = clock();
    int res = bin(a,0,n,key);
    t = clock()-t;

    if(res) printf("Found at %d", res);
    else    printf("Not found");
    printf("\nTime required: %f", (double)t / CLOCKS_PER_SEC);
    return 1;
}

