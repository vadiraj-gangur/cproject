#include<stdio.h>
void fun(int **);
main()
{

    int a[3][4] = { 1,2,3,4,4,3,2,8,7,8,9,0 };
    int *ptr;
    ptr = &a[0][0];
    fun(&ptr);



}
void fun(int **p)
{

   printf("%d\n",**p);

}
