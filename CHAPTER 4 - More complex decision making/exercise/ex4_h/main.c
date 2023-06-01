#include <stdio.h>

int main()
{
    int month,date;
    printf("Enter the month:\n");
    scanf("%d",&month);
    printf("Enter the date:\n");
    scanf("%d",&date);

    if((month==12 && date>=22 && date<=31)||(month==1 && date>=1 && date<=19)){
        printf("Capricorn\n");
    }else if((month==1 && date>=20 && date<=31)||(month==2 && date>=1 && date<=17)){
        printf("Aquarius\n");
    }else if((month==2 && date>=18 && date<=28)||(month==3 && date>=1 && date<=19)){
        printf("Pisces\n");
    }else if((month==3 && date>=20 && date<=31)||(month==4 && date>=1 && date<=19)){
        printf("Aries\n");
    }else if((month==4 && date>=20 && date<=30)||(month==5 && date>=1 && date<=20)){
        printf("Taurus\n");
    }else if((month==5 && date>=21 && date<=31)||(month==6 && date>=1 && date<=20)){
        printf("Gemini\n");
    }else if((month==6 && date>=21 && date<=30)||(month==7 && date>=1 && date<=22)){
        printf("Cancer\n");
    }else if((month==7 && date>=23 && date<=31)||(month==8 && date>=1 && date<=22)){
        printf("Leo\n");
    }else if((month==8 && date>=23 && date<=31)||(month==9 && date>=1 && date<=22)){
        printf("Virgo\n");
    }else if((month==9 && date>=23 && date<=30)||(month==10 && date>=1 && date<=22)){
        printf("Libra\n");
    }else if((month==10 && date>=23 && date<=31)||(month==11 && date>=1 && date<=21)){
        printf("Scorpio\n");
    }else if((month==11 && date>=22 && date<=30)||(month==12 && date>=1 && date<=21)){
        printf("Sagittarius\n");
    }

    return 0;
}

