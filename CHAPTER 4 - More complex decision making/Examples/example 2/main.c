/* Check type of character entered from the keyboard*/
#include<stdio.h>
int main()
{

     char ch;
     printf("\n Enter a character from a keyboard:");
     scanf("%c",&ch);
     if(ch >= 65 && ch <= 90)
         printf("\n The character is an uppercase letter");

     if( ch>= 97 && ch<=122)
         printf("\n The character is a lowercase letter");

     if(ch >= 48 && ch<=57)
         printf("\n The character is a digit");

     if((ch >=0 && ch <48) || (ch > 57 && ch<65 ) || (ch >90 && ch <97) || ch > 122)
         printf("\n The character is a special symbol\n");

     return 0;

}
