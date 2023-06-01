#include <stdio.h>

int main()
{
    int ab,bc,ac,largeside;
    printf("Enter the length of the ab: \n");
    scanf("%d",&ab);
    printf("Enter the length of the bc: \n");
    scanf("%d",&bc);
    printf("Enter the length of the ac: \n");
    scanf("%d",&ac);

    if(ab>bc){
        if(ab>ac){
            largeside = ab;
        }
    }
    if(bc>ab){
        if(bc>ac){
            largeside = bc;
        }
    }
    if(ac>ab){
        if(ac>bc){
            largeside = ac;
        }
    }

    if(ab+bc>largeside && bc+ac>largeside && ab+ac>largeside){
        printf("Triangle is valid\n");
    }

    return 0;
}
