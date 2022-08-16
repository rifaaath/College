#include<stdio.h>
#include<string.h>
#define SIZE 10

int stack[SIZE], top=-1;

void push(char val)
{
    stack[++top] = val;
}

int pop()
{
    return stack[top--];
}


int isPali(char s[])
{
    for(int i=0; s[i]!='\0'; ++i)
        push(s[i]);
    for(int i=0; i<=strlen(s)/2; ++i)
        if(s[i]!=pop())
            return 0;

    return 1;
}

void main()
{
    printf("%s", (isPali("maddddam")?"YES":"NO"));
}
