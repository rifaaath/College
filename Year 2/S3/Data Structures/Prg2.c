#include<stdio.h>

void main()
{
    int a[3], avg=0;
    printf("Enter marks for 3 subjects: ");
    for(int i=0; i<3; ++i)
    {
        scanf("%d", &a[i]);
        avg+=a[i];
    }
    avg/=3;
    printf("\nAverage: %d\n", avg);
    if(avg>85)
        printf("Distinction");
    else if(avg>60)
        printf("First Class");
    else if(avg>50)
        printf("Second Class");
    else if(avg<35)
        printf("Fail");
    else
        printf("Pass");
}
