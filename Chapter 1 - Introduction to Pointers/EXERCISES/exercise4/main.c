#include <stdio.h>

void swap(int *,int *);
void exchange(int **,int *);
int main()
{

    int c =10,d=20;
    printf("\n Before swap,c = %d d = %d\n",c,d);
    swap(&c,&d);
    printf("\n After swap,c = %d d = %d\n",c,d);






     return 0;
}

void swap(int *cc,int *dd)
{
    exchange(&cc,dd);

}

void exchange(int **cc,int *dd)
{
    int t;
    t = **cc;
    *cc = *dd;
    *dd = t;


}
