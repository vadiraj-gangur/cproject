

#include <stdio.h>
void bin(int);

int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    bin(n);

    return 0;
}

void bin(int n){
    if (n == 0)
        {
            return;
        }
        bin(n/2);
        printf("%d",n%2);
}
