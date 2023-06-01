#include <stdio.h>
#include<math.h>
int main()
{
    int x[5],y[5];
    float d,x1,y1;
    printf("Enter the x elements(5):");
    for(int i=0;i<5;i++){
        scanf("%d",&x[i]);
    }

    printf("Enter the y elements(5):");
    for(int i=0;i<5;i++){
        scanf("%d",&y[i]);
    }

    int small = x[0];
    for(int i=0;i<5;i++)
    {
        if(x[i] < small)
        {
            small = x[i];
        }
    }

    printf("x1 is %d\t",small);
    int large = x[0];
    for(int i=0;i<5;i++)
    {
        if(x[i] > large)
        {
            large = x[i];
        }
    }
    printf("x2 is %d\n",large);

    int small2 = y[0];
    for(int i=0;i<5;i++)
    {
        if(y[i] < small2)
        {
            small2 = y[i];
        }
    }
    printf("y1 is %d\t",small2);

    int large2 = y[0];
    for(int i=0;i<5;i++)
    {
        if(y[i] > large2)
        {
            large2 = y[i];
        }
    }

    printf("y2 is %d\n",large2);
    x1=large-small;
    y1=large2-small2;
    d=sqrt(pow(x1,2.0)+pow(y1,2.0));
    printf(" distance between two points is %f",d);

    return 0;
}
