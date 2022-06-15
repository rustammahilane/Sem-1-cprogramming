// e distance between two cities (in km) is input through keyboard
// write a program to convert and print this distance in meters,feet,inches and cm. 
#include<stdio.h>
int main()
{
    float km, meters, feet, inch, cm ;
    printf("Enter the distance between two cities :");
    scanf("%f",&km);
    // calculation of meter [ 1km = 1000m]
    meters = km*1000;
    // calculation of feet [ 1km = 3280.84feet]
    feet = km*3280.84;
    // calculation of inches [ 1km =39370.08inch]    
    inch = km*39370.08;
    // calculation of cm [ 1km = 100000cm]
    cm = km*100000;
    printf("Distance in meters : %.8f",meters);
    printf("\nDistance in feet : %.2f",feet);
    printf("\nDistance in inches : %.2f",inch);
    printf("\nDistance in centimeters : %.2f",cm);
    return 0;
}