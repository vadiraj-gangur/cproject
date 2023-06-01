#include <stdio.h>

int main()
{
    int N;

    printf("Enter the value of N: \n");
    scanf("%d",&N);

    int n_H = N/100;
    N = N%100;

    printf("Number of 100's: %d\n",n_H);

    int n_F = N/50;
    N = N%50;

    printf("Number of 50's: %d\n",n_F);

    int n_T = N/10;
    N = N%10;

    printf("Number of 10's: %d\n",n_T);

    int n_Five = N/5;
    N = N%5;

    printf("Number of 5's: %d\n",n_Five);

    int n_Two = N/2;
    N = N%2;

    printf("Number of 2's: %d\n",n_Two);

    int n_One = N;
    N = N%1;

    printf("Number of 1's: %d\n",n_One);

    printf("Minimum number of notes used: %d\n",n_H+n_F+n_T+n_Five+n_Two+n_One);

    return 0;
}
