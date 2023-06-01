#include <stdio.h>

int main()
{

      char *names[] = { "akshay","parag","raman",
                         "srinivas","gopal","rajesh"
                      };

      char *temp;
      printf("\n Original: %s %s\n",names[2],names[3]);

      temp = names[2];
      names[2] = names[3];
      names[3] = temp;

      printf("\n New :%s %s\n",names[2],names[3]);
      return 0 ;
}








