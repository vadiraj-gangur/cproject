#include <stdio.h>

int fact(int);
int main()
{

     int num;
     int factorial;
     printf("\n Enter a number:");
     scanf("%d",&num);
     factorial = fact(num);
     printf("\n Factorial of %d = %d\n",num,factorial);
     return 0;

}

int fact(int num)
{

    int i;
    int factorial = 1;
    for(i=1; i<=num; i++)
    {

        factorial = factorial * i;

    }

    return factorial;



}
