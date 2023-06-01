#include <stdio.h>
#include <math.h>

int main()
{
    int ab,bc,ac,side1,side2,side3;
    printf("Enter the length of the ab: \n");
    scanf("%d",&ab);
    printf("Enter the length of the bc: \n");
    scanf("%d",&bc);
    printf("Enter the length of the ac: \n");
    scanf("%d",&ac);



    side1 = pow(ab,2);
    side2 = pow(bc,2);
    side3 = pow(ac,2);

    if(side1+side2 == side3){
        printf("Right Angled Triangle\n");
    }else if(ab==bc && bc==ac){
       printf("Equilateral Triangle\n");
    }else if(ab==bc||ab==ac){
        printf("Isosceles Triangle\n");
    }else{
        printf("Scalene Triangle\n");
    }




    return 0;
}
