#include<stdio.h>

void removeSpaces(char *);
void removeSpaces(char *s)
{
    printf("\nvalue at s pointer =  %u ",s);
    //char *source = s;
    char *dest = s;
    printf("\nvalue of dest = %u",dest);
    printf("\naddress of s pointer = %u ",&s);
    while(*s)
    {
        if(*s == ' ')
        {
            s++;
        }
        else
        {
            *dest++ = *s++;
        }
    }
    *dest ='\0' ;


}


int main()
{
    char input[] = 'I like milk';
    printf("\naddress of first character of array %u ",input);
     removeSpaces(input);

    printf("%s\n",input);
    return 0;
}

