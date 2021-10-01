#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number b/w 1-7: ");
    scanf("%d", &a);
    switch(a)
    {
        case 1: printf("Sunday");
                break;
        case 2: printf("Monday");
                break;
        case 3: printf("Tuesday");
                break;
        case 4: printf("Wednesday");
                break;
        case 5: printf("Thursday");
                break;
        case 6: printf("Friday");
                break;
        case 7: printf("Saturday");
                break;
        default: printf("Invalid");
    }
}
