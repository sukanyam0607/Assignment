/***************************************************************************************************
WAPC to input a positive integer from the user. Check and print if the number is palindrome or not. 
A palindrome number is a number that remains the same when its digits are reversed, for example, 121.
***************************************************************************************************/

#include<stdio.h>

int main()
{
    int num1,num2,rem,new_num=0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num1);
    if(num1<0)
    {
             printf("\nInvalid input");
             return 0;
    }
    else
    {
        num2=num1;
        while(num1>0)
        {
            rem=num1%10;
            new_num=new_num*10+rem;
            num1/=10;
        }
    }
    if(new_num==num2)
    {
        printf("\nPALINDROME");
    }
    else
    {
        printf("\nNOT PALINDROME");
    }
    return 0;
}
