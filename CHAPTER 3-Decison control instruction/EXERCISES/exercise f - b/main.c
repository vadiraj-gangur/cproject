#include <stdio.h>

int main()
{
    int age_Ram,age_Shyam,age_Ajay;
    printf("Enter Ram age: \n");
    scanf("%d",&age_Ram);
    printf("Enter Shyam age: \n");
    scanf("%d",&age_Shyam);
    printf("Enter Ajay age: \n");
    scanf("%d",&age_Ajay);

    if(age_Ram<age_Shyam){
        if(age_Ram<age_Ajay){
            printf("Ram is youngest\n");
        }
    }else{
        if(age_Shyam<age_Ram){
            if(age_Shyam<age_Ajay){
                printf("Shyam is youngest\n");
            }
        }
    }
    if(age_Ajay<age_Ram){
        if(age_Ajay<age_Shyam){
            printf("Ajay is youngest\n");
        }
    }

    return 0;

    return 0;
}
