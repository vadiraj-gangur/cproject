#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, radius;
    float dist;

    printf("Enter the center co-ordinates of the circle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x2, &y2);

    dist = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(dist>radius)
        printf("Point lies outside the circle");
    else if(dist<radius)
        printf("Point lies inside the circle");
    else if(dist==radius)
        printf("Point lies on the boundary of circle");

    return 0;
}

