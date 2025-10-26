#include<stdio.h>

int main()
{
    float principle, time, rate, SI;
    printf("\nEnter the principle amount, time and rate: ");
    scanf("%f %f %f", &principle, &time , &rate);
    SI=(principle*time*rate)/100.0f;
    printf("\nThe simple interest is: %.2f",SI);
    return 0;
}
