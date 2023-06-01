#include <stdio.h>

int main()
{

    struct node
    {
        int data;
        struct node *link;

    };

    struct node *p,*q;

    p = malloc(sizeof(struct node));
    q = malloc(sizeof(struct node));

    printf("%d %d\n",sizeof(p),sizeof(q));
    return 0;
}
