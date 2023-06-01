#include <stdio.h>

void leap_year(int);

int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);

    leap_year(year);

    return 0;

}

void leap_year(int a){
    if(a%4==0&&(a/100!=0||a%400==0)){
        printf("Leap Year\n");
    }else{
        printf("Not a leap year\n");
    }
}
