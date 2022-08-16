#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if((a>b)&&(a>c))
        printf("a is greatest: %d", a);
    else if((b>a)&&(b>c))
        printf("b is greatest: %d", b);
    else if((a==b)&&(a==c))
        printf("The values are equal");
    else
        printf("c is greatest: %d", c);
}
