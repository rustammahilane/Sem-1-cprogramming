/* Write a program to compute the values 
of square-roots of and squares of the numbers 
0 to 100 in steps of 10 */
#include<stdio.h>
#include<math.h>
int main()
{
    int num = 10;
    printf("The square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));
    num += 10;
    printf("\nThe square-root and sqaure of %d are %f and %d",num,sqrt(num),(int)pow(num,2));

    return 0;
}