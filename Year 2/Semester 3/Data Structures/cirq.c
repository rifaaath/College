#include<stdio.h>
#define SIZE 5

int q[SIZE];
int front = -1;
int rear = -1;

void insert(int val)
{
    if(front == rear+1 || ( front == 0 && rear == SIZE-1))
    {
        printf("Overflow\n");
        return;
    }
    if(front == -1)
        front = rear = 0;
    else if( rear == SIZE-1 && front != 0)
        rear = 0;
    else rear++;
    q[rear] = val;
}

void del()
{
    if(front == -1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Deleted: %d\n", q[front]);
    if(front == rear)   front  = rear = -1;
    else if (front == SIZE-1)   front =0;
    else front++;
}

void disp()
{
    if(front == -1)
    {
        printf("Empty\n");
        return;
    }

    if(rear >= front)
    {
        for(int i = front; i <= rear; ++i)
            printf("%d ", q[i]);
    }
    else
    {
        for(int i = front; i < SIZE; ++i)
            printf("%d ", q[i]);
        for(int i = 0; i <= rear; ++i)
            printf("%d ", q[i]);
    }
}

void main()
{
    int a;
    while(1)
    {
        printf("Enter choice: 1. Ins 2. Del 3. Disp\t:");
        scanf("%d", &a);
        
        switch(a)
        {
            case 1: printf("Enter num: ");
                    scanf("%d", &a);
                    insert(a);  break;
            case 2: del();  break;
            case 3: disp(); break;
            default: return;
        }
    }
}