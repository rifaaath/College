#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

typedef struct node *NODE;

NODE first = NULL;

NODE getnode()
{
    NODE a;
    a=(NODE)malloc(sizeof(struct node));
    a->link = NULL;
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
        temp = temp->link;
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

    a->link = first;
    first = a;
}

void delBeg()
{
    if(first==NULL)
    {
        printf("No nodes\n");
        return;
    }
    NODE temp = first;
    first = first->link;
    printf("Deleted: %d\n", temp->info);
    temp->link = NULL;
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

    while(temp->link!=NULL) temp=temp->link;
    temp->link = a;
}

void delEnd()
{
    if(first==NULL)
    {
        printf("No nodes\n");
        return;
    }
    NODE temp = first, prev = first;
    while(temp->link!=NULL)
    {
        prev = temp;
        temp = temp->link;
    }
    prev->link = NULL;
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
    NODE temp = first, prev = first;
    for(i =0; temp->link!=NULL; ++i, temp=temp->link);
    if(i<c)
    {
        printf("Cannot insert\n");
        return;
    }
    for(i=0,temp=first; i<c; ++i)
    {
        prev = temp;
        temp=temp->link;
    }
    if(i<c)
    {
        printf("Cannot add\n");
        return;
    }
    prev->link = a;
    a->link = temp;
}

void delIndex(int c)
{
    if(first==NULL)
    {
        printf("No nodes\n");
        return;
    }
    int i;
    NODE nxt = first, prev = first, curr=first;
    for(i =0; curr->link!=NULL; ++i, curr=curr->link);
    if(i<c)
    {
        printf("Cannot remove\n");
        return;
    }
    for(i=0, curr=first; i<c; ++i)
    {
        prev = curr;
        curr = curr->link;
        nxt = curr->link;
    }
    printf("Deleted: %d\n", curr->info);
    curr->link = NULL;
    prev->link = nxt;
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
