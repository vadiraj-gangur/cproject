/* Circular shift */

#include <stdio.h>

int shift(int *,int *,int *);

int main()
{
    int a,b,c;
    printf("Enter the values of a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a = %d b = %d c = %d\n",a,b,c);
    shift(&a,&b,&c);


    printf("a = %d b = %d c = %d\n",a,b,c);


    return 0;

}

int shift(int *x, int *y, int *z){
    int temp;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}
