//Program to find the prime and non prime numbers between a given range
#include<stdio.h>
int main()
{
     int lower,upper;
     printf("\nEnter lower and upper limit: \n");
     scanf("%d%d",&lower,&upper);
     // a number is said to be prime if it is divisible by only 2 numbers
     while(lower<=upper)
     {   
         if(lower==1)
         printf("1 is neither prime nor non prime.\n");
         if (lower==2)
         printf("2 is prime.\n");
         if (lower==3)
         printf("3 is prime.\n");
         for (int i=2; i<lower;i++)
         {
             if (lower%i==0)
             {  
                printf("%d is non prime.\n",lower);
                goto lowerincrement;
             }
             else
             {
                if (i==lower/2) 
                printf("%d is prime.\n",lower);
             }
         }
        lowerincrement : 
        lower++;
     }
     return 0;
}    