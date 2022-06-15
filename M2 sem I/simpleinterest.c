// to find simple interest 
#include<stdio.h>
int main()
{   float principle, rate, time, si;
    printf("Enter principle amount:");
    scanf("%f",&principle);
    printf("Enter interest rate [per anum] :");
    scanf("%f",&rate);
    printf("Enter duration[no of years]:");
    scanf("%f",&time);
    // calculation of simple interest
    // si= product of principle amount, rate and time
    si=(principle*rate*time)/100;
    printf("The simple interest for the given data is %.2f",si);
    return 0;
}

