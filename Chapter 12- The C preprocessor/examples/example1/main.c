#include <stdio.h>
#define ISUPPER(x) ( x >=65 && x<=90 ? 1 : 0 )

#define ISLOWER(x)  (x >=97 && x <=122 ? 1:0 )
#define ISALPHA(x) ( ISUPPER(x) || ISLOWER(x))
#define count(x) (for(x=0; x<5; x++) return 1)






#define BIG(x,y) ( x>y ? x : y )
int main()
{

       char ch;
       int p=3;
       int d,a,b;
       printf("\n Enter any alphabet/character:");
       scanf("%c",&ch);

       if(ISUPPER(ch) == 1)
           printf("\n you entered a capital letter\n");

       if(ISLOWER(ch) == 1)
           printf("\n you entered a small case letter");

       if(ISALPHA(ch)!= 1 )
           printf("\n you entered character other than an alphabet");

        printf("\n Enter any two numbers:");
        scanf("%d%d",&a,&b);

        d = BIG(a,b);

        printf("\n Bigger number is %d\n",d);
       // count;
        //count(3);
        if(count(p))
        {
           printf("jii");

        }
         return 0;


}










