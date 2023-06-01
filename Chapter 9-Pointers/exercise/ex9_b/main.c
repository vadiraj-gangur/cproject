#include<stdio.h>

void conversion(float *, float *, float *, float *);
int main()
{
    float kg, g;
    float tons,pounds;
    printf("\n Enter weight in Kilogram: ");
    scanf("%f", &kg);
    conversion(&kg,&tons,&pounds,&g);

    printf("\n Conversion of kg to gram is %f ",g);
    printf("\n Conversion of kg to tons is %f ",tons);
    printf("\n Conversion of kg to pounds is %f ",pounds);



    return 0;
}

void conversion(float *kg,float *tons,float *pounds,float *g)
{


    *g = *kg * 1000;
    *tons = *kg/1000;
    *pounds = *kg *2.2;










}

