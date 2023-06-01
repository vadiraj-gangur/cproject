#include <stdio.h>
#include <math.h>

void calculate(int *,int *,int *,int *,int *,double *,double *,double *);

int main()
{
    int n1,n2,n3,n4,n5;
    double sum,average,standard_deviation;
    printf("Enter the 5 numbers:\n");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    calculate(&n1,&n2,&n3,&n4,&n5,&sum,&average,&standard_deviation);

    printf("Sum = %d\n",sum);
    printf("Average = %lf\n",average);
    printf("Standard Deviation = %lf\n",standard_deviation);
    return 0;
}

void calculate(int *a, int *b, int *c, int *d, int *e, double *s, double *avg, double *sd){
    *s = *a+*b+*c+*d+*e;

    *avg = *s/5.0;

    *sd = sqrt((pow((*a-*avg),2.0)+pow((*b-*avg),2.0)+pow((*b-*avg),2.0)+pow((*d-*avg),2.0)+pow((*e-*avg),2.0))/4);

}









