#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("\nEnter two integers: ");
    scanf("%d %d",&num1,&num2);
    printf("\nThe Numbers before swapping: \nnum1=%d and num2=%d",num1,num2);
    num3=num1;
    num1=num2;
    num2=num3;
    printf("\nThe Numbers After swapping: \nnum1=%d and num2=%d",num1,num2);
    return 0;
}
