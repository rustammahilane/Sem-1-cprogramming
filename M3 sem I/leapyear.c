// program to find leap year
#include<stdio.h>
void main()
{
     int year;
     printf("\nEnter year: ");
     scanf("%d",&year);
     // if year is divided by 4 it is leap year except some cases
     if ((year%100==0 && year%400!=0) || year%4!=0)
     printf("\n%d is NOT a leap year.",year);
     else
     printf("\n%d is a leap year.",year);

}    