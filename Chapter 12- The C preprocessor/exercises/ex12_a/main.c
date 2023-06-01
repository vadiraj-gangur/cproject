#include <stdio.h>
#define TOLOWER(c) (c-32)
#define MEAN(a, b) ((a+b)/2.0)
#define ABS(num) (num>0?num:(num*-1))

int main()
{
    int num;
    float a, b, c;
    char ch;

    printf("Enter 2 numbers: ");
    scanf("%f %f", &a, &b);
    printf("Arithmetic Mean: %0.2f\n",MEAN(a, b));

    printf("Enter a integer number: ");
    scanf("%d", &num);
    printf("Absolute value of |%d| is %d\n", num, ABS(num));

    printf("Enter a uppercase alphabet: ");
    fflush(stdin);
    scanf("%c", &ch);
    if( ch >= 65 && ch <= 90)
    printf("To Lowercase: %c\n", TOLOWER(ch));
    else
    printf("Enter a valid uppercase alphabet\n");

    return 0;
}
