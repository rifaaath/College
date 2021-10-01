#include<stdio.h>

void main()
{
    int a[30], m, n, o, *p;
    char b[30], *q;
    float c[30], *r;

    printf("Enter number of integers: ");
    scanf("%d", &m);
    printf("Enter %d elements: ", m);
    p=a;
    for(int i=0; i<m; ++i)
        scanf("%d", p+i);

    printf("Enter number of characters: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    q=b;
    for(int i=0; i<n; ++i)
        scanf(" %c", q+i);

    printf("Enter number of float: ");
    scanf("%d", &o);
    printf("Enter %d elements: ", o);
    r=c;
    for(int i=0; i<o; ++i)
        scanf("%f", r+i);

    printf("\nIntegers are: ");
    while(m--)
        printf("%d\t", *p++);

    printf("\nCharacters are: ");
    while(n--)
        printf("%c\t", *q++);

    printf("\nFloat are: ");
    while(o--)
        printf("%f\t", *r++);

}
