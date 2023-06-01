#include <stdio.h>

void swapr(int *,int *);
int main()
{

   int a =10;
   int b =20;

   swapr(&a,&b);
   printf("a = %d\n",a);
   printf("b = %d\n",b);

   return 0;
}

void swapr(int *x,int *y)
{
    int t = *x;
    *x = *y;
    *y = t;




}






