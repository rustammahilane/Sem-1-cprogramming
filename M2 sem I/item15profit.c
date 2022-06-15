/* if the total selling price of 15 items and the total profit earned on them 
   is input through the keyboard 
   write a program to find the cost of one item */
#include<stdio.h>
int main()
{   
    int sp15,t_prof;
    float cp;
    printf("Enter the selling price of 15 items :");
    scanf("%d",&sp15);
    printf("Enter the total profit :");
    scanf("%d",&t_prof);
    // calculation of cost price of 1 item
    // cp 1 item = [ sp 15 items - profit 15 items] divided by 15
    cp = (sp15 - t_prof)/15.0;
    printf("Cost of one item is %.2f", cp);
    return 0;
}