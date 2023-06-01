#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter the point(x, y)\n");
    scanf("%f %f",&x,&y);

    if(x == 0 && y == 0)
    {
        printf("Point lies on the Origin\n");
    }
    else if(x == 0)
    {
        printf("Point lies on y-axis\n");
    }
    else
    {
        printf("Point lies on x-axis\n");
    }


    return 0;
}

