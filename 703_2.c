#include<stdio.h>

int main()
{
    float temp_c, temp_f;
    printf("\nEnter the temperature in celsius: ");
    scanf("%f",&temp_c);
    temp_f=(temp_c*1.8)+32.0f;
    printf("\nThe temperature converted to fahrenheit: %.2f",temp_f);
    return 0;
}
