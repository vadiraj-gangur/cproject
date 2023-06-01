#include <stdio.h>
void factorise(int,int);
int main()
{

     int num;
     printf("\n Enter a number");
     scanf("%d",&num);
     printf("\n Prime factor are :");
     factorise(num,2);

     return 0;

}

void factorise(int n,int i)
{

    if( i <= n)
    {

         if(n % i == 0)
         {

             printf("%d",i);
             n = n/i;



         }
         else
         {

             i++;


         }

         factorise(n,i);
    }






}














