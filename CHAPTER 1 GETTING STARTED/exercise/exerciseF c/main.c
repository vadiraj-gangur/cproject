#include <stdio.h>

int main()
{
    int length,width,A0_height = 1189,A0_width = 841;
    printf("A0 length: %d\n",A0_height);
    printf("A0 width: %d\n\n",A0_width);

    length = A0_height/2;

    printf("A1 length: %d\n",A0_width);
    printf("A1 width: %d\n\n",length);

    width = A0_width/2;

    printf("A2 length: %d\n",length);
    printf("A2 width: %d\n\n",width);

    length = length/2;

    printf("A3 length: %d\n",width);
    printf("A3 width: %d\n\n",length);

    width = width/2;

    printf("A4 length: %d\n",length);
    printf("A4 width: %d\n\n",width);

    length = length/2;

    printf("A5 length: %d\n",width);
    printf("A5 width: %d\n\n",length);

    width = width/2;

    printf("A6 length: %d\n",length);
    printf("A6 width: %d\n\n",width);

    length = length/2;

    printf("A7 length: %d\n",width);
    printf("A7 width: %d\n\n",length);

    width = width/2;

    printf("A8 length: %d\n",length);
    printf("A8 width: %d\n\n",width);

    return 0;

}
