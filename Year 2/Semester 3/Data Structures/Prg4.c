#include<stdio.h>

void main()
{
    int base, exp, ans=1;
    printf("Enter base and exponent: ");
    scanf("%d%d", &base, &exp);
    while(exp--)
        ans*=base;

    printf("Answer: %d", ans);
}
