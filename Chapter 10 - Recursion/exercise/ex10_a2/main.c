
#include <stdio.h>
int bin(int);

int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

   int b = bin(n);
    printf("%d",b);
    return 0;
}

   int bin(int n){
    int bin = 0;
      int rem, i = 1;

      while (n>0) {
        rem = n % 2;
        n /= 2;
       bin += rem * i;
        i *= 10;
      }

      return bin;
}
