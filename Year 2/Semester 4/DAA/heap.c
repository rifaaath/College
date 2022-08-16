//Write a program to sort a given set of elements using the Heap sort method and determine the time required to sort the elements
#include<stdio.h>
#include<time.h>

void heapify(int a[], int n, int i)
{
    int large = i;
    int lc = 2*i+1, rc = 2*i+2; //Left and right child
    if(lc<n && a[lc]>a[large])
        large = lc;
    
    if(rc<n && a[rc]>a[large])
        large = rc;
    
    if(large!=i)
    {
        int temp = a[i];
        a[i] = a[large];
        a[large] = temp;
        heapify(a, n, large);
    }
}

void sort(int a[], int n)
{   
    //max heap
    for(int i = (n/2) - 1; i>=0; --i)
        heapify(a,n,i);
    
    //heap sort
    for(int i=n-1; i>=0; --i)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a,i,0); //heapify root again
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
    sort(a,n);
    t = clock()-t;

    printf("\nAfter sorting: ");
    for(int i=0; i<n; ++i)  printf("%d ", a[i]);
    printf("\nTime required: %f", (double)t / CLOCKS_PER_SEC);
    return 1;
}