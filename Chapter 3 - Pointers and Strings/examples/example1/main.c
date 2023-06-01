#include <stdio.h>

int main()
{

    char s[] = "Rendezvous !";
    printf("%d\n",*(s + strlen(s)));

    return 0;
}
