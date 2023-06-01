#include <stdio.h>

int main()
{

    char str[6];

    int num = 0;
    int i;
    printf("\n Enter a string containing a number: ");
    scanf("%s",str);


    for(i=0; str[i]!='\0';i++)
    {

        if( str[i] >= 48 && str[i] <= 57 )
            num = num * 10 + (str[i] - 48 );

        else
        {

             printf("\n Not a valid string\n");
             return 1;

        }

    }

     printf("\n The number is : %d\n",num);




    return 0;
}
