/**********************************************************************************************************
WAPC to do the following:
Input: age, citizenship status (Y/N), criminal record (Y/N).
Eligible if: age = 18 and citizenship = Y and no criminal record.
If age = 60, print "Senior Citizen Eligible".
If not eligible, specify why.

**********************************************************************************************************/

#include <stdio.h>

int main() 
{
    int age;
    char citizen, criminal;
    printf("\nEnter age: ");
    scanf("%d", &age);
    printf("\nAre you a citizen? (Y/N): ");
    scanf(" %c", &citizen);
    printf("\nDo you have a criminal record? (Y/N): ");
    scanf(" %c", &criminal);
    if (age >= 18 && (citizen == 'Y' || citizen == 'y') && (criminal == 'N' || criminal == 'n'))
    {
        if (age >= 60)
            printf("\nSenior Citizen Eligible");
        else
            printf("\nEligible");
    } 
    else 
    {
        printf("Not Eligible - ");
        if (age < 18)
            printf("Underage");
        else if (citizen == 'N' || citizen == 'n')
            printf("Not a citizen");
        else if (criminal == 'Y' || criminal == 'y')
            printf("Has criminal record");
    }
    return 0;
}

