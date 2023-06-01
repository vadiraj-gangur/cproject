#include <stdio.h>

int main()
{

    int i =10;
    printf("\n value of i = %d address of i = %u\n",i,&i);

    &i = 7200;
    printf("\n new value of i = %d new address of i = %u\n",i,&i);



    return 0;
}
//compile time error
