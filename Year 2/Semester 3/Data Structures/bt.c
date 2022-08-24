#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *left, *right;
};

typedef struct node *NODE;

NODE createTree()
{
    NODE a = NULL;
    int data = 0;
    printf("Enter value: "); //input 0 if no node
    scanf("%d", &data);

    if(data)
    {
        a = (NODE)malloc(sizeof(struct node));
        a->info = data;
        printf("Left child of %d\t\t", a->info);
        a->left = createTree();
        printf("Right child of %d\t", a->info);
        a->right = createTree();
    }
    return a;
}

void preOrder(NODE root)
{
    if(root)
    {
        printf("%d ", root->info);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(NODE root)
{
    if(root)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->info);
    }
}

void inOrder(NODE root)
{
    if(root)
    {
        inOrder(root->left);
        printf("%d ", root->info);
        inOrder(root->right);
    }
}

void main()
{
    printf("Root\t");
    NODE root = createTree();
    
    int ch;
    while(1)
    {
        printf("1.Pre-order 2.Post-order 3.In-order\t: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: preOrder(root); break;
            case 2: postOrder(root);    break;
            case 3: inOrder(root);  break;
            default: return;
        }
    }
}