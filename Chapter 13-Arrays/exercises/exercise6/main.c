#include <stdio.h>
#include<math.h>

int main()
{
    int sum=0, add;
    int n=15;
    float total;
    int num[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    for(int i=0;i<15;i++)
    {
        sum=sum+num[i];
    }

    for(int i=0;i<15;i++)
    {
        total=0.0;
        add=num[i]-sum;
        total= sqrt(pow(add,2)) /n;
        printf("%f\n",total);
    }
}

