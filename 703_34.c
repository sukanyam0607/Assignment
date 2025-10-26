/*********************************************************************
WAPC to display the sum of the first ‘n’ odd numbers and the sum of the first ‘n’ 
even numbers separately. Here, ‘n’ is the user input.
*********************************************************************/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter the value of 'n': ");
    scanf("%d",&n);
    j=1;
    printf("\nFirst %d odd numbers:",n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d",j);
        j+=2;
    }
    j=2;
    printf("\nFirst %d even numbers:",n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d",j);
        j+=2;
    }
    return 0;
}
