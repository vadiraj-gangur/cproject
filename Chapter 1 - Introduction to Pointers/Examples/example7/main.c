#include <stdio.h>

int main()
{

   float a = 7.999999;
   float *b,*c;
   b = &a;
   c = b;
   printf("%u %u %u\n",&a,b,c);
   printf("%f %f %f %f\n",a,*(&a),*b,*c);




    return 0;
}
