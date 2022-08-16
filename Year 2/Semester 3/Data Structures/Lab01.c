#include<stdio.h>
#include<ctype.h>
#define SIZE 10

int stack[SIZE], top=-1;

void push(int val)
{
    stack[++top] = val;
}

int pop()
{
    return stack[top--];
}


int eval(char s[])
{
    for(int i=0; s[i]!='\0'; ++i)
    {
        if(isdigit(s[i]))
            push(s[i] - '0');

        else
        {
            int o=pop();    int p=pop();
            switch (s[i])
            {
                case '+': push(p + o); break;
                case '-': push(p - o); break;
                case '*': push(p * o); break;
                case '/': push(p/o); break;
            }
        }
    }
    return pop();
}
void main()
{
    char str[SIZE];
    printf("Enter: ");
    scanf("%s", str);
    printf("\n%d",eval(str));
}