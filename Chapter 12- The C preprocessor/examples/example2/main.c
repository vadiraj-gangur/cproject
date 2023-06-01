#include <stdio.h>

#define PI 3.1415
#define PERIC(r) ( 2 * PI * r)
#define AREAC(r) ( PI *r *r)
#define PERIS(x) (4 *x )
#define AREAS(x) (x *x )
#define PERIT(x,y,z)(x + y + z)
#define AREAT(b,h) (0.5 * b * h )

int main()
{


     int d,a,b;
     float sid1,sid2,sid3,sid,p_tri,p_cir,p_sqr,a_tri,a_cir,a_sqr;
     float r,base,height;

     printf("\n Enter radius of circle: ");
     scanf("%f",&r);
     p_cir = PERIC(r);
     printf("\n Circumference of circle= %f\n",p_cir);
     a_cir = AREAC(r);
     printf("Area of circle = %f\n",a_cir);
     printf("\n Enter side os a square :");
     scanf("%f",&sid);
     p_sqr = PERIS(sid);
     printf("\n Perimeter of square = %f\n",p_sqr);
     a_sqr = AREAS(sid);
     printf("\n Area of square = %f\n",a_sqr);

     printf("\n Enter length of 3 sides of triangles: ");
     scanf("%f%f%f",&side1,&side2,&side3);


     a_tri = AREAT(base,height);
     printf("\n Area of triangle = %f\n",a_tri);

      return 0;


}





