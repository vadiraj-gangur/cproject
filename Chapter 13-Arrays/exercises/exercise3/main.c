#include <stdio.h>

int main()
{
    int *a;
    int num[25]={75,64,23,21,23,55,43,5,34,54,12,98,54,54,35,23,56,23,67,24,76,33,34,23,64};
    int *b=&(num[0]);
    for(int i=0;i<25;i++)
    {
        a=&num[i];
        if(*b>*a)
        {
            *b=*a;
        }
    }
    printf("The smallest number in an array is:%d\n",*b);

}
