#include <stdio.h>
#include <math.h>

int main()
{
    int angle;
    printf("Enter the angle\n");
    scanf("%d",&angle);

    (pow(sin(angle),2)+pow(cos(angle),2)==1)?printf("true\n"):printf("false\n");
    //int res = sin(angle)+cos(angle);

    printf("%d",pow(sin(angle),2)+pow(cos(angle),2));
    return 0;

}

