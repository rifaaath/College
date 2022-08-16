#include<stdio.h>
#include<math.h>

void main()
{
    int dnum, rem, sum;
    printf("Armstrong numbers between 100 and 500 are:\n");
    for(int i=1; i<=500; ++i)
    {
        dnum=i;
        sum=0;
        while(dnum)
        {
            rem=dnum%10;
            dnum/=10;
            sum+=pow(rem,3);
        }
        if(sum==i)
            printf("%d\t", i);
    }
}

