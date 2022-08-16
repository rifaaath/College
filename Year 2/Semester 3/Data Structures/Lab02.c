#include<stdio.h>

struct stud
{
    char usn[15], name[20];
    int avg, sem, mark[3];
};

void main()
{
    struct stud s[20];
    int n;
    printf("Enter no of students: ");
    scanf("%d", &n);
    for(int i=0; i<n; ++i)
    {
        printf("Enter details: [Name, USN, Sem, Mark in 3 sub]\n");
        scanf("%s%s%d", s[i].name, s[i].usn, &s[i].sem);
        s[i].avg=0;
        for(int j=0; j<3; ++j)
        {
            scanf("%d", &s[i].mark[j]);
            s[i].avg+=s[i].mark[j];
        }
        s[i].avg/=3;
    }

    printf("\nStudent with avg>70\n");
    for(int i=0; i<n; ++i)
    {
        if(s[i].avg>70)
            printf("Name: %s\tUSN: %s\tSem: %d\tAvg: %d\n", s[i].name, s[i].usn, s[i].sem, s[i].avg);
    }
}
