#include<stdio.h>
#define SIZE 5
int rear=-1;
int front=-1;
int q[SIZE];

void insert(int val)
{
    if(rear==SIZE-1)
    {
        printf("Queue is full");
        return;
    }
    q[++rear]=val;
    if(front==-1)   front=0;
}

void del()
{
    if(front==-1)
    {
        printf("Empty");
        return;
    }
    printf("Deleted: %d", q[front]);
    if(front==rear) front=rear=-1;
    else    front++;
}

void disp()
{
    for(int i=front; i<=rear; ++i)
        printf("%d ", q[i]);
}

void main()
{
    int a;
    while(1)
    {
        printf("Enter choice: ");
        scanf("%d", &a);
        switch(a)
        {
            case 1:   printf("Enter num: ");
                        scanf("%d", &a);
                        insert(a);
                        break;
            case 2:   del();
                        break;
            case 3:   disp();
                        break;
            default:    return;
        }
    }
}
