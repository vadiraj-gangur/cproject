#include<stdio.h>
main()
{

    int n[3][3] = { 2,4,3,
                    6,8,5,
                    3,5,1};
     int *ptr;//=n;
     ptr=&n;
     printf(" %u",n[2]);
     printf(" %d",ptr[2]);
     printf(" %d\n",*( ptr + 2 ));




}


