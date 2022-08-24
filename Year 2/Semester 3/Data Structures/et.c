#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 50

struct node
{
    int info;
    struct node *left, *right;
};

typedef struct node *NODE;

NODE createTree(char e[])
{
    if(e[0] == '\0')
        return NULL;    //empty string
    
    NODE a, stack[SIZE];
    int top = -1;
    for(int i=0; e[i]!='\0'; ++i)
    {
        char p = e[i];
        a = (NODE)malloc(sizeof(struct node));
        a->info = p;
        a->left = a->right = NULL;
        if(isdigit(p))
        {
            stack[++top] = a;
            continue;
        }
        
        switch(p)
        {
            case '+':
            case '-':
            case '*':
            case '/':   a->right = stack[top--];
                        a->left = stack[top--];
                        stack[++top] = a;
                        break;
        }
    }
    return stack[top--];
}

int eval(NODE root)
{
    switch(root->info)
    {
        case '+':   return(eval(root->left)+eval(root->right));
        case '-':   return(eval(root->left)-eval(root->right));
        case '*':   return(eval(root->left)*eval(root->right));
        case '/':   return(eval(root->left)/eval(root->right));
        default:    return(root->info - '0');
    }
}

void main()
{
    char e[SIZE];
    printf("Enter postfix expression: ");
    scanf("%s", e);

    NODE root = createTree(e);
    int res = eval(root);
    printf("Result: %d", res);
}