#include <stdio.h>
#include <math.h>

int main()
{
    float t,v,wcf;
    printf("Enter the values of t:\n");
    scanf("%f",&t);
    printf("Enter the values of v:\n");
    scanf("%f",&v);

    wcf = 35.74+(0.6215*t)+((0.427*t)-35.75)*pow(v,0.16);

    printf("Wind Chill Factor: %f\n",wcf);

    return 0;
}

