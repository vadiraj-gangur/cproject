#include <stdio.h>
#include<string.h>
char *xstrchr(char *string,char ch);
int len;
int main()
{

    char str[20],ch,*f;

    printf("\nEnter a string :\n ");
    gets(str);
    f=str;
    printf("\n Enter the character to be searched for :");
    scanf("%c",&ch);
    while(*f != NULL)
    {

        if(*f == ch)
        {
             printf("\n Character is found");
             break;
        }

        f++;



    }
    if(*f == NULL)
    {

        printf("\n Character not found");

    }

    return 0;


}
