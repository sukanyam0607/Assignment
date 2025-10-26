/***********************************************************
WAPC to check if a number is of 3-digits and divisible by 3.
************************************************************/

#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter an integer");
    scanf("%d",&num);
    if(num>=100 && num<=999)
    {
        printf("\nIt is a three digit number");
        if(num%3==0)
        {
            printf("\nIt is divisible by 3");
        }
        else
        {
            printf("\nIt is not divisible by 3");
        } 
    }
    else
    {
        printf("\nIt is not a three digit number");
    }
    return 0;
}
