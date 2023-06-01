#include <stdio.h>

int main()
{
    float fahrenheit;
    printf("Enter the Fahrenheit value:\n");
    scanf("%f",&fahrenheit);

    float centigrade = (fahrenheit-32)*5/9;

    printf("Centigrade: %0.2f\n",centigrade);

    return 0;

}
