#include<stdio.h>
#define SIZE 5

struct stack
{
    int st[SIZE], top;
}s;

void push(int val)
{
    if(s.top==SIZE-1)
    {
        printf("\nStack is full");
        return;
    }
    s.st[++s.top]=val;
}

void pop()
{
    if(s.top==-1)
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nPopped: %d", s.st[s.top--]);
    if(s.top==-1)
        printf("\nNo more elements in stack");
}

void display()
{
    if(s.top==-1)
    {
        printf("\nStack is empty");
        return;
    }
    for(int i=0; i<=s.top; ++i)
        printf("%d\t", s.st[i]);
}

void main()
{
    s.top=-1;
    int ch, val;
    while(1)
    {
        printf("\nEnter choice: [1: Push, 2: Pop, 3:Display, 0:Exit]\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter value to push: ");
                    scanf("%d", &val);
                    push(val);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 0: return;
            default: printf("Invalid\n");
        }
    }
}


