#include <stdio.h>
#include<stdio.h>

int main()
{
    int n=10;
    float x[10]={34.22,39.87,41.85,43.23,40.06,53.29,54.14,49.12,40.71,55.15};
    float y[10]={102.43,100.93,97.43,97.81,98.32,100.07,97.08,91.59,94.85,94.65};
    float sumxy=0.0,sumx=0.0,sumy=0.0,sqx=0.0,sqy=0.0,r=0.0,r1=0.0,r2=0.0;

    for(int i=0;i<10;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+x[i]+y[i];
        sqx=sqx+(x[i]*x[i]);
        sqy=sqy+(y[i]*y[i]);
    }
    r1=sumxy-(sumx*sumy);
    r2=(n*sqx-pow(sumx,2.0))-(n*sqy-pow(sumy,2.0));
    r=r1/sqrt(r2);
    printf("Coorelation coefficient is:%d\n",r);

    return 0;
}

