#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    float avg;
    printf("\nEnter five integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    avg = (num1 + num2 + num3 + num4 + num5) / 5.0f;
    printf("\nThe average of five numbers is %.2f", avg);
    return 0;
}

