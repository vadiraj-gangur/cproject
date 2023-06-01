#include <stdio.h>



int main()
{

    int i=3;
    int *j;
    j = &i;

    printf("\n Address of i = %u\n",&i);
    printf("\n Address of i = %u\n",j);
    printf("\n Address of j = %u\n",&j);
    printf("\n Value of j = %d\n",j);
    printf("\n Value of i = %d\n",i);
    printf("\n Value of i = %d\n",*(&i));
    printf("\n Value of i = %d\n",*j);

    return 0;


}
