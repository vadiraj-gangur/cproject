#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float a[6]={137.4,155.4,149.3,160.0,155.5,149.7};
    float b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
    float  angle[6]={0.78,0.89,1.35,9.00,1.25,1.75};

    for(i=0;i<6;i++)
    {
        float area=(0.5)*a[i]*b[i]*sin(angle[i]);
        printf("Area of land %d is:%f\n",i,area);
    }
    return 0;
}
