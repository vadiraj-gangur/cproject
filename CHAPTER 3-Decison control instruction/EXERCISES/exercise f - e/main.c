#include <stdio.h>

int main()
{
    int length,breadth,a,b,c;
    float area,perimeter;
    printf("Enter the length of the rectangle: \n");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d",&breadth);

    area = length*breadth;
    perimeter = 2*(length+breadth);

    if(area>perimeter){
        printf("Rectangle area is greater than its perimeter\n");
    }
}

