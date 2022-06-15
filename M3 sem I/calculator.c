//Write a menu driven program to demonstrate the simple arithmetic calculator
#include<stdio.h>
int main()
{   double a,b,result;
    int choice;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice(1...4): ");
    scanf("%d",&choice);
    printf("\nEnter the operands:\n");
    scanf("%lf%lf",&a,&b);
    switch (choice)
    {
    case 1:
         result=a+b;
         printf("Sum is %.2lf",result);
         break;
    case 2:
         result=a-b;
         printf("Subtraction is %.2lf",result);
         break;
    case 3:
         result=a*b;
         printf("Multiplication is %.2lf",result);
         break;
    case 4:
         result=a/b;
         printf("Division is %.2lf",result);
         break;
    default:
         printf("invalid choice!!!!");
         break;
    }
    return 0;
}    

    