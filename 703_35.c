/*********************************************************************
WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. Here, ‘n’ is user input.
*********************************************************************/

#include<stdio.h>

int main()
{
    int n,i,j=1;
    printf("\nEnter the value of 'n': ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d, ",j);
        j*=2;
    }
    return 0;
}
