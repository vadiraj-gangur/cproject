#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    if(n>0){
        printf("Absolute value of a number is: %d\n",n);
    }else{
        printf("Absolute value of a number is: %d\n",-n);
    }
}
