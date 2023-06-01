#include <stdio.h>

int main()
{

    struct node
    {

        int data;
        struct node *next;


    };

    struct node *p,*q;

    p=malloc(sizeof(struct node));
    q=malloc(sizeof(struct node));

    p->data = 10;
    q->data =20;
    p->next=q;
    q->next=p;

    while(p !=NULL)
    {

        printf("%d\n",p->data);
        p=p->next;


    }






    return 0;
}
