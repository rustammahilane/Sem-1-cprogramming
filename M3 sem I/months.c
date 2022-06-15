// program to print no of days in a month
#include<stdio.h>
int main()
{   
     int month=0,days;
     printf("Enter month(1,2..upto 12): ");
     scanf("%d",&month);
     switch (month)
     {
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
         days=31;
         break;
     case 4:
     case 6:
     case 9:
     case 11:
         days=30;
         break;    
     case 2:
         days= 28;
         break;
     default:
         printf("INVALID INPUT!!\n");
         break;
     }
     if(month>0 && month<=12)
     printf("Number of days in month %d : %d",month,days);
     return 0;
}    