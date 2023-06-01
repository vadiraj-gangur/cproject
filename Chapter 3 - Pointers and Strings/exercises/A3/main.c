/*
#include <stdio.h>
#include <string.h>

int main()
{
    char *names[] =
    {
        "Santhosh",
        "Amol",
        "Santhosh Jain",
        "Kishore",
        "Rahul",
        "Amolkumar",
        "Hemant"
    };
    int i,j;

    char *t;

    for(i=0;i<6; i++) {
        for(j=i+1;j<7;j++) {
            if (strcmp(names[i],names[j])==1)
            {
                t = names[i];
                names[i] = names[j];
                names[j] = t;
            }
        }
    }


    for(i=0;i<7;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}
*/


#include <stdio.h>
#include <string.h>
int main()
{
    char *a[] = {"vadiraj","Akshay","rajesh","yatin","atul","prashant","sameer","manoj","jaadu"};
    const char *str1,  *str2;
    int compRes,i,j;
    int length = 9;
    for (i = 0; i < length; i++)
    {
        for (j = i+1; j < length; j++)
        {
            str1 = a[i];
            str2 = a[j];
            compRes = 0;
            while(*str1 && *str2)
            {
                if(*str1!=*str2)
                {
                    compRes = *str1 - *str2;
                    break;
                }
                ++str1;
                ++str2;
            }
            if (compRes > 0 || (compRes == 0 && *str1))
            {
                char* temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
        printf("%s ", a[i]);

    }
    printf("\n");
    return 0;
}



