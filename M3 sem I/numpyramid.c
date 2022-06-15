//Program to print numeric pyramid (Defined by the instructor).
#include<stdio.h>
int main()
{
     int n;
     printf("\nEnter num of lines: ");
     scanf("%d",&n);
     for (int i=1;i<=n;i++){
         for ( int j=1; j<=i; j++){
             printf(" %d",j);
         }
         printf("\n");
     }
    return 0;
}    