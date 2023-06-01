#include <stdio.h>


struct student
{

    int roll_no;
    char name[50];
    char dept[50];
    char course[50];
    int yoj;




};



int main()
{

      int yoj,n,i;
      printf("\n enter the no of students whose details you want to enter:");
      scanf("%d",&n);
      struct student s[n];

      for(i=0; i<n;i++)
      {
          printf("\n Enter the data for student %d \n",i+1);
          scanf("%d %s %s %s %d",&s[i].roll_no,s[i].name,s[i].dept,s[i].course,&s[i].yoj);


      }

      printf("\n enter the joining date \n");
      scanf("%d",&yoj);

      printf("\n the name of the students with YOJ %d are \n",yoj);


      display_name(s,n,yoj);





   return 0;
}

void display_name(struct student *s,int n,int yoj)
{
    int i=0;
    while(i<n )
    {

        if(s->yoj == yoj)
        {

            printf("\n %s",s->name);
            printf("\n %s",s->dept);
            printf("\n %s",s->course);
        }
        s++;
        i++;
    }

}
