#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter values for a and b: ");
    scanf("%d%d", &a, &b);

    if(a>b)
        printf("a is greater: %d", a);
    else if(a==b)
        printf("The values are equal");
    else
        printf("b is greater: %d", b);
}
