#include <stdio.h>

int main()
{

    static char str1[] = "Good";
    static char str2[20];
    static char str3[20] = "Day";
    int l;

    l = strcmp(strcat(str3,strcpy(str2,str1)),strcat(str3,"good"));

    printf("%d",l);

    return 0;
}
