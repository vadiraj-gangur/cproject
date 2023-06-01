#include <stdio.h>



struct cricket
{

    char name[50];
    int age;
    int no_matches;
    float avg_runs;




};



int main()
{

      int n,i,d,j;
      char swap_name[50];
      int swap_age ,swap_no_matches;
      float swap_avg_runs;
      printf("\n enter the no of cricketers you want to enter: ");
      scanf("%d",&n);
      struct cricket c[n];
      for(i=0; i<n; i++)
      {

            printf("\n Enter the details of cricketer %d",i+1);
            printf("\n ENTER THE NAME OF CRICKETER");
            printf("\n ENTER THE AGE");
            printf("\n ENTER THE NO OF TEST MATCHES");
            printf("\n ENTER THE AVERAGE RUNS OF CRICKETER");
            scanf("%s %d %d %f",&c[i].name,&c[i].age,&c[i].no_matches,&c[i].avg_runs);



      }

      //printf(" name = %s ",c[i].name);

      for (i = 0 ; i < n - 1; i++)
        {
          for (j = 0 ; j < n - i - 1; j++)
          {
            if (c[j].avg_runs > c[j+1].avg_runs) /* For decreasing order use '<' instead of '>' */
            {
             // swap_name       = c[j].name;
              swap_age        = c[j].age;
              swap_no_matches = c[j].no_matches;
              swap_avg_runs = c[j].avg_runs;
             // c[j].name   = c[j+1].name;
               c[j].age   = c[j+1].age ;
               c[j].no_matches   = c[j+1].no_matches ;
               c[j].avg_runs  = c[j+1].avg_runs      ;

            //  c[j+1].name =    swap_name;
              c[j+1].age =   swap_age;
              c[j+1].no_matches = swap_no_matches   ;
              c[j+1].avg_runs = swap_avg_runs   ;




            }
          }
        }
      for(i=0; i<n; i++)
      {

            printf("\n the details of cricketer %d are :  \n",i+1);
            printf("\n  NAME OF CRICKETER %s ",c[i].name);
            printf("\n  AGE %d",c[i].age);
            printf("\n NO OF TEST MATCHES %d",c[i].no_matches);
            printf("\n  AVERAGE RUNS OF CRICKETER %f",c[i].avg_runs);




      }





      return 0;


}
