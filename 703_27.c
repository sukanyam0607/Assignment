/*************************************************************************************
WAPC to do the following:
Input: account balance, withdrawal amount.
Follow the given rules:
Withdrawal amount must be a multiple of 100.
Withdrawal must not exceed balance.
Maintain a minimum balance of Rs.500 after withdrawal.
Output: Transaction success or failure with reason

*************************************************************************************/

#include<stdio.h>

int main()
{
    int withdrawal_amt;
    float acc_balance;
    printf("\nEnter the account balance and the withdrawal amount ");
    scanf("%f %d",&acc_balance, &withdrawal_amt);
    int flag=1;
    if((withdrawal_amt%100)!=0)
    {
        flag=0;
        printf("\nWITHDRAWAL AMOUNT IS NOT A MULTIPLE OF 100.");
    }
    if(acc_balance<withdrawal_amt)
    {
        flag=0;
        printf("\nWITHDRAWAL AMOUNT EXCEEDED ACCOUNT BALANCE.");
    }
    if((acc_balance-withdrawal_amt)<500)
    {
        flag=0;
        printf("\nACCOUNT HAS TO HAVE A MINIMUM BALANCE OF Rs.500");
    }
    if(flag)
    {
        printf("\nTRANSACTION SUCCESSFUL");
    }
    else
    {
        printf("\nTRANSACTION FAILED");
    }
    return 0;
}
