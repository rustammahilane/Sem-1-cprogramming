#include<stdio.h>
int main()
{ 
     int num;
     printf("HELLO THERE!");
     printf("\nenter the num you need the factors: ");
     scanf("%d",&num);
     printf("\nThe factors of the num %d are:\n",num);
     for (int i=1; i<=num; i++){
         if (num%i==0)
         printf("%d\n",i);
     }
     return 0;
}    