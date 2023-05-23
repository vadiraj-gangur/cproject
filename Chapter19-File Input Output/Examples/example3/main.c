#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    FILE *fs,*ft;
    char source[67],target[67],str[80];
    puts("\n Enter source file name : ");
    gets(source);
    puts("\n Enter target file name : ");
    gets(target);

    fs = fopen("C:/Users/Admin/Desktop/LET US C/Chapter19-File Input Output/Examples/example2/new.txt","r");

    if(fs == NULL)
    {

        puts("\n Unable to open source file");
        exit(0);

    }

    ft = fopen("C:/Users/Admin/Desktop/LET US C/Chapter19-File Input Output/Examples/example3/new_2.txt","a");

    if(ft == NULL)
    {

        fclose(fs);
        puts("\n Unable to open target file ");
        exit(0);


    }

    while(fgets(str,79,fs) != NULL )
        fputs(str,ft);

    printf("\n Appending file completed!!");
    fclose(fs);
    fclose(ft);
        return 0;


}






