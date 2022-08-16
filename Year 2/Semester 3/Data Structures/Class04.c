#include<stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void main()
{
    int a,b, *p1, *p2;
    p1= &a;
    p2 = &b;
    printf("Enter values for a and b: ");
    scanf("%d%d", p1, p2);
    swap(p1, p2);
    printf("Swapped a:%d\nSwapped b:%d", *p1, *p2);
}
