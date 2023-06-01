#include <stdio.h>

int main()
{


    char string[] = "OddLengthString";

    char *ptr1 = string;
    char *ptr2 = string + strlen(string) - 1;
    int i;


    for(i=0; ptr1!=ptr2; i++)
    {

        ++ptr1;
        --ptr2;



    }

    printf("%d",i);


    return 0;

}
