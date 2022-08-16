//Write a program to implement Brute Force String Matching Technique and determine the time required.
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char a[20], b[20];
    int l1, l2, flag=0;
    printf("Enter text: "); scanf("%s", a);
    printf("Enter pattern: ");  scanf("%s", b);
    l1 = strlen(a);
    l2 = strlen(b);

    //Algorithm start
    clock_t t = clock();
    for(int i=0; i<l1; ++i)
    {
        int j=0;
        while(j<l2 && a[i+j]==b[j])
            j++;
        if(j==l2)
        {
            printf("Match found at %d", i+1);
            flag = 1;
            break;
        }
    }
    if(!flag)
        printf("Pattern not found");

    t = clock() - t;
    printf("\nTime required: %f", (double)t/CLOCKS_PER_SEC);
}