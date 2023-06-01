#include <stdio.h>

int main()
{
    int angle1,angle2,angle3;
    printf("Enter the value of angle1\n");
    scanf("%d",&angle1);
    printf("Enter the value of angle2\n");
    scanf("%d",&angle2);
    printf("Enter the value of angle3\n");
    scanf("%d",&angle3);

    if(angle1+angle2+angle3==180){
        printf("Triangle is valid\n");
    }else{
        printf("Triangle is not valid\n");
    }

    return 0;
}
