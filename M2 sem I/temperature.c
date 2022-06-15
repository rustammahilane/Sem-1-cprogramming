// convert given fahrenhiet temperature into celsius
#include<stdio.h>
int main()
{   float f,c;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&f);
    // calculation of celsius
    c=(f-32)*5/9;
    printf("\nThe required temperature in celsius is:%f",c);
    return 0;
}