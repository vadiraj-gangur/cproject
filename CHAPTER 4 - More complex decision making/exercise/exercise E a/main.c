#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character\n");
    scanf("%c",&c);

   (c>=97 && c<=122?printf("Lower Case\n"):printf("Not a Lower Case\n"));

    ((c>=0 && c<=47)||(c>=58 && c<=64)||(c>=91 && c<96)||(c>=123 && c<=127)?printf("Speial Symbol\n"):printf("Not a Special Symbol\n"));

    return 0;
}
