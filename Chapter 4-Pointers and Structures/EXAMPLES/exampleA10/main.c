#include <stdio.h>

struct s1
{

    char *str;
    struct s1 *next;



};

int main()
{

        static struct s1 arr[] = {
                                      {"Akhil",arr+1},
                                      {"Nikhil",arr+2},
                                      {"Anant",arr}


                                 };



        struct s1 *p[3];
        int i;

        for(i=0; i<=2;i++)
        {
            p[i] = arr[i].next;

        }

        printf("%s %s %s\n",p[0]->str,(*p) -> str,(**p).str);

        swap(*p,arr);

        printf("%s\n",p[0]->str);
        printf("%s\n",(*p)->str);

        printf("%s\n",(*p) -> next ->str);

        swap(p[0],p[0] -> next);

        printf("%s\n",p[0]->str);

        printf("%s\n",(*++p[0]).str);
        printf("%s\n",++(*++(*p) -> next).str);

       return 0;

}

swap(struct s1 *p1,struct s1 *p2)
{

       char *temp;
       temp = p1->str;
       p1->str = p2->str;
       p2->str = temp;





}

