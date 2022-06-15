/*
An Employee's Basic Pay (BP) is to be read through a keyboard. DA is 40% of BP, HRA
is 20% of BP, calculate the Gross Pay (GP) GP is computed as BP+DA+HRA
*/
#include<stdio.h>
int main()
{   float BP,DA,HRA,GP;
    printf("\nEnter the basic pay of the employee:");
    scanf("%f",&BP);
    // calculation of DA
    DA=0.4*BP;
    // calculation of HRA 
    HRA=0.2*BP;
    // calculation of GP
    GP=BP+DA+HRA;
    printf("The DA and HRA are respectively:%.2f\t%.2f",DA,HRA);
    printf("\nthe gross pay [GP] of the employee is : %.2f",GP);
    return 0;
}