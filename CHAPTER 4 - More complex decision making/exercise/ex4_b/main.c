#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);

    if(c>=65 && c<=90){
        printf("The character entered is capital letter\n");
    }

    if(c>=97 && c<=122){
        printf("The character entered is small case letter\n");
    }

    if(c>=48 && c<=57){
        printf("The character entered is a digit\n");
    }

    if((c>=0 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=127)){
        printf("The character entered is a special character\n");
    }

    return 0;

}

