#include <stdio.h>
#define SI(p,t,r) ((p*t*r)/100.0)
#define AMOUNT(si,p) (si+p)

int main()
{
    float p, t, r, si, amnt;
    printf("Enter the principal, time and rate of interest : ");
    scanf("%f %f %f", &p, &t, &r);
    si = SI(p,t,r);
    amnt = AMOUNT(si,p);
    printf("Simple Interest : %f\n",si);
    printf("Amount : %f\n",amnt);
    return 0;
}
