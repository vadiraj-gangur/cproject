/* check whether a triangle is valid or not */

#include<stdio.h>
int main()
{

    int side1,side2,side3,largeside,sum;
    printf("\n Enter three sides of a triangle: ");
    scanf("%d %d %d",&side1,&side2,&side3);

    if(side1 > side2)
    {
          if(side1 > side3)
          {
              sum = side2 + side3;
              largeside = side1;


          }
          else
          {
              sum = side1 +side2;
              largeside = side3;



          }

     }

    else
    {

        if(side2 > side3)
        {

            sum = side1 + side3;
            largeside = side2;

        }
        else
        {

            sum = side1 + side2;
            largeside = side3;

        }

     }

    if(sum > largeside )
        printf("\n The triangle is a valid triangle\n");

    else
        printf("\n the triangle is an invalid triangle\n");

   return 0;


}
