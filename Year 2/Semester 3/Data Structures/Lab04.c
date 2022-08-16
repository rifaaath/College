#include<stdio.h>

struct sal
{
    int b, a, hra, tax, net;
};

struct emp
{
    int eno;
    char name[20];
    struct sal s;
};

void main()
{
    struct emp e;
    printf("Enter details:\t[Name, Employee No, Basic Salary, Allowance, HRA, Tax]\n");
    scanf("%s%d%d%d%d%d", e.name, &e.eno, &e.s.b, &e.s.a, &e.s.hra, &e.s.tax);
    e.s.net = (e.s.b+e.s.a+e.s.hra)-e.s.tax;
    printf("Emp No: %d\tName: %s\tNet Salary: %d", e.eno, e.name, e.s.net);
}
