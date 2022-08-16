#include<stdio.h>

void main()
{
    int a, b, temp, *p1, *p2;
    p1=&a;
    p2=&b;
    printf("Enter values for a and b: ");
    scanf("%d%d", p1, p2);
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("Swapped a:%d\nSwapped b:%d", *p1, *p2);
}
