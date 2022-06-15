// Program to find area and circumference of a circle
#include<stdio.h>
int main()
{
    float r;
    float area, circumference;
    float *p = &r;
    printf("enter radius of circle : ");
    scanf("%f",&r);
    area = (*p) * (*p) * 3.14;
    circumference = 2 * 3.14 * (*p);
    printf("area : %.2f\n", area);
    printf("circumference : %.2f\n", circumference);
    return 0;
}