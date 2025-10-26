/****************************************************************************************
WAPC to accept the weight of a parcel in kilograms and calculate the rate per kilogram based on the following criteria:

Weight in kilograms                    Rate per kilogram
First 5 kilograms                            Rs. 800
Next 5 kilograms                             Rs. 700
Above 10 kilograms                           Rs. 500

Also input the type of the courier (‘I’ for International and ‘D’ for Domestic).
If the type of the courier is International, an additional amount of Rs. 1500 is levied.
*******************************************************************************************/

#include<stdio.h>

int main()
{
    float weight,rate;
    char type;
    printf("\nEnter the weight of the parcel in kgs and type of courier(I/D)");
    scanf("%f %c",&weight,&type);
    if(weight<=5)
    {
        rate=weight*800;
    }
    else if(weight>5 && weight<=10)
    {
        rate=(5*800)+(weight-5)*700;
    }
    else if(weight>10)
    {
        rate=(5*800)+(5*700)+((weight-10)*500);
    }
    if(type=='I' || type=='i')
    {
        rate=rate+1500;
    }
    printf("\nThe rate of the parcel is: Rs. %.2f",rate);
    return 0;
}
