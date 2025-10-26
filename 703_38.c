/*******************************************************************************************
WAPC to input a positive integer. Check and print if the number is perfect or not. A perfect number is a number 
which is equal to the sum of all its proper divisors (excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14
********************************************************************************************/

#include<stdio.h>

int main()
{
    int num,i,new_num=0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    if(num<0)
    {
             printf("\nInvalid input");
             return 0;
    }
    else
    {
        for(i=1;i<=num/2;i++)
        {
            if(num%i==0)
            new_num+=i;
        }
    }
    if(new_num==num)
    {
        printf("\nPERFECT NUMBER");
    }
    else
    {
        printf("\nNOT PERFECT NUMBER");
    }
    return 0;
}
