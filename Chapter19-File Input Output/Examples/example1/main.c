#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    FILE *fp;
    char str[80];
    fp = fopen("POEM.TXT","w");
    if(fp == NULL)
    {

        puts("\n Cannot open file:");
        exit(1);

    }

    printf("\n Enter a few lines of text : \n");
    while(strlen(gets(str)) > 0 )
    {

        fputs(str,fp);
        fputs("\n",fp);

    }
    fclose(fp);
    /* read the file back */
    printf("\n File contents are being read now . . .\n");
    fp = fopen("POEM.TXT","r");

    if(fp == NULL)
    {

         puts("\n Cannot open file");
         exit(2);

    }
    while(fgets(str,79,fp) != NULL)
        printf("%s",str);
    fclose(fp);





    return 0;
}
