#include <stdio.h>
int natural_sum(int);

int main()
{
    int n = 25;
    int res = natural_sum(n);
    printf("Result: %d\n",res);
    return 0;
}

int natural_sum(int n){
    if(n==1){
        return n;
    }else{
        n = n + natural_sum(n-1);
    }
    return n;

}
