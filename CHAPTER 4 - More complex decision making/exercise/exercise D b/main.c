#include <stdio.h>
#include <math.h>
int main()
{
    float R,G,B;
    float C,M,Y,Black,White,max;
    printf("Enter the values of R,G & B: ");
    scanf("%f %f %f",&R,&G,&B);

    printf("R,G,B: %f,%f,%f\n",R,G,B);

    if (R == 0 && G == 0 && B == 0)
    {
        printf("The value of Cyan: 0\n");
        printf("The value of Magenta: 0\n");
        printf("The value of Yellow: 0\n");
        printf("The value of Black: 1\n");
    }
    else
    {
        max = R/255;
        if (max<G/255)
            max = G/255;
        if (max<B/255)
            max = B/255;

        White = max;
        printf("\nWhite: %f\n\n", White);

        C = (White-(R/255))/White;
        M = (White-(G/255))/White;
        Y = (White-(B/255))/White;

        Black = 1- White;
        printf("The value of Cyan: %f\n", C);
        printf("The value of Magenta: %f\n", M);
        printf("The value of Yellow: %f\n", Y);
        printf("The value of Black: %f\n", Black);
    }
}
