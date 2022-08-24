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
    a -> left = a -> right = NULL;
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
    while(temp!=NULL)
    {
        printf("%d ", temp->info);
        temp = temp->right;
    }
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
    a->right = first;
    first->left = a;
    first = a;
}

void delEnd()
{
    if(first == NULL)
    {
        printf("Empty\n");
        return;
    }

    if(first->right == NULL)
    {
        printf("Deleted: %d\n", first->info);
        free(first);
        first = NULL;
        return;
    }

    NODE temp = first, prev;
    while(temp->right!=NULL)    
        temp = temp->right;
    
    prev = temp->left;
    prev->right = temp->left = NULL;
    printf("Deleted: %d\n", temp->info);
    free(temp);
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

