#include<stdio.h>
#define SIZE 5

int st[SIZE],top=-1;

void push(int val)
{
    if(top==SIZE-1)
    {
        printf("\nStack is full");
        return;
    }
    st[++top]=val;
}

void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nPopped: %d", st[top--]);
    if(top==-1)
        printf("\nNo more elements in stack");
}

void display()
{
    if(top==-1)
    {
        printf("\nStack is empty");
        return;
    }
    for(int i=0; i<=top; ++i)
        printf("%d\t", st[i]);
}

void main()
{
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

