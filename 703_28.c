/****************************************************************************************
WAPC to do the following:
Input: day, month, year.
Check the following:
Month between 1 and 12.
Correct days in month (30 vs 31 days).
February: 28 days normally, 29 days if leap year.
Output: "Valid date" or "Invalid date".

***************************************************************************************/

#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter day, month, and year: ");
    scanf("%d %d %d", &day, &month, &year);
    int valid = 1;
    if (month < 1 || month > 12) 
    {
        valid = 0;
    } 
    else 
    {
        int daysInMonth;
        switch (month) 
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                daysInMonth = 31;
                break;
            case 4: case 6: case 9: case 11:
                daysInMonth = 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                    daysInMonth = 29;
                else
                    daysInMonth = 28;
                break;
            default:
                daysInMonth = 0;
        }
        if (day < 1 || day > daysInMonth) 
        {
            valid = 0;
        }
    }
    if (valid)
    {
        printf("\nValid date");
    }
    else
    {
        printf("\nInvalid date");
    }
     return 0;
}
