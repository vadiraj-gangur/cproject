#include <stdio.h>

int main()
{
    int hardness,tensile_strength;
    float carbon_content;

    printf("Enter the value of hardness\n");
    scanf("%d",&hardness);
    printf("Enter the value of carbon content\n");
    scanf("%f",&carbon_content);
    printf("Enter the value of tensile strength\n");
    scanf("%d",&tensile_strength);

    if((hardness>50) && (carbon_content<0.7) && (tensile_strength>5600)){
        printf("Grade 10\n");
    }else if((hardness>50) && (carbon_content<0.7)){
        printf("Grade 9\n");
    }else if((carbon_content<0.7) && (tensile_strength>5600)){
        printf("Grade 8\n");
    }else if((hardness>50) && (tensile_strength>5600)){
        printf("Grade 7\n");
    }else if((hardness>50) || (carbon_content<0.7) || (tensile_strength>5600)){
        printf("Grade 6\n");
    }else{
        printf("Grade 5\n");
    }

    return 0;
}
