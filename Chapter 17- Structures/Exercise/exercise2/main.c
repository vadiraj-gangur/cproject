#include <stdio.h>
#include <string.h>
struct bank
{
    char accountno[15];
    char custname[25];
    float balance;
};
struct bank b[10];
void printdetails();
void Atm();
int main()
{
    int choice,i;
    for(i=0;i<5;i++)
    {
        printf("Enter Accountno,custname,balance:\n");
        scanf("%s %s %f",&b[i].accountno,&b[i].custname,&b[i].balance);
        fflush(stdin);
    }
    printf("Enter 1 to show details of account with balance below 1000\n");
    printf("Enter 2 to withdraw or deposit\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:printdetails();
        break;

    case 2:Atm();
        break;
    }
    return 0;
}
void printdetails()
{
    int i;
    for(i=0;i<5;i++)
    {
        if(b[i].balance<1000)
        {
            printf("%s %s %f\n",b[i].accountno,b[i].custname,b[i].balance);
        }
        else
        {
            return;
        }
    }
}
void Atm()
{
    int choice;
    float amount1;
    char accno[15];
    printf("Enter 1 to depost\n");
    printf("Enter 2 to withdraw\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:printf("Enter the account number\n");
        scanf("%s",&accno);
        fflush(stdin);
        for(int i=0;i<5;i++)
        {
            if(strcmp(b[i].accountno,accno)==0)
            {
                printf("Enter the amount to deposit:\n");
                scanf("%f",&amount1);
                b[i].balance=b[i].balance+amount1;
                printf("Available balance after depositing is %f",b[i].balance);
            }
        }
        break;

    case 2:printf("Enter the account number\n");
        scanf("%s",&accno);
        for(int i=0;i<5;i++)
        {
            if(strcmp(b[i].accountno,accno)==0)
            {
                printf("Enter the amount to Withdraw:\n");
                scanf("%f",&amount1);

                if(amount1<=b[i].balance)
                {
                    printf("The balance is insufficient for the withdrawal\n");
                }
                else
                {
                    printf("Withdrawal successfull,Thank You!");
                }
            }
        }
        break;
    }
}
