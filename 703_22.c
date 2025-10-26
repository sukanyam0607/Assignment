/******************************************************************************
WAPC to check and print if a number is divisible by both 3 and 5.
*******************************************************************************/

#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a number");
    scanf("%d",&num);
    if(num%3==0 && num%5==0)
    {
        printf("It is divisible by both 3 and 5");
    }
    else
    {
        printf("It is either not divisible by 3 or 5 or both");
    }
    return 0;
}
