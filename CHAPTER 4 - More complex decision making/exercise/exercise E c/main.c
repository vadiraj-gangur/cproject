#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);

    ((a>b && a>c)?printf("a is largest\n"):(b>a && b>c?printf("b is largest\n"):printf("c is largest\n")));

    return 0;
}
