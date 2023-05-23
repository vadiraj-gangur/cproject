#include<stdio.h>

#include<string.h>
int main()
{
    char str[50];
    FILE *f1, *f2;
    f1 = fopen("D://LET US C//Chapter19-File Input Output//Examples//example2//new.txt", "r");
    f2 = fopen("D://LET US C//Chapter19-File Input Output//Examples//example3//new_3.txt", "w");
    while (fgets(str, 49, f1) != NULL)
    {
        _strupr(str);
        fputs(str, f2);
    }

    return 0;
}
