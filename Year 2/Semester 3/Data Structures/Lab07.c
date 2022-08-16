#include<stdio.h>
#include<ctype.h>
#define SIZE 100

char stack[SIZE];
int top=-1;

void push(char val)
{
    stack[++top] = val;
}

char pop()
{
    return stack[top--];
}

int prec(char e)
{
    if(e=='+' || e=='-') return 1;
    else if(e=='*' || e=='/' || e=='%')   return 2;
    else if(e=='^' || e=='$')   return 3;
    return 0;
}

void eval(char exp[])
{
    char *p=exp;

    while(*p!='\0')
    {
        if(*p=='(')
            push(*p);
        else if(*p==')')
        {
            char x;
            while((x=pop())!='(')
                printf("%c ", x);
        }
        else if(isalnum(*p))
            printf("%c ",*p);
        else
        {
            while(prec(stack[top])>=prec(*p))
                printf("%c ", pop());
            push(*p);
        }
        p++;
    }
    while(top!=-1)
        printf("%c ", pop());
}

void main()
{
    char str[SIZE];
    printf("Enter expression: ");
    scanf("%s", str);
    eval(str);
}
