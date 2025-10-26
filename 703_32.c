/*******************************************************************
WAPC to input a positive integer from the user. Find and 
display the number of digits in the number, sum of the digits of the number 
and product of the digits of the number.
*********************************************************************/

#include<stdio.h>

int main()
{
    int num,sum=0,product=1,digits=0,rem;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    if(num<0)
    {
             printf("\nInvalid input");
             return 0;
    }
    else
    {
        while(num>0)
        {
            rem=num%10;
            digits++;
            sum+=rem;
            product*=rem;
            num/=10;
        }
    }
    printf("\nNo. of digits: %d \nSum of digits: %d \nProduct of digits: %d",digits,sum,product);
    return 0;
}
