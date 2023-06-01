#include <stdio.h>

int main()
{
    float km;
    printf("Enter the distance between the 2 cities in km: ");
    scanf("%f",&km);

    float mtrs = km*1000;
    float feet = mtrs*3.28084;
    float inches = feet*12;
    float cm = inches*2.54;

    printf("Km: %f\n",km);
    printf("Meters: %f\n",mtrs);
    printf("Feet: %f\n",feet);
    printf("Inches: %f\n",inches);
    printf("Cm: %f\n",cm);
    return 0;


}

