/***************************************************************
WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
******************************************************************/

#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter the value of 'n': ");
    scanf("%d",&n);
    printf("\nFirst %d natural numbers:",n);
    for(i=1;i<=n;i++)
                     printf("\n%d",i);
    return 0;
}
