#include<stdio.h>

struct book
{

    int bno, price;
    char name[25], author[25];
};

struct book in(struct book b)
{
    printf("Enter details: [Book No., Name, Price, Author]\n");
    scanf("%d%s%d%s", &b.bno, b.name, &b.price, b.author);
    return b;
}

void out(struct book b)
{
    printf("Book No: %d\nName: %s\tAuthor: %s\nPrice: %d", b.bno, b.name, b.author, b.price);
}

void main()
{
    struct book a;
    a = in(a);
    out(a);
}
