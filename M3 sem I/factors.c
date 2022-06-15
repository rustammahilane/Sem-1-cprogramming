// program to find factors of a given number
#include<stdio.h>
int main()
{ 
     int num;
     printf("\nEnter the num you need the factors: ");
     scanf("%d",&num);
     for (int i=1; i<=num; i++){
         if (num%i==0)
         printf("%d\n",i);
     }
     return 0;
}    