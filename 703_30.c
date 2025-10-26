/**************************************************************************************************
WAPC to do the following:
Input: height (m), weight (kg).
Calculate BMI = weight / (height²).
Classify:
BMI < 18.5 : Underweight
18.5 = BMI < 25 : Normal
25 = BMI < 30 : Overweight
BMI>=30 : Obese
If overweight or obese and age > 40 ? print "Consult doctor".

**************************************************************************************************/

#include <stdio.h>

int main() 
{
    float height, weight, bmi;
    int age;
    printf("Enter height (in meters): ");
    scanf("%f", &height);
    printf("Enter weight (in kilograms): ");
    scanf("%f", &weight);
    printf("Enter age: ");
    scanf("%d", &age);
    if (height <= 0) 
    {
        printf("Invalid height.\n");
        return 0;
    }
    bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25)
        printf("Normal\n");
    else if (bmi < 30) 
    {
        printf("Overweight\n");
        if (age > 40)
            printf("Consult doctor\n");
    }
    else 
    {
        printf("Obese\n");
        if (age > 40)
            printf("Consult doctor\n");
    }
    return 0;
}

