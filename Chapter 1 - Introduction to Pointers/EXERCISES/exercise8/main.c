#include <stdio.h>

int main()
{

    int  i=10,j=20,diff;
    diff = &j - &i;

    printf("\n address of i = %u address of j = %u\n",&i,&j);
    printf("\n difference of addresses of i and j is %d\n",diff);


    return 0;
}
