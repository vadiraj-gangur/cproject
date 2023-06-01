#include <stdio.h>

int main()
{
    float basic_salary,da,hra,gs;
    printf("Enter the basic salary of Ramesh: ");
    scanf("%f",&basic_salary);
    da = 0.4*basic_salary;
    hra = 0.2*basic_salary;
    gs = da+hra+basic_salary;

    printf("Basic salary: %f\n",basic_salary);
    printf("Dearness Allowance: %f\n",da);
    printf("House Rent Allowance: %f\n",hra);
    printf("Gross salary: %f\n",gs);

    return 0;

}
