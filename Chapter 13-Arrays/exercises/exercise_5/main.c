#include <stdio.h>

void multiply(int []);
int main()
{
    int i;
    int arr[10] = {  5,2,4,90,1,22,12,60,34,17 };

    multiply(arr);
    printf("\n the new modified array is : ");
    for(i=0;i<10;i++)
        printf(" %d ",arr[i]);

    return 0;
}

void multiply(int modify[])
{
    int i;

     for(i=0; i<10; i++)
     {

          modify[i] = modify[i] * 3;


     }




}
