#include <stdio.h>

void areaperi(int,float *,float *);

int main()
{

   int radius;
   float area,perimeter;

   printf("\n Enter the radius of a circle\n");
   scanf("%d",&radius);

   areaperi(radius,&area,&perimeter);
   printf("\n Area = %f\n",area);
   printf("\n Perimeter = %f\n",perimeter);



    return 0;
}

void areaperi(int r,float *a,float *p)
{

    *a = 3.14 * r * r;
    *p = 2 *3.14 *r;



}
