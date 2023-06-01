#include <stdio.h>
#include "malloc.h"
int main()
{

    struct node
    {

        struct node *previous;
        int data;
        struct node *next;


    };


    struct node *p,*q;
    p=malloc(sizeof(struct node));
    q=malloc(sizeof(struct node));

    p->data=75;
    q->data=90;
    p->previous=NULL;
    p->next=q;
    q->previous=p;
    q->next=NULL;

    while(p != NULL)
    {

        printf("%d\n",p->data);
        p=p->next;



    }






    return 0;
}
