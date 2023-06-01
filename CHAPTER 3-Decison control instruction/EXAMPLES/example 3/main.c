#include <stdio.h>

int main()
{

    int yr;
    printf("\n Enter a year: ");
    scanf("%d",&yr);
    if(yr % 100 == 0)
    {

        if( yr % 400 == 0)
        {
            printf("\n Leap year\n");


        }

        else
        {
            printf("\n Not a leap year\n");


        }


    }

    else
    {

        if(yr % 4 == 0)
            printf("Leap year\n");
        else
            printf("\n Not a leap year");



    }

    return 0;
}
