#include<stdio.h>
void f(int,int *);
main()
{

     int a[5] = { 2,4,6,8,10 };
     int i,b=5;

     for(i=0; i<5; i++)
     {

          f(a[i],&b);
          printf("%d %d\n",a[i],b);


     }
     return 0;

}
void f(int x,int *y)
{
    x = *(y) += 2;

}
