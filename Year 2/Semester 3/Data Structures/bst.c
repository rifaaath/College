#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *left, *right;
};

typedef struct node *NODE;
NODE root = NULL;

NODE getnode(int ele)
{
    NODE a = (NODE)malloc(sizeof(struct node));
    a->info = ele;
    a->left = a->right = NULL;
    return a;
}

void createTree(int ele)
{
    if(root == NULL)
        root = getnode(ele);
    else
    {
        NODE p = root, q = root;
        while(p->info!=ele && q!=NULL)
        {
            p = q;
            if(p->info < ele)
                q = p->right;
            else
                q = p->left;
        }
        if(ele == p->info)
            printf("Duplicate value\n");
        else if(ele > p->info)
            p->right = getnode(ele);
        else
            p->left = getnode(ele);
    }
}

void inOrder(NODE r)
{
    if(r)
    {
        inOrder(r->left);
        printf("%d ", r->info);
        inOrder(r->right);
    }
}

void max()
{
    NODE temp = root;
    while(temp->right!=NULL)
        temp = temp->right;
    printf("Max value: %d\n", temp->info);
}

void search(int ele)
{
    NODE p = root, q = root;
    while(p->info!=ele && q!=NULL)
    {
        p = q;
        if(p->info > ele)
            q = p->left;
        else
            q = p->right;
    }
    if(ele == p->info)
        printf("Search successful\n");
    else
        printf("Not found\n");
}

void main()
{
    int ch;
    while(1)
    {
        printf("1.Ins 2.InOrder 3.Search 4.Max 5.Exit\t: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("Enter value: ");
                    scanf("%d", &ch);
                    createTree(ch);
                    break;
            case 2: inOrder(root);
                    printf("\n");
                    break;
            case 3: printf("Enter value: ");
                    scanf("%d", &ch);
                    search(ch);
                    break;
            case 4: max();
                    break;
            case 5: return;
        }
    }
}