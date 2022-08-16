#include<stdio.h>

struct stud
{
    int usn, sem, mark;
    char name[20];
};

void main()
{
    struct stud s1, *sp;
    sp = &s1;
    printf("Enter details: [Name, USN, Sem, Mark]\n");
    scanf("%s%d%d%d", sp->name, &sp->usn, &sp->sem, &sp->mark);
    if((sp->mark)>80)
        printf("Name: %s\tUSN: %d\tSem: %d\tMark: %d", sp->name, sp->usn,sp->sem,sp->mark);

}
