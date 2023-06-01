#include <stdio.h>

int main()
{
    int length,breadth,radius;
    float pi=3.14,r_area,c_area,r_peri,c_circumference;
    printf("enter the length and breadth of rectangle\n");
    scanf("%d%d",&length,&breadth);
    printf("Enter the radus of circle\n");
    scanf("%d",&radius);
    r_area=length*breadth;
    r_peri=2*(length*breadth);
    printf("Area of Rectangle: %f\n",r_area);
    printf("Perimeter of Rectangle: %f\n",r_peri);
    c_area=pi*radius*radius;
    c_circumference=2*pi*radius;
    printf("Area of Circle: %f\n",c_area);
    printf("Circumference of Circle: %f\n",c_circumference);
    return 0;

}

