//Write a program to implement Horspool’s algorithm for String Matching and determine the time required.
#include<stdio.h>
#include<time.h>
#include<string.h>
#define MAX 500

int t[MAX];

void shift_table(char b[])
{
    int l1 = strlen(b);
    for(int i=0 ;i<MAX; ++i)    t[i] = l1;
    for(int j=0; j<l1-1; ++j)    t[b[j]] = l1-j-1;
}

int horspool(char a[], char b[])
{
    int l1 = strlen(a), l2 = strlen(b);
    int i = l2-1;
    while(i<l1)
    {
        int j=0;
        while(j<l2 && a[i-j] == b[l2-1-j])  j++;
        if(j==l2)   return i-l2+1;
        else    i += t[a[i]];
    }
    return -1;
}

int main()
{
    char a[20], b[20];
    int l1, l2;
    printf("Enter text: "); scanf("%s", a);
    printf("Enter pattern: ");  scanf("%s", b);
    l1 = strlen(a);
    l2 = strlen(b);

    //Algorithm start
    clock_t t = clock();
    shift_table(b);
    int flag = horspool(a,b);
    t = clock() - t;

    if(flag==-1)    printf("Pattern not found");
    else    printf("Found at %d", flag);
    printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}