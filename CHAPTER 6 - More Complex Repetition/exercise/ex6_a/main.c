#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        int res = n*i;
        printf("%d * %d = %d\n",n,i,res);
    }

    return 0;
}
