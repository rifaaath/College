#include<stdio.h>
#include<string.h>

void main()
{
    char str[30],dstr[30];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);

    for(int i=0,j=len-1; str[i]!='\0'; ++i, j--)
        dstr[j] = str[i];

    dstr[len] = '\0';
    printf("Reversed: %s\n", dstr);
    if(!(strcmp(dstr,str)))
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");
}
