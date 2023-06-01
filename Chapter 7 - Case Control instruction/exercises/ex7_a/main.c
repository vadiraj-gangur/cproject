#include <stdio.h>

int main()
{
    char class;
    int grace;
    printf("Enter the class:\n");
    scanf(" %c",&class);
    int sub;
    printf("Enter the subjects failed:\n");
    scanf(" %d",&sub);

    switch (class) {
    case 'F':
        if(sub>3)
                printf("Does not get any grace\n");
        else
                printf("Grace of 5 marks per subject\n");
    break;
    case 'S':
        if(sub>2)
            printf("Does not get any grace\n");
        else
            printf("Grace of 4 marks per subject\n");
    break;
    case 'T':
        if(sub>1)
                   { printf("Does not get any grace\n"); }
        else
        {
        printf("Grace of 5 marks\n");}
        break;
    }

    return 0;
}
