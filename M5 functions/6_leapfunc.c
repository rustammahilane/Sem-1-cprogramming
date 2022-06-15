// Program to find whether an entered year is a leap year or not
#include<stdio.h>
void leap(int a){
    if (a%4!=0 || (a%100==0 && a%400!=0))
    printf("%d is NOT a leap year.",a);
    else
    printf("%d is a leap year.",a);
}
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    leap(year);
    return 0;
}