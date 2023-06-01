#include <stdio.h>

int i;
void increment();
void decrement();


int main()
{

    printf("\n i = %d",i);
    increment();
    increment();
    decrement();
    decrement();

     return 0;

}

void increment()
{

    i = i + 1;
    printf("\n On incrementing i = %d\n",i);


}

void decrement()
{

    i = i-1;
    printf("\n on decrementing i = %d\n",i);


}


