#include <stdio.h>

int main()
{
    int n,rev = 0,temp;

    printf("Enter the value of n: \n");
    scanf("%d",&n);
    temp = n;
    int rem = n%10;
    rev = rev +(rem*10000);
    n = n/10;

    rem = n%10;
    rev = rev +(rem*1000);
    n = n/10;

    rem = n%10;
    rev = rev +(rem*100);
    n = n/10;

    rem = n%10;
    rev = rev +(rem*10);
    n = n/10;

    rem = n%10;
    rev = rev +rem;
    n = n/10;

    if(temp == rev){
        printf("Original and reversed number are equal\n");
    }else{
        printf("Original and reversed number are not equal\n");
    }

    return 0;

}

