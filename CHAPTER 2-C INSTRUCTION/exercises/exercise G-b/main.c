#include<stdio.h>>

#include<math.h>
int main()
{
    float x, y, r, theta;

    printf("Enter the x and y coordinates : ");
    scanf("%f%f", &x, &y);

    r = sqrt(x*x + y*y);
    theta = atan(y/x);
    //atan() is a function to find the tan inverse

    printf("\nCoordinates in polar form : %.2f(cos(%.2f) + i.sin(%.2f))", r, theta, theta);
    //%.2f means only two decimal palces will be printed.


    return 0;
}

