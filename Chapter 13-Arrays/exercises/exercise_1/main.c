#include <stdio.h>

int main()
{

     int arr[25];
      int i;
     int positive=0;
      int negative=0;
     int even=0;
      int odd=0;
      printf("\n enter the array elements:");
     for(i=0; i<25; i++)
     {

         scanf("%d",&arr[i]);

     }

     for(i=0; i<25; i++)
     {

        if(arr[i] > 0)
            positive++;

        else
                  negative++;


     }

     for(i=0; i<25; i++)
     {

          if(arr[i]%2 == 0)
                 even ++;
          else
              odd++;

       }
      printf("\n the number of postive no =%d \n",positive);

       printf("\n the number of negative no =%d \n",negative);

         printf("\n the number of even no =%d \n",even);


      printf("\n the number of odd no =%d \n",odd);














        return 0;


}
