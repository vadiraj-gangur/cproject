#include<stdio.h>


//void printinfo(struct employee *);

struct employee
{
    int code;
    char name[30];
    int doj[3];
};

int main()
{
    int i, d[3];

    struct employee hcl[4] = {

        001, "Atul", 23, 1,2022,
        007, "Vadiraj", 01, 6,2021,
        002, "Prashant", 19, 5, 2018,
        005, "Vinayak", 15, 1, 2012
    };




    printf("\nEnter the current date (dd mm yyyy) : ");
    scanf("%d%d%d", &d[0], &d[1], &d[2]);
    printf("\nEmployees with greater than or equal to 3 years of tenure\n\n");
    for (i = 0; i < 4; i++)
    {
        if (d[2] - hcl[i].doj[2] > 3)
            printinfo(&hcl[i]);
        else if (d[2] - hcl[i].doj[2] == 3)
        {
            if (d[1] - hcl[i].doj[1] > 0)
                printinfo(&hcl[i]);
            else if (hcl[i].doj[1] == d[1])
            {
                if (d[0] - hcl[i].doj[0] >= 0)
                    printinfo(&hcl[i]);

            }
        }
    }

    return 0;
}

void printinfo(struct employee *e)
{
    printf("\nCode : %d", e->code);
    printf("\nName : %s", e->name);
    printf("\nDate of joining : %d-%d-%d\n", e->doj[0], e->doj[1], e->doj[2]);
}
