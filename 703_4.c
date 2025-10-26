#include<stdio.h>

int main()
{
    float x1,x2,y1,y2,slope;
    printf("\nEnter the first coordinate: ");
    scanf("%f %f",&x1 ,&y1);
    printf("\nEnter the second coordinate: ");
    scanf("%f %f",&x2 ,&y2);
    slope=(y2-y1)/(x2-x2);
    printf("\nThe slope is: %.2f" ,slope);
    return 0;
}
