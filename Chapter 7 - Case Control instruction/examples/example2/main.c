/* Menu driven Program*/

#include <stdio.h>
#include<stdlib.h>
int main()
{

    int choice,num,i,fact;
    while(1)
    {

        printf("\n 1.Factorial\n");
        printf("\n 2.Prime\n");
        printf("3.Odd/Even\n");
        printf("4.Exit\n");
        printf("\n Your choice?");
        scanf("%d",&choice);

        switch(choice)
        {

            case 1:  printf("\n Enter number:");
                     scanf("%d",&num);
                     fact =1;
                     for(i=1; i<=num; i++)
                         fact = fact *i;
                     printf("\n Factorial value = %d\n",fact);
                     break;


            case 2:  printf("\n Enter number:");
                     scanf("%d",&num);
                     for(i=2; i<num; i++)
                     {

                         if(num %i == 0)
                         {

                              printf("\n Not a prime number\n");
                              break;


                         }

                      }

                     if(i == num)
                         printf("\n Prime number\n");
                      break;



            case 3:
                    printf("\n Enter number");
                    scanf("%d",&num);
                    if(num % 2 == 0)
                    printf("\n Even number\n");
                    else
                     printf("\n Odd number");
                     break;


            case 4:  exit(0);

           default:  printf("\n Wrong choice\n");







        }






    }




      return 0;
}
