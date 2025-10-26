#include<stdio.h>

int main()
{
    float numberOfMales, numberOfFemales;
    float ratio;
    printf("\nEnter the number of males and females");
    scanf("%d %d", &numberOfMales, &numberOfFemales);
    ratio=(numberOfMales/numberOfFemales)*1000.0f;
    printf("\nGender ratio: %.2f", ratio);
    return 0;
}
