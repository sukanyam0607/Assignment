/***************************************************************************************
WAPC to input a positive integer. Check whether it is Automorphic or not. 
A number whose square ends with the number itself is an Automorphic number.
Example: 25² = 625 (ends with 25)
***************************************************************************************/

#include<stdio.h>

int main()
{
    int num,digits=0,rem,new_num=0,num2;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    if(num<0)
    {
             printf("\nInvalid input");
             return 0;
    }
    else
    {
        new_num=num*num;
        while(num>0)
        {
            rem=num%10;
            digits++;
            num/=10;
        }
        num2=new_num%100;
    }
    if(new_num==num2)
    {
        printf("\nAUTOMORPHIC NUMBER");
    }
    else
    {
        printf("\nNOT AUTOMORPHIC NUMBER");
    }
    return 0;
}
