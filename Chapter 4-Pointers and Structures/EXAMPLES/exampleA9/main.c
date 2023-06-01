#include <stdio.h>

int main()
{
    struct s1
    {
        char *str;
        struct s1 *ptr;



    };
    static struct s1 arr[] = {
                                {"Nikhil",arr + 1},
                                {"Aditya",arr + 2},
                                {"Susheer",arr}



                             };

    struct s1 *p[3];
    int i;

    for(i=0; i<=2; i++)
        p[i] = arr[i].ptr;

    printf("%s\n",p[0]->str);

    printf("%s\n",(*p)->str);

    printf("%s\n",(**p));




    return 0;
}
