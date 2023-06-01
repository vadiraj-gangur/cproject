#include <stdio.h>

int main()
{

    char names[3][20];
    int i;
    for(i=0; i<=2; i++)
    {

        printf("\n Enter name: ");
        scanf("%s",names[i]);
        printf("\n You entered %s\n ",names[i]);

    }


    return 0;
}
