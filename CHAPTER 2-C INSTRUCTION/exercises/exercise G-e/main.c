#include <stdio.h>
#include <math.h>

int main()
{
    float degree;
    printf("Enter the degree to calculate all the Trignometric ratios: \n");
    scanf("%f",&degree);

    printf("sin(%f): %f\n",degree,sin(degree));
    printf("cos(%f): %f\n",degree,cos(degree));
    printf("tan(%f): %f\n",degree,tan(degree));
    printf("Cosec(%f): %f\n",degree,1/sin(degree));
    printf("Sec(%f): %f\n",degree,1/cos(degree));
    printf("Cot(%f): %f\n",degree,1/tan(degree));

    return 0;
}
