/*******************************************************************************
WAPC to input a positive integer. Assume that the number is of 3 digits. Check and
print if the number is Armstrong or not. An Armstrong number is a number that is
equal to the sum of its own digits each raised to the power of the number of digits, 
for example, 153 = 1³ + 5³ + 3³.
********************************************************************************/

#include<stdio.h>

int main()
{
    int num1,num2,rem,new_num=0;
    printf("/nEnter a positive  3-digit integer: ");
    scanf("%d", &num1);
    if(num1<100 && num1>999)
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
            new_num=new_num+(rem*rem*rem);
            num1/=10;
        }
    }
    if(new_num==num2)
    {
        printf("\nARMSTRONG NUMBER");
    }
    else
    {
        printf("\nNOT ARMSTRONG NUMBER");
    }
    return 0;
}
