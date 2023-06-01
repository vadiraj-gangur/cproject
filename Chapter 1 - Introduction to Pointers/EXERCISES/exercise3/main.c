#include <stdio.h>

int main()
{

    int c =10,d=20;

     printf("\n We are in main()...\n");
     printf("\n Address of c = %u Address of d = %u\n",&c,&d);
     printf("\n Before swap(),c = %d d = %d\n",c,d);
     swap(c,d);
     printf("\n Back to main()..");
     printf("\n After swap(),c = %d d = %d\n",c,d);


    return 0;
}

void swap(int c,int d)
{

    printf("\n We are in swap()...\n");
    printf("\n Address of c = %u Address of d = %u\n",&c,&d);
    printf("\n Before change(), c = %d d = %d\n",c,d);
    change(c,d);
    printf("\n Back to swap()..\n");
    printf("\n After change(), c = %d d = %d\n",c,d);

}

void change(int c,int d)
{
    int t;

    printf("\n We are in change()..\n");
    printf("\n Address of c = %u Address of d = %u\n",&c,&d);
    printf("\n Before interchanging,c = %d d = %d\n",c,d);
    t = c;
    c = d;
    d =t;
    printf("\n After interchanging ,c = %d d = %d\n",c,d);


}
