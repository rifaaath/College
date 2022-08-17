#include<stdio.h>
#include<string.h>
#define SIZE 5

int bin(int key, int ar[], int l, int h)
{
    if(h >= l)
    {
        int mid = (l+h) / 2;
        if(key == ar[mid])  return mid;
        if(key > ar[mid])   return bin(key, ar, mid+1, h);
        else return bin(key,ar, l, mid-1);
    }
    return -1;
}

void main()
{
    int a[SIZE], n, key;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter n elements (Ascending order)\t: ");
    for(int i = 0; i < n; ++i) 
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int res = bin(key, a, 0, n-1);
    (res == -1) ? printf("Not found") : printf("Found at index %d", res);
}