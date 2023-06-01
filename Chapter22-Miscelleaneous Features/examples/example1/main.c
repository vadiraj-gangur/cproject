#include <stdio.h>
#include<string.h>
int main()
{

    enum department
    {
        assembly,manufacturing,accounts,stores


    };

    struct employee
    {

        char name[30];
        int age;
        enum department dept;


    };

    struct employee e;
    strcpy(e.name,"Lothar Mattheus");
    e.age = 28;
    e.dept = manufacturing;
    printf("\n Name  = %s \n",e.name);
    printf("\n Age = %d\n",e.age);
    printf("\n Department = %d\n",e.dept);
    if(e.dept == accounts)
        printf("\n %s is an accountant \n",e.name);
    else
        printf("%s is not an accountant\n",e.name);

         return 0;

}



