#include<stdio.h>
#define SIZE 5

struct queue
{
    int rear, front;
    int q[SIZE];
}s;

void insert(int val)
{
    if(s.rear == SIZE-1)
    {
        printf("Queue is full");
        return;
    }
    s.q[++s.rear]=val;
    if(s.front==-1)   s.front=0;
}

void del()
{
    if(s.front==-1)
    {
        printf("Empty");
        return;
    }
    printf("Deleted: %d", s.q[s.front]);
    if(s.front==s.rear) s.front=s.rear=-1;
    else    s.front++;
}

void disp()
{
    for(int i=s.front; i<=s.rear; ++i)
        printf("%d ", s.q[i]);
}

void main()
{
    s.front = s.rear = -1;
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
