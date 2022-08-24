#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *left, *right;
};

typedef struct node *NODE;
NODE first = NULL;

NODE getnode()
{
    NODE a = (NODE)malloc(sizeof(struct node));
    a -> left = a -> right = a;
    return a;
}

void disp()
{
    if(first == NULL)
    {
        printf("Empty\n");
        return;
    }
    NODE temp = first;
    do
    {
        printf("%d ", temp->info);
        temp = temp -> right;
    }while(temp!=first);
    printf("\n");
}

void insBeg(int ele)
{
    NODE a = getnode();
    a->info = ele;
    if(first == NULL)
    {
        first = a;
        return;
    }
   NODE last = first ->left;
   a->right = first;
   last->right = first->left = a;
   a->left = last;
   first = a;
}

void delEnd()
{
    if(first == NULL)
    {
        printf("Empty\n");
        return;
    }

    if(first->right == first)
    {
        printf("Deleted: %d\n", first->info);
        free(first);
        first = NULL;
        return;
    }

    NODE last = first -> left, prev = last->left;
    prev->right = first;
    last->right = last->left = last;
    first->left = prev;
    
    printf("Deleted: %d\n", last->info);
    free(last);
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter choice\t1. Ins 2. Del 3.Disp 4.Exit\t: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("Enter value: ");
                    scanf("%d", &ch);
                    insBeg(ch); 
                    break;
            case 2: delEnd();
                    break;
            case 3: disp();
                    break;
            case 4: return;
        }
    }
}

