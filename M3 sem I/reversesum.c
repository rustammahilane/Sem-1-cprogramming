// program to find reverse of a number and sum of its digits
#include<stdio.h>
int main()
{
     int num,b=0,c=0;
     printf("Enter a number: ");
     scanf("%d",&num);
     printf("\nReverse of the number is: ");
     while (num)
     {
         printf("%d",num%10);
         b+= num%10;
         num /= 10;
     }
     printf("\nSum of digits : %d",b);
     return 0;
}    
