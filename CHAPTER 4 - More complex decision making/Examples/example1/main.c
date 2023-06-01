#include <stdio.h>

int main()
{
    int year;
    printf("\n Enter year :");
    scanf("%d",&year);

    if(year % 400 == 0 || year % 100 != 0 && year %4 ==0 )
        printf("\n leap year\n");

    else
        printf("\n Not a leap year");
    return 0;
}
