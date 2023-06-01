#include <stdio.h>

float *fun(float *);
int main()
{

     printf("sizeof int = %u",sizeof(5));
     float p = 23.5,*q;
     printf("size of variable p = %d",sizeof(p));
     q = &p;
     printf("\n q before call = %u\n",q);
     q = fun(&p);
     printf("q after call = %u\n",q);

    return 0;
}



  float *fun(float *r)
  {
      r = r +1;
      return (r);



  }




