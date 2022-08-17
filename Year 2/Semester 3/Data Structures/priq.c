#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int q[SIZE], front = 0, rear = -1;

void ins()
{
    int ele;
    if(rear == SIZE - 1)
        printf("Overflow\n");
    else
    {
        printf("Enter value: ");
        scanf("%d", &ele);
        int j = rear;
        while( j >= front && ele < q[j])
        {
            q[j+1] = q[j];
            j--;
        }
        q[j+1] = ele;
        rear++;
    }
}

void del()
{
    if(front > rear)
        printf("Empty\n");
    else{
        int ele, flag = 0;
        printf("Enter value to delete: ");
        scanf("%d", &ele);
        for(int i=front; i<=rear; ++i)
        {
            if(q[i] == ele)
            {
                flag = 1;
                for(int j=i; j>front; j--)
                    q[j] = q[j-1];
                front++;
                break;
            }
        }
        if(flag == 0)
            printf("Not found\n");
    }
}

void disp()
{
    if(front > rear)
        printf("Empty\n");
    else
    {
        for(int i= front; i<=rear; ++i)
            printf("%d ", q[i]);
        printf("\n");
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("1. Ins 2. Del 3. Disp 4.Exit\t:");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1: ins();  break;
            case 2: del();  break;
            case 3: disp(); break;
            case 4: return;
        }
    }
}