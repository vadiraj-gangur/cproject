//LINKED STACK USING PUSH AND POP OPERATION
#include<stdio.h>
#include<malloc.h>

struct node * push(int,struct node *);
void display(struct node *);
struct node *pop(struct node *);
struct node
{
    int info;
    struct node *next;


};

main()
{
     char ch='y';
     struct node *top=NULL;
     int ele;

         while((ch == 'y') || (ch == 'Y'))
         {

             printf("\nENTER THE ELEMENT IN THE LIST: \n");
             scanf("%d",&ele);
             top=push(ele,top);
             printf("\nDO YOU WANT TO ADD MORE ELEMENT TO THE LIST \n");
             scanf(" %c",&ch);

         }

        display(top);

        printf("\nDO YOU WANT TO DELETE ELEMENT IN THE LIST: \n");
        scanf(" %c",&ch);

         while((ch == 'y') || (ch == 'Y'))
         {


             top = pop(top);
             printf("\n DO YOU WANT TO DELETE MORE ELEMENT TO THE LIST \n");
             scanf(" %c",&ch);

         }
         display(top);





}
    struct node * push(int key,struct node *top)
   {

          struct node *ptr = NULL;

            if(top == NULL)
            {

                  struct node *newnode=(struct node *)malloc(sizeof (struct node));
                  newnode->info=key;
                  newnode->next=NULL;
                  top = newnode;

            }

            else
            {
                  ptr=top;

                  while(ptr->next!=NULL)
                 {
                         ptr=ptr->next;

                 }

                      struct node *newnode1=(struct node *)malloc(sizeof (struct node));
                      newnode1->info=key;
                      newnode1->next=NULL;
                      ptr->next=newnode1;
            }

            return top;

      }

   void display(struct node *top)
   {
       struct node *ptr=top;
       printf("\nTHE LIST IS \n");
       while(ptr != NULL)
       {

          printf("\n-> %d  ",ptr->info);
          ptr = ptr->next;

       }


   }



   struct node * pop(struct node *top)
{

              struct node *ptr = (struct node *) malloc(sizeof(struct node));
              struct node *prev;

               if(top == NULL)
               {
                     printf("\n LIST IS EMPTY CANNOT DELETE: ");
               }

                    else if(top->next == NULL)
                    {
                           ptr = top;
                           free(ptr);
                           top = NULL;
                    }

                         else
                         {
                                  ptr = top;
                                  while(ptr->next != NULL)
                                  {
                                          prev=ptr;
                                          ptr = ptr->next;

                                  }

                               prev->next = NULL;
                               free(ptr);

                         }

               return top;

}

