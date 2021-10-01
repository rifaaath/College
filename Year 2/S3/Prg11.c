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
}
