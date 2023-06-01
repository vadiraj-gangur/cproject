#include <stdio.h>

int main()
{

    struct
    {

        int num;
        float f;
        char mess[50];



    }m;

    m.num=1;
    m.f=3.14;
    strcpy(m.mess,"Everything looks rosy");

    printf("%u %u %u\n",&m.num,&m.f,m.mess);
    printf("%d %f %s\n",m.num,m.f,m.mess);






     return 0;



}
