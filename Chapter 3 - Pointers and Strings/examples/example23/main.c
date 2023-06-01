#include <stdio.h>

int main()
{

    char names[5][20] = { "Roshni","Manish","Mona","Baiju","Ritu"};

    int i;
    char *t;

    t = names[3];
    names[3] = names[4];
    names[4] = t;

    for(i=0; i<=4; i++)
    {

        printf("%s\n",names[i]);

    }





    return 0;
}
