#include<stdio.h>
void change(int *);
main()
{

     int a[5] = { 2,3,4,5,6 };
     int i;
     change(a);
     for(i=4; i>=0; i--)
     {

          printf(" %d ",a[i]);
     }

}
void change(int *b)
{
     int i;
     for(i=0; i<=4; i++)
     {
         b = b + 1;
         b++;

     }

}

