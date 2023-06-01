#include <stdio.h>

int main()
{

     char mess[6][30] = {
                             "Dont walk in front of me..",
                             "I may not follow",
                             "Don't walk behind me... ",
                             "I may not lead;",
                             "Just walk beside me...",
                             "And be my friend."



                        };

       printf("%c %c\n",*(mess[2] + 9),*(*(mess + 2 ) + 9));









       return 0;



}
