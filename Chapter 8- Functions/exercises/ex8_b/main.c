#include <stdio.h>

void prime_factors(int);

int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    prime_factors(n);
    return 0;
}

void prime_factors(int a){
    for(int i=2;i<=a;i++){
        if(a%i==0){
            int count = 0;
            for(int j=2;j<i;j++){
                if(i%j == 0){
                    count++;
                }
            }
            if(count == 0){
                printf("%d ",i);
            }
        }
    }
}
