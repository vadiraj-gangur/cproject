#include <stdio.h>

int main()
{
    int s1_marks,s2_marks,s3_marks,s4_marks,s5_marks;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&s1_marks,&s2_marks,&s3_marks,&s4_marks,&s5_marks);
    float total_marks = (s1_marks+s2_marks+s3_marks+s4_marks+s5_marks);
   // float agg_marks = total_marks/5;

    float percentage_marks = (total_marks/500)*100;

    printf("Aggregate Marks: %f\n",total_marks);
    printf("Percentage Marks: %f\n",percentage_marks);

    return 0;
}
