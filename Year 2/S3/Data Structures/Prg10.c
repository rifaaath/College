#include<stdio.h>

struct stud
{
    int rn;
    char name[50];
    int mark[3];
};

void main()
{
    int n;
    struct stud a[10];
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i=0; i<n; ++i)
    {
        printf("\nStudent %d\n", i+1);
        printf("Roll no.: ");
        scanf("%d", &a[i].rn);
        printf("Name: ");
        scanf("%s", a[i].name);
        for(int j=0; j<3; ++j)
        {
            printf("Subject %d: ", j+1);
            scanf("%d", &a[i].mark[j]);
        }
    }

    char c;
    do
    {
        int num, index, flag = 0;
        printf("\nEnter roll number to search: ");
        scanf("%d", &num);
        for(int i=0; i<n; ++i)
        {
            if(a[i].rn==num)
            {
                index = i;
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            printf("Roll no.: %d\t Name: %s\n", a[index].rn, a[index].name);
            for(int i=0; i<3; ++i)
            {
                printf("Subject %d: %d\n", i+1, a[index].mark[i]);
            }
        }
        else
            printf("No entry found!\n");

        printf("\nPress 'Y' to search again\n");
        scanf("%c", &c);

    }while((c=='Y')||(c=='y'));
}
