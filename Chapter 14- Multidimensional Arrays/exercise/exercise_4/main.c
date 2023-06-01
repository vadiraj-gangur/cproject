#include<stdio.h>
#include<conio.h>

void shift(int *base)
{
    int *web, fir, sec, i;
    web = base;
    fir = *base;//saving first value in fir variable
    sec = *(base + 1);//saving second value insec variable

    for (i = 0; i<3; i++)//shifting the values by saving them in next to next addresses
        *(web + i) = *((base + 2) + i);

    *(web + 3) = fir;
    *(web + 4) = sec;
}

int main()
{
    int a[5], i;

    printf("Enter 5 numbers : ");
    for (i = 0; i<5; i++)//scanning values
        scanf("%d", &a[i]);

    shift(a);//calling function

    printf("\n\nList after shifting it's rows by two positions.\n\n");
    for (i = 0; i<5; i++)//printing values after shifting

        printf("%d ", a[i]);
    return 0;
}
