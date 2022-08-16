#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left, *right;
};

typedef struct node *NODE;

NODE first = NULL;

NODE getnode()
{
    NODE a;
    a=(NODE)malloc(sizeof(struct node));
    a->left = a->right = NULL;
    return a;
}

void disp()
{
    if(first==NULL)
    {
        printf("No nodes\n");
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
    if(first==NULL)
    {
        first = a;
        return;
    }

    a->right = first;
    first->left = a;
    first = a;
}

void delBeg()
{
    if(first==NULL)
    {
        printf("No nodes\n");
        return;
    }
    if(first->right == NULL)
    {
        printf("Deleted: %d\n", first->info);
        free(first);
        first = NULL;
        return;
    }
    NODE temp = first;
    first = first->right;
    first->left = NULL;
    printf("Deleted: %d\n", temp->info);
    temp->right = NULL;
    free(temp);
}

void insEnd(int ele)
{
    NODE a = getnode();
    a->info = ele;
    if(first == NULL)
    {
        first = a;
        return;
    }
    NODE temp = first;

    while(temp->right!=NULL) temp=temp->right;
    temp->right = a;
    a->left = temp;
}

void delEnd()
{
    if(first==NULL)
    {
        printf("No nodes\n");
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
    while(temp->right!=NULL)    temp = temp->right;
    prev = temp->left;
    prev->right = NULL;
    temp->left = NULL;
    printf("Deleted: %d\n", temp->info);
    free(temp);

}

void insIndex(int ele, int c)
{
    if(first==NULL)
    {
        printf("No nodes\n");
        return;
    }
    NODE a = getnode();
    a->info = ele;
    int i;
    NODE temp = first, prev;
    for(i =0; temp->right!=NULL; ++i, temp=temp->right);
    if(i<c)
    {
        printf("Cannot insert\n");
        return;
    }
    for(i=0,temp=first; i<c; ++i, temp=temp->right);

    prev = temp->left;
    prev->right = a;
    a->right = temp;
    a->left = prev;
    temp->left = a;
}

void delIndex(int c)
{
    if(first==NULL)
    {
        printf("No nodes\n");
        return;
    }
    int i;
    NODE nxt, prev, curr=first;
    for(i =0; curr->right!=NULL; ++i, curr=curr->right);
    if(i<c)
    {
        printf("Cannot remove\n");
        return;
    }
    for(i=0, curr=first; i<c; ++i, curr=curr->right);
    prev = curr->left;
    nxt = curr->right;
    printf("Deleted: %d\n", curr->info);
    curr->right = curr->left = NULL;
    prev->right = nxt;
    nxt->left = prev;
    free(curr);

}
void main()
{
    int ch, a;
    while(1)
    {
        printf("0. Display | 1.InsBeg | 2.DelBeg | 3.InsEnd | 4.DelEnd | 5.InsIndex | 6. DelIndex\t\t: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 0: disp(); break;
            case 1: printf("Enter val: ");  scanf("%d", &ch);   insBeg(ch); break;
            case 2: delBeg();   break;
            case 3: printf("Enter val: ");  scanf("%d", &ch);   insEnd(ch); break;
            case 4: delEnd(); break;
            case 5: printf("Enter val and index: ");  scanf("%d%d", &ch, &a);   insIndex(ch, a); break;
            case 6: printf("Enter index: ");  scanf("%d", &a);delIndex(a); break;
            default: return;
        }
    }
}
