#include<stdio.h>

struct data
{
    int day,month,year;
}d1,d2;
int check_date(struct data *, struct data *);

int main()
{

    int result;
    printf("Enter first date\n");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("Enter the second date\n");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
     result = check_date(&d1,&d2);
    if(result == 0)
        printf("\n The dates are equal");
    else
        printf("\n The dates are not equal");


}
int check_date(struct data *d1,struct data *d2)
{


    if(d1->day==d2->day && d1->month==d2->month && d1->year==d2->year)
     return 0;

    else
    return 1;

}
