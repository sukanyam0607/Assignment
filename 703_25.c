/******************************************************
WAPC to input the number of units of electricity consumed by a consumer. Calculate and print the electricity bill based on the following criteria:
First 100 units: Rs. 2 per unit
Next 200 units: Rs. 3 per unit
Above 300 units: Rs. 4 per unit
A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units.

******************************************************/

#include<stdio.h>

int main()
{
    int units;
    float elec_charge;
    printf("\nEnter the no. of units of electricity consumed");
    scanf("%d",&units);
    if(units<=100)
    {
        elec_charge=units*2;
    }
    else if(units>100 && units<=300)
    {
        elec_charge=(100*2)+(units-100)*3;
    }
    else if(units>300)
    {
        elec_charge=(100*2)+(200*3)+((units-300)*4);
        elec_charge=elec_charge+((2.5/100.0f)*elec_charge);
    }
    printf("/nThe bill based on the units of electricity consumed is: Rs. %.2f",elec_charge);
    return 0;
}


