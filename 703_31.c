/**********************************************************
WAPC to input a positive integer from the user. Find and display the factorial of the number.

**********************************************************/

#include<stdio.h>

int main()
{
    int num,factorial=1,i;
    printf("/nEnter a positive integer: ");
    scanf("%d", &num);
    if(num<0)
    {
             printf("\nInvalid input");
             return 0;
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            factorial*=i;
        }
    }
    printf("\nFactorial of %d is: %d",num,factorial);
    return 0;         
}
