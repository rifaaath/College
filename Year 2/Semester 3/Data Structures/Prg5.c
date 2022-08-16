#include<stdio.h>
#include<math.h>

void main()
{
    int num, dnum, rem, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    dnum=num;

    while(num)
    {
        rem=num%10;
        num/=10;
        sum+=pow(rem,3);
    }
    if(sum==dnum)
        printf("%d is an armstrong number", dnum);
    else
        printf("%d is not an armstrong number", dnum);
}
