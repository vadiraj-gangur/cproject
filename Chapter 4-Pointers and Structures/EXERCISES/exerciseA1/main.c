#include <stdio.h>
#include<math.h>

int determinant(int,int *);
int main()
{

    int order,i,j,value;

    printf("\n Enter the order of the matrix\n");
    scanf("%d",&order);
    int a[order][order];
    for(i=0; i<order; i++)
    {
        for(j=0; j<order; j++)
        {

            scanf("%d",&a[i][j]);

        }



    }

    value = determinant(order,*a);
    printf("\n the value of determinant is %d",value);

    return 0;


}
int determinant(int n,int *arr)
{
    int i,j,k,sum=0,arr1[n-1][n-1];
    if(n>1) //recursive case
    {
        for(i=0;i<n;i++) //iterating along the first row
        {
            for(j=0;j<n;j++) //creating the smaller matrix
            {
                if(j!=i)
                {
                    for(k=1;k<n;k++)
                    {
                        if(j<i)
                            arr1[k-1][j] = *(arr + j + n*k);
                        else
                            arr1[k-1][j-1] = *(arr + j + n*k);
                    }
                }
            }
            sum = sum + pow(-1,i)*(*(arr + i))*(determinant(n-1,arr1));
            /*finally taking the sum, and passing the second matrix in another determinant function*/
        }
        return sum;

    }
    else
        return *arr;
}
