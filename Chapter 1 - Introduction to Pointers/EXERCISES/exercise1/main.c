#include <stdio.h>

int main()
{

     int a,*b,**c,***d,****e;

     a = 10;
     b = &a;
     c = &b;
     d = &c;
     e = &d;

     printf("\n a = %d b = %u c =%u d =%u e = %u\n",a,b,c,d,e);
     printf("%d %d %d\n",a,a + *b, **c + ***d + ****e);




      return 0;
}
