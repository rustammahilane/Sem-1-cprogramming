/* e lenght and breadth of rectangle and radius of a circle 
are input through the keyboard .
write a program to calculate the area and perimeter of rectangle and 
area , circumference of cirle */

#include<stdio.h>
#define pi 3.14
int main()
{   int l, b, rad;
    float area_cir, circum_cir;
    printf("enter length and breadth of rectangle:\n");
    scanf("%d%d", &l, &b);
    printf("Enter radius of the circle :");
    scanf("%d", &rad);
    //perimeter of rectangle = 2(sum of lenght and breadth)
    printf("Perimeter of rectangle : %d", 2*(l+b));
    //area of rectangle = l*b
    printf("\nArea of rectangle :%d", l*b);
    // calculation of area of circle
    area_cir = pi*rad*rad;
    printf("\nArea of circle :%.2f", area_cir);
    // calculation of circumference of circle
    circum_cir = 2*pi*rad;
    printf("\nCircumference  of circle :%.2f", circum_cir);
    return 0;

}
