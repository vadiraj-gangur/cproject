#include <stdio.h>

int main()
{


    int matrix1[6][6];
    int matrix2[6][6];
     int i,j;
     int sum[6][6];


     printf("\n ENTER THE ELEMENTS OF MATRIX1:");
     for(i=0;i<6;i++)
     {
         for(j=0;j<6;j++)
         {

             scanf("%d",&matrix1[i][j]);

         }




     }
      printf("\n ENTER THE ELEMENTS OF MATRIX2:");
     for(i=0;i<6;i++)
     {
         for(j=0;j<6;j++)
         {

             scanf("%d",&matrix2[i][j]);

         }
      }
     for(i=0;i<6;i++)
     {
         for(j=0;j<6;j++)
         {

            sum[i][j] = matrix1[i][j] + matrix2[i][j];

         }
      }


     printf("\n The sum of two square matrix of size 6 is\n");

     for(i=0;i<6;i++)
     {
         for(j=0;j<6;j++)
         {

            printf("%d\t",sum[i][j]);
         }
         printf("\n");
      }














        return 0;


}
