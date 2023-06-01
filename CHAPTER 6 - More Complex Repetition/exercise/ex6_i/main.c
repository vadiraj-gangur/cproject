#include <stdio.h>

int main()
{
    int x = 1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(j>=7-i+1 && j<=7+i-1){
                printf("%d ",x++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
