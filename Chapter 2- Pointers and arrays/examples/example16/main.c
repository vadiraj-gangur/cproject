#include <stdio.h>

main()
{
    int arr[3][4] = {
                     0,1,2,3,4
                   };


     int i,*ptr;
     for(ptr = &arr[0], i=0;i<=4; i++)
        printf(" %d ",ptr[i]);


}
