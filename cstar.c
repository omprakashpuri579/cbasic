#include <stdio.h>

int main() {
    int unit;
    float charge;
    printf("Enter number of units consumed :");
    scanf("%d",&unit);
    if(unit<=100)
    {
        charge = unit * 40;
    }
    else if (unit<=300)
    {
        charge = (100*40)+ ((unit-100)*50);

    }
    else 
    {
        charge = (100*40)+ (200*50) + ((unit - 300))*60;

    }
    charge = charge + 50;
    printf("Total charges = Rs %2f\n", charge);
    return 0;
}